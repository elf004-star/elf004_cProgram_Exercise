-- 数值循环

print("数值循环：")
for i = 1, 5 do
	print("计数：" .. i)
end

-- 泛型循环（遍历表）
print("\n遍历数组：")
local fruits = { "苹果", "香蕉", "橙子" }
for index, fruit in ipairs(fruits) do
	print(index .. ": " .. fruit)
end

print("\n遍历键值对：")
local person = { name = "小明", age = 20, city = "北京" }
for key, value in pairs(person) do
	print(key .. ": " .. tostring(value))
end
