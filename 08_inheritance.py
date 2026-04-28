# 父类 (Bsse Class / Superclass)
class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def eat(self):
        print(f"{self.name}正在进食。")

    def sleep(self):
        print(f"{self.name}正在睡觉")

    def describe(self):
        return f"我是一只名叫{self.name}的动物，我{self.age}岁了。"


# 子类(Derived Calss / subclass) Dog 继承自 Animal
class Dog(Animal):
    def __init__(self, name, age, breed):
        # 调用父类的构造函数来初始化父类属性
        super().__init__(name, age)
        self.breed = breed  # Dog 类特有的属性

    def bark(self):
        print(f"{self.name}(一只{self.breed})汪汪叫！")

    # 子类可以重写(Override)父类的方法
    def describe(self):
        # 也可以在重写的方法中调用父类的方法
        parent_desc = super().describe()
        return f"{parent_desc}我是{self.breed}。"


# 子类 Cat 继承 Animal
class Cat(Animal):
    def __init__(self, name, age, color):
        super().__init__(name, age)
        self.color = color

    def meow(self):
        print(f"{self.name}(一只{self.color}的猫)喵喵叫！")


# 创建子类对象
my_dog = Dog("乐乐", 3, "金毛")
my_cat = Cat("咪咪", 2, "白色")

# 调用继承 Animal 的方法
my_dog.eat()
my_cat.sleep()

# 调用子类特有的方法
my_dog.bark()
my_cat.meow()

# 调用被子类重写的方法
print(my_dog.describe())
print(
    my_cat.describe()
)  # Cat 类没有重写 describe, 所以调用的是 Animal 的 describe 方法
