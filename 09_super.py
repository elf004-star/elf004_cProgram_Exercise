class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        return f"我叫{self.name},今年{self.age}岁。"


class Student(Person):
    def __init__(self, name, age, student_id, major):
        # 方式一：直接调用父类 __init__ 方法（不推荐，如果父类改变，这里也得改）
        # Person.__inint__(self, name, age)

        # 方式二：使用 super() 调用父类的 __init__ 方法（推荐，更灵活）
        super().__init__(name, age)
        self.student_id = student_id
        self.major = major

    def introduce(self):
        # 在子类方法中调用父类的 introduce 方法
        parent_intro = super().introduce()
        return f"{parent_intro}我的学号是{self.student_id},专业是{self.major}。"

    def study(self):
        print(f"{self.name}正在学习{self.major}。")


class Teacher(Person):
    def __init__(self, name, age, teacher_id, department):
        super().__init__(name, age)
        self.teacher_id = teacher_id
        self.department = department

    def introduce(self):
        return f"我叫{self.name},今年{self.age}岁。我是一名{self.department} 的老师，工号是{self.teacher_id}。"

    def teach(self):
        print(f"{self.name}正在{self.department}授课。")


# 创建对象
student1 = Student("小明", 20, "2021001", "计算机科学")
teacher1 = Teacher("李老师", 35, "T005", "数学系")

print(student1.introduce())
student1.study()

print(teacher1.introduce())
teacher1.teach()

# 调用父类未重写的方法
teacher1_person_info = Person.introduce(
    teacher1
)  # 也可以通过父类直接调用方法，并手动传入实例
print(f"教师的原始介绍：{teacher1_person_info}")
