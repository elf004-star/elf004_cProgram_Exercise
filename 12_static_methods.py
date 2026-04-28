import datetime


class Calculator:
    def __init__(self, name="通用计算器"):
        self.name = name

    def add(self, a, b):
        return a + b

    @staticmethod  # 使用 @staticmethod 装饰器定义静态方法
    def multiply(x, y):  # 静态方法不接收 self 或 cls 参数
        return x * y

    @staticmethod
    def is_weekend(date):  # 检查给定日期是否是周末
        # date 是 datetime.date 对象
        return date.weekday() >= 5  # 0-Mon, 1-Tue, ..., 5-Sat, 6-Sun


# 创建 Calculator 对象
calc = Calculator()

print(f"{calc.name} 的加法结果：{calc.add(5, 3)}")

# 调用静态方法：可以通过类名调用
print(f"通过类名调用乘法结果：{Calculator.multiply(4, 6)}")
# 也可以通过实例调用，但它仍然只是一个普通函数
print(f"通过实例调用乘法结果：{calc.multiply(2, 7)}")

# 使用静态方法检查日期
today = datetime.date(2024, 7, 20)  # 这是一个星期六
tomorrow = datetime.date(2024, 7, 21)  # 这是一个星期日
next_monday = datetime.date(2024, 7, 22)  # 这是一个星期一

print(f"\n{today}是周末吗？{Calculator.is_weekend(today)}")
print(f"{tomorrow}是周末吗？{Calculator.is_weekend(tomorrow)}")
print(f"{next_monday}是周末吗？{Calculator.is_weekend(next_monday)}")
