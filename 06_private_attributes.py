class BankAccount:
    def __init__(self, account_holder, initial_balance=0):
        self.account_holder = account_holder
        # 使用单个下划线 `_` 开头的属性，表示它是一个“受保护的”或“内部使用的”属性
        # 这是一种约定，告诉开发者不应该直接从外部访问或修改它。
        self._balance = initial_balance
        print(f"账户持有人{self.account_holder}的账户已创建，初始余额：{self._balance}")

    def deposit(self, amount):
        if amount > 0:
            self._balance += amount
            print(f"存入{amount}元，当前余额：{self._balance}")
        else:
            print("存款金额必须大于零。")

    def withdraw(self, amount):
        if 0 < amount <= self._balance:
            self._balance -= amount
            print(f"取出{amount}元，当前余额：{self._balance}")
        else:
            print("取款失败：金额无效或余额不足。")

    def get_balance(self):
        # 提供一个公共办法来安全地获取余额
        return self._balance


# 创建银行账户
account = BankAccount("张三", 1000)

account.deposit(500)
account.withdraw(200)

# 尝试直接访问“私有”属性（虽然可以访问，但不推荐）
print(f"通过直接访问获得的余额（不推荐）：{account._balance}")

# 通过公共方法获取余额（推荐）
print(f"通过公共方法获得的余额：{account.get_balance()}")

account.withdraw(2000)  # 余额不足
account.deposit(-100)  # 存款金额无效
