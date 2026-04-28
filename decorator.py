# 定义一个简单的计时装饰器

import time


def timer(func):
    """计算函数执行时间的装饰器"""

    def wrapper(*args, **kwargs):
        start = time.time()
        result = func(*args, **kwargs)
        end = time.time()
        print(f"{func.__name__}执行时间：{end - start:.4f}秒")
        return result

    return wrapper


# 使用装饰器
@timer
def slow_function():
    """模拟一个耗时函数"""
    time.sleep(1)
    return "任务完成"


# 调用函数
print(slow_function())
