-- break 示例
for i = 1, 10 do
	if i == 5 then
		print("遇到5，提前结束循环")
		break
	end
	print("循环中：" .. i)
end
