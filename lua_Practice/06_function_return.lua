-- 函数定义与调用

local function add(a, b)
	return a + b
end

local multiply = function(a, b)
	return a * b
end

print("加法：" .. add(10, 5)) -- 15
print("乘法：" .. multiply(10, 5)) -- 50

-- 多返回值
function GetUserInfo()
	return "张三", 25, "程序员"
end

local name, age, job = GetUserInfo()
print(name .. ", " .. age .. "岁，职业：" .. job)
