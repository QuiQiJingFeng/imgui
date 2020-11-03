local constant = require("constant")
if not constant.open then
	constant.open = imgui.Bool(true)
end
imgui.Begin("AK47",constant.open:getPtr())
	if imgui.Button("close") then
		constant.open:setValue(false)
	end
imgui.End()