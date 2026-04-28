-- goto 示例（谨慎使用）
local i = 1

::loop_start::
if i <= 3 then
    print("goto循环" .. i)
    i = i + 1
    goto loop_start
end
