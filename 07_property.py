class Circle:
    def __init__(self, radius):
        self._radius = 0  # 初始值设为0，通过setter进行验证
        self.radius = radius  # 调用setter来设置初始半径

    @property   # 定义radius属性的getter方法
    def radius(self):
        print("正在获取半径...")
        return self._radius

    @radius.setter  # 定义radius属性的setter方法
    def radius(self, value):
        print("正在设置半径...")
        if not isinstance(value, (int, float)):
            raise TypeError("半径必须是数字。")
        if value < 0:
            raise ValueError("半径不能为负值。")
        self._radius = value    # 实际存储值到内部的 _radius 属性

    @property
    def area(self): # 面积是一个只读属性，没有 setter
        return 3.14159 * (self._radius ** 2)

    @property
    def circumference(self):    # 周长也是只读属性
        return 2 * 3.14159 * self._radius

# 创建 Circle 对象
c = Circle(5)

# 像访问普通属性一样获取 radius,但实际上调用了 @property 装饰的 getter 方法
print(f"圆的半径：{c.radius}")
print(f"圆的半径：{c.area}")
print(f"圆的周长：{c.circumference}")

# 像设置普通属性一样设置 radius, 但实际上调用了 @radius.setter 装饰的 setter 方法
c.radius = 10
print(f"新半径：{c.radius}")
print(f"新面积：{c.area}")

# 尝试设置无效的半径
try:
    c.radius = -2 # 会触发 ValueError
except ValueError as e:
    print(f"错误：{e}")

try:
    c.radius = "abc"    # 会触发 TypeError
except TypeError as e:
    print(f"错误：{e}")

# 尝试修改只读属性 area （会报错）
try:
    c.area = 100
except AttributeError as e:
    print(f"错误：{e}")


