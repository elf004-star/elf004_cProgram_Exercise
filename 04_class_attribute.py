class Dog:
    # 类属性：所有 Dog 实例共享的属性
    species = "Canis familiaris"  # 犬科动物

    def __init__(self, name, age):
        self.name = name  # 实例属性：每个 Dog 实例独有的属性
        self.age = age  # 实例属性

    def description(self):
        return f"{self.name}是一只{self.age}岁的{Dog.species}。"  # 访问类属性有两种方式：Dog.species 或 self.species


# 创建 Dog 实例
dog1 = Dog("豆豆", 4)
dog2 = Dog("豆豆", 6)

print(dog1.description())
print(dog2.description())

# 访问类属性
print(f"所有狗的物种都是：{Dog.species}")
print(f"dog1 的物种：{dog1.species}")  # 也可以通过实例访问类属性
print(f"dog2 的物种：{dog2.species}")

# 修改类属性
Dog.species = "Canis lupus familiaris"  # 物种定义更精确了

print("\n修改类属性：")
print(dog1.description())  # dog1 和 dog2 的 species 都变了
print(dog2.description())
