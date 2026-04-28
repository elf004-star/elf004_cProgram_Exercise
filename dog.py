# 定义一个名为 Dog 的类


class Dog:
    pass  # `pass` 是一个空操作，表示类定义是空的


# 创建 Dog 类的两个对象（实例）
dog1 = Dog()
dog2 = Dog()

# 打印对象的类型和内存地址
print(f"dog1 的类型：{type(dog1)}")
print(f"dog2 的类型：{type(dog2)}")
print(f"dog1 和 dog2 是同一个对象吗？{dog1 is dog2}")  # 它们是不同的独立对象
