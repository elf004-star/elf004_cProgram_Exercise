/* 找出最长的行并打印 */
/* 练习 1.16：修改打印任意长度输入行的程序 */
/*
 * 修复说明：
 * 1. 修复了 mycopy 函数返回类型：int -> void（原来返回值无意义）
 */

#include <stdio.h>

#define MAXLINE 20 /* 每次读取的最大字符数 */

int mygetline(char s[], int lim);
void mycopy(char to[], char from[]); /* 修复：原来是 int 返回类型 */

int main(void) {
    char line[MAXLINE];          /* 当前读取的行片段 */
    char longest[MAXLINE] = {0}; /* 保存最长行的开头部分（修复：原来未初始化，可能打印垃圾数据） */
    char temp[MAXLINE];          /* 临时保存当前完整行的开头部分 */

    int lengthline = 0; /* 当前读取片段的长度 */
    int maxleng = 0;    /* 目前找到的最长行的总长度 */
    int getstatus = 0;  /* 状态标志：0=新行开始，1=继续读取同一行 */
    int totalw = 0;     /* 当前行的总长度（可能跨多次读取） */

    while ((lengthline = mygetline(line, MAXLINE)) > 0) {
        if (getstatus == 1) {
            /* 继续读取上一行的后续部分 */
            totalw = totalw + lengthline;
        } else {
            /* 开始读取新的一行 */
            mycopy(temp, line); /* 保存这一行的开头部分 */
            totalw = lengthline;
        }

        /* 检查是否读完了整行：如果最后一个字符不是换行符，说明行还没读完 */
        /* 修复：原来是 line[MAXLINE - 1]，错误地检查固定位置而非实际读取的最后字符 */
        if (line[lengthline - 1] != '\n') {
            getstatus = 1; /* 标记为继续读取状态 */
        } else {
            getstatus = 0; /* 标记为新行开始状态 */
        }

        /* 当一行读取完毕时，检查是否是最长的行 */
        if (totalw > maxleng && getstatus == 0) {
            maxleng = totalw;
            mycopy(longest, temp); /* 保存最长行的开头部分 */
        }
    }

    /* 打印最长行的开头部分和总长度 */
    printf("%s\n", longest);
    printf("len = %d\n", maxleng);

    return 0;
}

/* mygetline: 读取一行到 s 中，返回长度 */
int mygetline(char s[], int lim) {
    int i;
    int c;

    /* 读取字符直到达到限制、遇到EOF或换行符 */
    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF && c != '\n'); ++i) {
        s[i] = c;
    }

    /* 如果遇到换行符，将其包含在字符串中 */
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    /* 如果遇到EOF但已读取了一些字符，添加换行符 */
    else if (c == EOF && i > 0) {
        s[i] = '\n';
        ++i;
    }

    s[i] = '\0'; /* 字符串结束符 */

    return i; /* 返回读取的字符数 */
}

/* mycopy: 将 from 复制到 to；假设 to 足够大 */
/* 修复：原来返回类型是 int 并返回 0，但返回值从未被使用，改为 void 更合理 */
void mycopy(char to[], char from[]) {
    int i;
    i = 0;

    /* 逐字符复制，直到遇到字符串结束符 */
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
