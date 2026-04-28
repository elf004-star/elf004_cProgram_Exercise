class Dog:
    # __init__方法 （构造函数），在创建对象时自动调用
    def __init__(self, name, age):
        self.name = name  # 将传入的 name 赋值为实例属性 self.name
        self.age = age  # 将传入的 age 赋值给实例属性 self.age
        print(f"一只名叫{self.name}的狗被创建了！")

    def bark(self):
        print(f"{self.name}汪汪！")

    def get_info(self):
        return f"{self.name}是一只{self.age}岁的狗。"


# 创建 Dog 对象，并传入初始属性
dog1 = Dog("小黑", 2)
dog2 = Dog("小白", 5)

# 访问对象的属性
print(dog1.get_info())
print(dog2.get_info())

# 调用对象的方法
dog1.bark()
dog2.bark()
