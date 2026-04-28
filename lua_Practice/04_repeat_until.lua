-- repeat-until 至少执行一次
local num = 5
repeat
	print("当前数值：" .. num)
	num = num - 1
until num < 3
-- 输出：当前数字：5\n 当前数值：4\n 当前数值：3
