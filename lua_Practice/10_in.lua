-- in 用于泛型for循环
local colors = { "红色", "绿色", "蓝色" }

print("遍历数组：")
for index, color in ipairs(colors) do
	print("索引" .. index .. ": " .. color)
end

print("\n遍历表：")
local config = { width = 800, height = 600, fullscreen = false }
for key, value in pairs(config) do
	print(key .. " = " .. tostring(value))
end
