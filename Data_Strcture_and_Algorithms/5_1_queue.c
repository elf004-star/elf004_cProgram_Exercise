#include <stdio.h>
#define SIZE 3

int arr[SIZE];
int front = 0;
int rear = 0;

void Queue_en(int e);
void Queue_de(void);
void myshow();

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    Queue_en(a);
    myshow();

    Queue_en(b);
    myshow();

    Queue_en(c);
    myshow();

    Queue_en(d);
    myshow();

    Queue_de();
    myshow();

    Queue_de();
    myshow();

    Queue_de();
    myshow();

    Queue_de();
    myshow();

    return 0;
}

void Queue_en(int val) {
    if (rear == SIZE) {
        printf("Queue full! The last element is %d\n", arr[rear - 1]);
    } else {
        arr[rear] = val;
        printf("Queue not full, the en-element is %d\n", val);
        rear++;
    }
}

void Queue_de(void) {
    if (front == rear) {
        printf("Queue empty!\n");
    } else {
        printf("Queue not empty, the de-element is %d\n", arr[front]);
        front++;
    }
}

void myshow() {
    int i = 0;

    if (front >= rear) {
        printf("QUeue empty!\n");
        printf("****************\n");
        return;
    }
    for (i = front; i <= rear - 1; ++i) {
        printf("%d\n", arr[i]);
    }
    printf("****************\n");
}
