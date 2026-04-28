class Dog:
    def bark(self):  # 定义一个名为 bark 的方法
        print("汪汪！")


# 创建一个 Dog 对象
my_dog = Dog()

# 手动为对象添加属性
my_dog.name = "旺财"
my_dog.age = 3

# 访问对象的属性
print(f"我的狗叫 {my_dog.name}，它 {my_dog.age} 岁了。")

# 调用对象的方法
my_dog.bark()

