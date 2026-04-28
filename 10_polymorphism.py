class Animal:
    def speak(self):
        raise NotImplementedError("子类必须实现此方法")


class Dog(Animal):
    def speak(self):
        return "汪汪！"


class Cat(Animal):
    def speak(self):
        return "喵喵！"


class Duck(Animal):
    def speak(self):
        return "嘎嘎！"


# 定义一个函数，可以接受任何 Animal 类型的对象


def make_animal_speak(animal):
    print(f"这只动物说：{animal.speak()}")


# 创建不同类型的动物对象
my_dog = Dog()
my_cat = Cat()
my_duck = Duck()

# 调用一个函数，但不同对象会给出不同响应
make_animal_speak(my_dog)
make_animal_speak(my_cat)
make_animal_speak(my_duck)

# 也可以直接调用它们各自的 speak 方法
animals = [my_dog, my_cat, my_duck]
print("\n--- 遍历动物列表 ---")
for animal in animals:
    print(f"通过列表调用：{animal.speak()}")
