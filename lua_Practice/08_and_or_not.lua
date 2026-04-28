-- 逻辑运算
local a = true
local b = false
local x = 10
local y = nil

print("a and b: " .. tostring(a and b)) -- false
print("a or b: " .. tostring(a or b)) -- true
print("not a: " .. tostring(not a)) -- false
print("x: " .. tostring(x)) -- false

-- Lua 中的 or 可以用于默认值
local name = y or "默认姓名"
print("姓名：" .. name) -- 默认姓名

-- and 可以用于条件赋值
local score = 85
local result = (score >= 60) and "及格" or "不及格"
print("考试结果：" .. result) -- 及格
