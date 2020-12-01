 
local boolean = imgui.Boolean.new(true)
local check_select = imgui.Boolean.new(false);
local sliderValue = imgui.Floater.new(0);

local integer = imgui.Integer.new(0);

local size = imgui.Floater.new(36)
local thickness = imgui.Floater.new(36)

local function main()
	if boolean:getValue() then 
		imgui.Begin("title1",boolean:getPtr());
			imgui.Text("this is a custom window");
			if (imgui.Button("Close Me")) then
				boolean:setValue(false)
			end
			imgui.SameLine();
			imgui.Checkbox("checkBox", check_select:getPtr());
			if (check_select:getValue()) then
				is_open = false;
			end
 
		imgui.RadioButton("radio a", integer:getPtr(), 0); imgui.SameLine();
		imgui.RadioButton("radio b", integer:getPtr(), 1); imgui.SameLine();
		imgui.RadioButton("radio c", integer:getPtr(), 2);
 
 
		imgui.DragFloat("Size", size:getPtr(), 0.2, 2.0, 72.0, "%.0f",1.0);
		imgui.DragFloat("Thickness", thickness:getPtr(), 0.05, 1.0, 8.0, "%.02f",1.0);

		imgui.End();
 	end
end

function Main()
	main()
end

 