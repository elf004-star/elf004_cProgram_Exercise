-- 特殊值演示
local var1 = nil -- 空值
local var2 = true -- 布尔真
local var3 = false -- 布尔假
local var4 = 10 -- number

print("var1 类型：" .. type(var1)) -- nil
print("var2 类型：" .. type(var2)) -- boolean
print("var3 类型：" .. type(var3)) -- boolean
print("var4 类型：" .. type(var4)) -- number

-- nil 表示不存在
local person = { name = "李四", age = 30 }
print("person.name: " .. tostring(person.name)) -- 李四
print("person.job: " .. tostring(person.job)) -- nil
