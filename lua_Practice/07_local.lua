-- 局部变量与全局变量
GlobaVar = "我是全局变量" -- 全局变量（避免使用）

do
	local localVar = "我是局部变量"
	print("内部访问：" .. localVar) -- 可以访问
end

-- print(localVar)  -- 错误！局部变量已不可访问
print("全局变量：" .. GlobaVar) -- 可以访问
