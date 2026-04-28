class Car:
    total_cars_created = 0  # 类属性：记录创建的汽车总数

    def __init__(self, brand, model):
        self.brand = brand
        self.model = model
        Car.total_cars_created += 1  # 每次创建实例，类属性加1

    def get_info(self):
        return f"品牌：{self.brand}, 型号：{self.model}"

    @classmethod  # 使用 @classmethod 装饰器定义类方法
    def get_total_car(cls):  # 类方法的第一个参数通常是cls, 代表本身
        return f"总共创建了{cls.total_cars_created}辆汽车。"

    @classmethod
    def from_string(cls, car_string):  # 类方法作为“工厂方法”创建实例
        brand, model = car_string.split('-')
        return cls(brand, model)  # 使用 cls() 来创建类的实例


# 创建 Car 实例
car1 = Car("Toyota", "Camry")
car2 = Car("Honda", "Civic")

print(car1.get_info())
print(car2.get_info())

# 调用类方法：可以通过类名调用
print(Car.get_total_car())
# 也可以通过实例调用，但它仍然作用于类
print(car1.get_total_car())

# 使用类方法作为工厂方法创建实例
car3 = Car.from_string("Ford-Focus")
print(car3.get_info())
print(Car.get_total_car())
