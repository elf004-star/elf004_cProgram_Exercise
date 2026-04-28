class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year
        self.speed = 0  # 初始速度为0

    def accelerate(self, increment):  # 加速方法
        self.speed += increment  # 修改当前对象的 speed 属性
        print(f"{self.brand} {self.model}加速到{self.speed}km/h。")

    def brake(self, decrement):  # 刹车方法
        self.speed -= decrement
        if self.speed < 0:
            self.speed = 0
        print(f"{self.brand}{self.model}减速到{self.speed}km/h。")

    def get_info(self):
        # 方法内部可以访问当前对象的其他属性
        return f"这是一辆{self.year}年的{self.brand}{self.model},当前速度{self.speed}km/h。"


# 创建汽车对象
my_car = Car("Tesla", "Model 3", 2023)
your_car = Car("BMW", "X5", 2022)

print(my_car.get_info())
print(your_car.get_info())

my_car.accelerate(50)  # 调用 my_car 的 accelerate 方法
your_car.accelerate(70)  # 调用 your_car 的 accelerate 方法

print(my_car.get_info())  # your_car 的 speed 也改变了，但互不影响

my_car.brake(20)
print(my_car.get_info())
