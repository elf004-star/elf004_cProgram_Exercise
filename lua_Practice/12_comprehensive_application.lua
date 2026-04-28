-- 综合案例：简单计算
function Calculate(a, b, operation)
	if operation == "add" then
		return a + b
	elseif operation == "subtract" then
		return a - b
	elseif operation == "multiply" then
		return a * b
	elseif operation == "divide" then
		if b == 0 then
			return nil, "除数不能为零"
		else
			return a / b
		end
	else
		return nil, "未知操作"
	end
end

-- 测试计算器
local operations = { "add", "subtract", "multiply", "divide" }

for _, op in ipairs(operations) do
	local result, err = Calculate(10, 5, op)
	if err then
		print(op .. ": " .. err)
	else
		print(op .. ": " .. result)
	end
end
