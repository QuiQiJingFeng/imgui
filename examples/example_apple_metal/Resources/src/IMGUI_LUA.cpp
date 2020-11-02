#include "IMGUI_LUA.h"
IMGUI_LUA* IMGUI_LUA::__instance = nullptr;

IMGUI_LUA* IMGUI_LUA::getInstance()
{
    if(__instance == nullptr){
        __instance = new IMGUI_LUA();
    }
    return __instance;
}

//ImGuiContext* CreateContext(ImFontAtlas* shared_font_atlas = NULL)
FValue IMGUI_LUA::CreateContext(FValueVector vector)
{
    //TODO
}

//void DestroyContext(ImGuiContext* ctx = NULL)
FValue IMGUI_LUA::DestroyContext(FValueVector vector)
{
    //TODO
}

//ImGuiContext* GetCurrentContext()
FValue IMGUI_LUA::GetCurrentContext(FValueVector vector)
{
    //TODO
}

//void SetCurrentContext(ImGuiContext* ctx)
FValue IMGUI_LUA::SetCurrentContext(FValueVector vector)
{
    //TODO
}

//ImGuiIO& GetIO()
FValue IMGUI_LUA::GetIO(FValueVector vector)
{
    //TODO
}

//ImGuiStyle& GetStyle()
FValue IMGUI_LUA::GetStyle(FValueVector vector)
{
    //TODO
}

//void NewFrame()
FValue IMGUI_LUA::NewFrame(FValueVector vector)
{
    ImGui::NewFrame()
    return FValue();
}

//void EndFrame()
FValue IMGUI_LUA::EndFrame(FValueVector vector)
{
    ImGui::EndFrame()
    return FValue();
}

//void Render()
FValue IMGUI_LUA::Render(FValueVector vector)
{
    ImGui::Render()
    return FValue();
}

//ImDrawData* GetDrawData()
FValue IMGUI_LUA::GetDrawData(FValueVector vector)
{
    //TODO
}

//void ShowDemoWindow(bool* p_open = NULL)
FValue IMGUI_LUA::ShowDemoWindow(FValueVector vector)
{
    //TODO
}

//void ShowAboutWindow(bool* p_open = NULL)
FValue IMGUI_LUA::ShowAboutWindow(FValueVector vector)
{
    //TODO
}

//void ShowMetricsWindow(bool* p_open = NULL)
FValue IMGUI_LUA::ShowMetricsWindow(FValueVector vector)
{
    //TODO
}

//void ShowStyleEditor(ImGuiStyle* ref = NULL)
FValue IMGUI_LUA::ShowStyleEditor(FValueVector vector)
{
    //TODO
}

//bool ShowStyleSelector(const char* label)
FValue IMGUI_LUA::ShowStyleSelector(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    bool ret = ImGui::ShowStyleSelector(label);
    return FValue(ret);
}

//void ShowFontSelector(const char* label)
FValue IMGUI_LUA::ShowFontSelector(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    ImGui::ShowFontSelector(label)
    return FValue();
}

//void ShowUserGuide()
FValue IMGUI_LUA::ShowUserGuide(FValueVector vector)
{
    ImGui::ShowUserGuide()
    return FValue();
}

//char* GetVersion()
FValue IMGUI_LUA::GetVersion(FValueVector vector)
{
    //TODO
}

//void StyleColorsDark(ImGuiStyle* dst = NULL)
FValue IMGUI_LUA::StyleColorsDark(FValueVector vector)
{
    //TODO
}

//void StyleColorsClassic(ImGuiStyle* dst = NULL)
FValue IMGUI_LUA::StyleColorsClassic(FValueVector vector)
{
    //TODO
}

//void StyleColorsLight(ImGuiStyle* dst = NULL)
FValue IMGUI_LUA::StyleColorsLight(FValueVector vector)
{
    //TODO
}

//bool Begin(const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0)
FValue IMGUI_LUA::Begin(FValueVector vector)
{
    //TODO
}

//void End()
FValue IMGUI_LUA::End(FValueVector vector)
{
    ImGui::End()
    return FValue();
}

//bool BeginChild(const char* str_id, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::BeginChild(FValueVector vector)
{
    //TODO
}

//void EndChild()
FValue IMGUI_LUA::EndChild(FValueVector vector)
{
    ImGui::EndChild()
    return FValue();
}

//bool IsWindowAppearing()
FValue IMGUI_LUA::IsWindowAppearing(FValueVector vector)
{
    bool ret = ImGui::IsWindowAppearing();
    return FValue(ret);
}

//bool IsWindowCollapsed()
FValue IMGUI_LUA::IsWindowCollapsed(FValueVector vector)
{
    bool ret = ImGui::IsWindowCollapsed();
    return FValue(ret);
}

//bool IsWindowFocused(ImGuiFocusedFlags flags=0)
FValue IMGUI_LUA::IsWindowFocused(FValueVector vector)
{
    int flags = vector[0].asInt();
    bool ret = ImGui::IsWindowFocused(flags);
    return FValue(ret);
}

//bool IsWindowHovered(ImGuiHoveredFlags flags=0)
FValue IMGUI_LUA::IsWindowHovered(FValueVector vector)
{
    int flags = vector[0].asInt();
    bool ret = ImGui::IsWindowHovered(flags);
    return FValue(ret);
}

//ImDrawList* GetWindowDrawList()
FValue IMGUI_LUA::GetWindowDrawList(FValueVector vector)
{
    //TODO
}

//float GetWindowDpiScale()
FValue IMGUI_LUA::GetWindowDpiScale(FValueVector vector)
{
    float ret = ImGui::GetWindowDpiScale();
    return FValue(ret);
}

//ImVec2 GetWindowPos()
FValue IMGUI_LUA::GetWindowPos(FValueVector vector)
{
    //TODO
}

//ImVec2 GetWindowSize()
FValue IMGUI_LUA::GetWindowSize(FValueVector vector)
{
    //TODO
}

//float GetWindowWidth()
FValue IMGUI_LUA::GetWindowWidth(FValueVector vector)
{
    float ret = ImGui::GetWindowWidth();
    return FValue(ret);
}

//float GetWindowHeight()
FValue IMGUI_LUA::GetWindowHeight(FValueVector vector)
{
    float ret = ImGui::GetWindowHeight();
    return FValue(ret);
}

//void SetNextWindowPos(const ImVec2& pos, ImGuiCond cond = 0, const ImVec2& pivot = ImVec2(0, 0)
FValue IMGUI_LUA::SetNextWindowPos(FValueVector vector)
{
    //TODO
}

//void SetNextWindowSize(const ImVec2& size, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetNextWindowSize(FValueVector vector)
{
    //TODO
}

//void SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback = NULL, void* custom_callback_data = NULL)
FValue IMGUI_LUA::SetNextWindowSizeConstraints(FValueVector vector)
{
    //TODO
}

//void SetNextWindowContentSize(const ImVec2& size)
FValue IMGUI_LUA::SetNextWindowContentSize(FValueVector vector)
{
    //TODO
}

//void SetNextWindowCollapsed(bool collapsed, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetNextWindowCollapsed(FValueVector vector)
{
    bool collapsed = vector[0].asBool();
    int cond = vector[1].asInt();
    ImGui::SetNextWindowCollapsed(collapsed,cond)
    return FValue();
}

//void SetNextWindowFocus()
FValue IMGUI_LUA::SetNextWindowFocus(FValueVector vector)
{
    ImGui::SetNextWindowFocus()
    return FValue();
}

//void SetNextWindowBgAlpha(float alpha)
FValue IMGUI_LUA::SetNextWindowBgAlpha(FValueVector vector)
{
    float alpha = vector[0].asFloat();
    ImGui::SetNextWindowBgAlpha(alpha)
    return FValue();
}

//void SetNextWindowViewport(ImGuiID viewport_id)
FValue IMGUI_LUA::SetNextWindowViewport(FValueVector vector)
{
    int viewport_id = vector[0].asInt();
    ImGui::SetNextWindowViewport(viewport_id)
    return FValue();
}

//void SetWindowPos(const ImVec2& pos, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetWindowPos(FValueVector vector)
{
    //TODO
}

//void SetWindowSize(const ImVec2& size, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetWindowSize(FValueVector vector)
{
    //TODO
}

//void SetWindowCollapsed(bool collapsed, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetWindowCollapsed(FValueVector vector)
{
    bool collapsed = vector[0].asBool();
    int cond = vector[1].asInt();
    ImGui::SetWindowCollapsed(collapsed,cond)
    return FValue();
}

//void SetWindowFocus()
FValue IMGUI_LUA::SetWindowFocus(FValueVector vector)
{
    ImGui::SetWindowFocus()
    return FValue();
}

//void SetWindowFontScale(float scale)
FValue IMGUI_LUA::SetWindowFontScale(FValueVector vector)
{
    float scale = vector[0].asFloat();
    ImGui::SetWindowFontScale(scale)
    return FValue();
}

//ImVec2 GetContentRegionMax()
FValue IMGUI_LUA::GetContentRegionMax(FValueVector vector)
{
    //TODO
}

//ImVec2 GetContentRegionAvail()
FValue IMGUI_LUA::GetContentRegionAvail(FValueVector vector)
{
    //TODO
}

//ImVec2 GetWindowContentRegionMin()
FValue IMGUI_LUA::GetWindowContentRegionMin(FValueVector vector)
{
    //TODO
}

//ImVec2 GetWindowContentRegionMax()
FValue IMGUI_LUA::GetWindowContentRegionMax(FValueVector vector)
{
    //TODO
}

//float GetWindowContentRegionWidth()
FValue IMGUI_LUA::GetWindowContentRegionWidth(FValueVector vector)
{
    float ret = ImGui::GetWindowContentRegionWidth();
    return FValue(ret);
}

//float GetScrollX()
FValue IMGUI_LUA::GetScrollX(FValueVector vector)
{
    float ret = ImGui::GetScrollX();
    return FValue(ret);
}

//float GetScrollY()
FValue IMGUI_LUA::GetScrollY(FValueVector vector)
{
    float ret = ImGui::GetScrollY();
    return FValue(ret);
}

//float GetScrollMaxX()
FValue IMGUI_LUA::GetScrollMaxX(FValueVector vector)
{
    float ret = ImGui::GetScrollMaxX();
    return FValue(ret);
}

//float GetScrollMaxY()
FValue IMGUI_LUA::GetScrollMaxY(FValueVector vector)
{
    float ret = ImGui::GetScrollMaxY();
    return FValue(ret);
}

//void SetScrollX(float scroll_x)
FValue IMGUI_LUA::SetScrollX(FValueVector vector)
{
    float scroll_x = vector[0].asFloat();
    ImGui::SetScrollX(scroll_x)
    return FValue();
}

//void SetScrollY(float scroll_y)
FValue IMGUI_LUA::SetScrollY(FValueVector vector)
{
    float scroll_y = vector[0].asFloat();
    ImGui::SetScrollY(scroll_y)
    return FValue();
}

//void SetScrollHereX(float center_x_ratio = 0.5f)
FValue IMGUI_LUA::SetScrollHereX(FValueVector vector)
{
    float center_x_ratio = vector[0].asFloat();
    ImGui::SetScrollHereX(center_x_ratio)
    return FValue();
}

//void SetScrollHereY(float center_y_ratio = 0.5f)
FValue IMGUI_LUA::SetScrollHereY(FValueVector vector)
{
    float center_y_ratio = vector[0].asFloat();
    ImGui::SetScrollHereY(center_y_ratio)
    return FValue();
}

//void SetScrollFromPosX(float local_x, float center_x_ratio = 0.5f)
FValue IMGUI_LUA::SetScrollFromPosX(FValueVector vector)
{
    float local_x = vector[0].asFloat();
    float center_x_ratio = vector[1].asFloat();
    ImGui::SetScrollFromPosX(local_x,center_x_ratio)
    return FValue();
}

//void SetScrollFromPosY(float local_y, float center_y_ratio = 0.5f)
FValue IMGUI_LUA::SetScrollFromPosY(FValueVector vector)
{
    float local_y = vector[0].asFloat();
    float center_y_ratio = vector[1].asFloat();
    ImGui::SetScrollFromPosY(local_y,center_y_ratio)
    return FValue();
}

//void PushFont(ImFont* font)
FValue IMGUI_LUA::PushFont(FValueVector vector)
{
    //TODO
}

//void PopFont()
FValue IMGUI_LUA::PopFont(FValueVector vector)
{
    ImGui::PopFont()
    return FValue();
}

//void PushStyleColor(ImGuiCol idx, ImU32 col)
FValue IMGUI_LUA::PushStyleColor(FValueVector vector)
{
    //TODO
}

//void PopStyleColor(int count = 1)
FValue IMGUI_LUA::PopStyleColor(FValueVector vector)
{
    int count = vector[0].asInt();
    ImGui::PopStyleColor(count)
    return FValue();
}

//void PushStyleVar(ImGuiStyleVar idx, float val)
FValue IMGUI_LUA::PushStyleVar(FValueVector vector)
{
    int idx = vector[0].asInt();
    float val = vector[1].asFloat();
    ImGui::PushStyleVar(idx,val)
    return FValue();
}

//void PopStyleVar(int count = 1)
FValue IMGUI_LUA::PopStyleVar(FValueVector vector)
{
    int count = vector[0].asInt();
    ImGui::PopStyleVar(count)
    return FValue();
}

//ImVec4& GetStyleColorVec4(ImGuiCol idx)
FValue IMGUI_LUA::GetStyleColorVec4(FValueVector vector)
{
    //TODO
}

//ImFont* GetFont()
FValue IMGUI_LUA::GetFont(FValueVector vector)
{
    //TODO
}

//float GetFontSize()
FValue IMGUI_LUA::GetFontSize(FValueVector vector)
{
    float ret = ImGui::GetFontSize();
    return FValue(ret);
}

//ImVec2 GetFontTexUvWhitePixel()
FValue IMGUI_LUA::GetFontTexUvWhitePixel(FValueVector vector)
{
    //TODO
}

//ImU32 GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f)
FValue IMGUI_LUA::GetColorU32(FValueVector vector)
{
    //TODO
}

//void PushItemWidth(float item_width)
FValue IMGUI_LUA::PushItemWidth(FValueVector vector)
{
    float item_width = vector[0].asFloat();
    ImGui::PushItemWidth(item_width)
    return FValue();
}

//void PopItemWidth()
FValue IMGUI_LUA::PopItemWidth(FValueVector vector)
{
    ImGui::PopItemWidth()
    return FValue();
}

//void SetNextItemWidth(float item_width)
FValue IMGUI_LUA::SetNextItemWidth(FValueVector vector)
{
    float item_width = vector[0].asFloat();
    ImGui::SetNextItemWidth(item_width)
    return FValue();
}

//float CalcItemWidth()
FValue IMGUI_LUA::CalcItemWidth(FValueVector vector)
{
    float ret = ImGui::CalcItemWidth();
    return FValue(ret);
}

//void PushTextWrapPos(float wrap_local_pos_x = 0.0f)
FValue IMGUI_LUA::PushTextWrapPos(FValueVector vector)
{
    float wrap_local_pos_x = vector[0].asFloat();
    ImGui::PushTextWrapPos(wrap_local_pos_x)
    return FValue();
}

//void PopTextWrapPos()
FValue IMGUI_LUA::PopTextWrapPos(FValueVector vector)
{
    ImGui::PopTextWrapPos()
    return FValue();
}

//void PushAllowKeyboardFocus(bool allow_keyboard_focus)
FValue IMGUI_LUA::PushAllowKeyboardFocus(FValueVector vector)
{
    bool allow_keyboard_focus = vector[0].asBool();
    ImGui::PushAllowKeyboardFocus(allow_keyboard_focus)
    return FValue();
}

//void PopAllowKeyboardFocus()
FValue IMGUI_LUA::PopAllowKeyboardFocus(FValueVector vector)
{
    ImGui::PopAllowKeyboardFocus()
    return FValue();
}

//void PushButtonRepeat(bool repeat)
FValue IMGUI_LUA::PushButtonRepeat(FValueVector vector)
{
    bool repeat = vector[0].asBool();
    ImGui::PushButtonRepeat(repeat)
    return FValue();
}

//void PopButtonRepeat()
FValue IMGUI_LUA::PopButtonRepeat(FValueVector vector)
{
    ImGui::PopButtonRepeat()
    return FValue();
}

//void Separator()
FValue IMGUI_LUA::Separator(FValueVector vector)
{
    ImGui::Separator()
    return FValue();
}

//void SameLine(float offset_from_start_x=0.0f, float spacing=-1.0f)
FValue IMGUI_LUA::SameLine(FValueVector vector)
{
    float offset_from_start_x = vector[0].asFloat();
    float spacing = vector[1].asFloat();
    ImGui::SameLine(offset_from_start_x,spacing)
    return FValue();
}

//void NewLine()
FValue IMGUI_LUA::NewLine(FValueVector vector)
{
    ImGui::NewLine()
    return FValue();
}

//void Spacing()
FValue IMGUI_LUA::Spacing(FValueVector vector)
{
    ImGui::Spacing()
    return FValue();
}

//void Dummy(const ImVec2& size)
FValue IMGUI_LUA::Dummy(FValueVector vector)
{
    //TODO
}

//void Indent(float indent_w = 0.0f)
FValue IMGUI_LUA::Indent(FValueVector vector)
{
    float indent_w = vector[0].asFloat();
    ImGui::Indent(indent_w)
    return FValue();
}

//void Unindent(float indent_w = 0.0f)
FValue IMGUI_LUA::Unindent(FValueVector vector)
{
    float indent_w = vector[0].asFloat();
    ImGui::Unindent(indent_w)
    return FValue();
}

//void BeginGroup()
FValue IMGUI_LUA::BeginGroup(FValueVector vector)
{
    ImGui::BeginGroup()
    return FValue();
}

//void EndGroup()
FValue IMGUI_LUA::EndGroup(FValueVector vector)
{
    ImGui::EndGroup()
    return FValue();
}

//ImVec2 GetCursorPos()
FValue IMGUI_LUA::GetCursorPos(FValueVector vector)
{
    //TODO
}

//float GetCursorPosX()
FValue IMGUI_LUA::GetCursorPosX(FValueVector vector)
{
    float ret = ImGui::GetCursorPosX();
    return FValue(ret);
}

//float GetCursorPosY()
FValue IMGUI_LUA::GetCursorPosY(FValueVector vector)
{
    float ret = ImGui::GetCursorPosY();
    return FValue(ret);
}

//void SetCursorPos(const ImVec2& local_pos)
FValue IMGUI_LUA::SetCursorPos(FValueVector vector)
{
    //TODO
}

//void SetCursorPosX(float local_x)
FValue IMGUI_LUA::SetCursorPosX(FValueVector vector)
{
    float local_x = vector[0].asFloat();
    ImGui::SetCursorPosX(local_x)
    return FValue();
}

//void SetCursorPosY(float local_y)
FValue IMGUI_LUA::SetCursorPosY(FValueVector vector)
{
    float local_y = vector[0].asFloat();
    ImGui::SetCursorPosY(local_y)
    return FValue();
}

//ImVec2 GetCursorStartPos()
FValue IMGUI_LUA::GetCursorStartPos(FValueVector vector)
{
    //TODO
}

//ImVec2 GetCursorScreenPos()
FValue IMGUI_LUA::GetCursorScreenPos(FValueVector vector)
{
    //TODO
}

//void SetCursorScreenPos(const ImVec2& pos)
FValue IMGUI_LUA::SetCursorScreenPos(FValueVector vector)
{
    //TODO
}

//void AlignTextToFramePadding()
FValue IMGUI_LUA::AlignTextToFramePadding(FValueVector vector)
{
    ImGui::AlignTextToFramePadding()
    return FValue();
}

//float GetTextLineHeight()
FValue IMGUI_LUA::GetTextLineHeight(FValueVector vector)
{
    float ret = ImGui::GetTextLineHeight();
    return FValue(ret);
}

//float GetTextLineHeightWithSpacing()
FValue IMGUI_LUA::GetTextLineHeightWithSpacing(FValueVector vector)
{
    float ret = ImGui::GetTextLineHeightWithSpacing();
    return FValue(ret);
}

//float GetFrameHeight()
FValue IMGUI_LUA::GetFrameHeight(FValueVector vector)
{
    float ret = ImGui::GetFrameHeight();
    return FValue(ret);
}

//float GetFrameHeightWithSpacing()
FValue IMGUI_LUA::GetFrameHeightWithSpacing(FValueVector vector)
{
    float ret = ImGui::GetFrameHeightWithSpacing();
    return FValue(ret);
}

//void PushID(const char* str_id)
FValue IMGUI_LUA::PushID(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    ImGui::PushID(str_id)
    return FValue();
}

//void PopID()
FValue IMGUI_LUA::PopID(FValueVector vector)
{
    ImGui::PopID()
    return FValue();
}

//ImGuiID GetID(const char* str_id)
FValue IMGUI_LUA::GetID(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    ImGuiID ret = ImGui::GetID(str_id);
    return FValue(ret);
}

//void TextUnformatted(const char* text, const char* text_end = NULL)
FValue IMGUI_LUA::TextUnformatted(FValueVector vector)
{
    string text_temp = vector[0].asString();
    const char* text = text_temp.c_str();
    string text_end_temp = vector[1].asString();
    const char* text_end = text_end_temp.c_str();
    ImGui::TextUnformatted(text,text_end)
    return FValue();
}

//void Text(const char* fmt, ...)
FValue IMGUI_LUA::Text(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::Text(fmt)
    return FValue();
}

//void TextV(const char* fmt, va_list args)
FValue IMGUI_LUA::TextV(FValueVector vector)
{
    //TODO
}

//void TextColored(const ImVec4& col, const char* fmt, ...)
FValue IMGUI_LUA::TextColored(FValueVector vector)
{
    //TODO
}

//void TextColoredV(const ImVec4& col, const char* fmt, va_list args)
FValue IMGUI_LUA::TextColoredV(FValueVector vector)
{
    //TODO
}

//void TextDisabled(const char* fmt, ...)
FValue IMGUI_LUA::TextDisabled(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::TextDisabled(fmt)
    return FValue();
}

//void TextDisabledV(const char* fmt, va_list args)
FValue IMGUI_LUA::TextDisabledV(FValueVector vector)
{
    //TODO
}

//void TextWrapped(const char* fmt, ...)
FValue IMGUI_LUA::TextWrapped(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::TextWrapped(fmt)
    return FValue();
}

//void TextWrappedV(const char* fmt, va_list args)
FValue IMGUI_LUA::TextWrappedV(FValueVector vector)
{
    //TODO
}

//void LabelText(const char* label, const char* fmt, ...)
FValue IMGUI_LUA::LabelText(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    string fmt_temp = vector[1].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::LabelText(label,fmt)
    return FValue();
}

//void LabelTextV(const char* label, const char* fmt, va_list args)
FValue IMGUI_LUA::LabelTextV(FValueVector vector)
{
    //TODO
}

//void BulletText(const char* fmt, ...)
FValue IMGUI_LUA::BulletText(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::BulletText(fmt)
    return FValue();
}

//void BulletTextV(const char* fmt, va_list args)
FValue IMGUI_LUA::BulletTextV(FValueVector vector)
{
    //TODO
}

//bool Button(const char* label, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::Button(FValueVector vector)
{
    //TODO
}

//bool SmallButton(const char* label)
FValue IMGUI_LUA::SmallButton(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    bool ret = ImGui::SmallButton(label);
    return FValue(ret);
}

//bool InvisibleButton(const char* str_id, const ImVec2& size, ImGuiButtonFlags flags = 0)
FValue IMGUI_LUA::InvisibleButton(FValueVector vector)
{
    //TODO
}

//bool ArrowButton(const char* str_id, ImGuiDir dir)
FValue IMGUI_LUA::ArrowButton(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int dir = vector[1].asInt();
    bool ret = ImGui::ArrowButton(str_id,dir);
    return FValue(ret);
}

//void Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0)
FValue IMGUI_LUA::Image(FValueVector vector)
{
    //TODO
}

//bool ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0)
FValue IMGUI_LUA::ImageButton(FValueVector vector)
{
    //TODO
}

//bool Checkbox(const char* label, bool* v)
FValue IMGUI_LUA::Checkbox(FValueVector vector)
{
    //TODO
}

//bool CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value)
FValue IMGUI_LUA::CheckboxFlags(FValueVector vector)
{
    //TODO
}

//bool RadioButton(const char* label, bool active)
FValue IMGUI_LUA::RadioButton(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    bool active = vector[1].asBool();
    bool ret = ImGui::RadioButton(label,active);
    return FValue(ret);
}

//void ProgressBar(float fraction, const ImVec2& size_arg = ImVec2(-1, 0)
FValue IMGUI_LUA::ProgressBar(FValueVector vector)
{
    //TODO
}

//void Bullet()
FValue IMGUI_LUA::Bullet(FValueVector vector)
{
    ImGui::Bullet()
    return FValue();
}

//bool BeginCombo(const char* label, const char* preview_value, ImGuiComboFlags flags = 0)
FValue IMGUI_LUA::BeginCombo(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    string preview_value_temp = vector[1].asString();
    const char* preview_value = preview_value_temp.c_str();
    int flags = vector[2].asInt();
    bool ret = ImGui::BeginCombo(label,preview_value,flags);
    return FValue(ret);
}

//void EndCombo()
FValue IMGUI_LUA::EndCombo(FValueVector vector)
{
    ImGui::EndCombo()
    return FValue();
}

//bool Combo(const char* label, int* current_item, const char* const items[], int items_count, int popup_max_height_in_items = -1)
FValue IMGUI_LUA::Combo(FValueVector vector)
{
    //TODO
}

//bool DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragFloat(FValueVector vector)
{
    //TODO
}

//bool DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragFloat2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_speed = vector[2].asFloat();
    float v_min = vector[3].asFloat();
    float v_max = vector[4].asFloat();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragFloat2(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragFloat3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_speed = vector[2].asFloat();
    float v_min = vector[3].asFloat();
    float v_max = vector[4].asFloat();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragFloat3(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragFloat4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_speed = vector[2].asFloat();
    float v_min = vector[3].asFloat();
    float v_max = vector[4].asFloat();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragFloat4(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", const char* format_max = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragFloatRange2(FValueVector vector)
{
    //TODO
}

//bool DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragInt(FValueVector vector)
{
    //TODO
}

//bool DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragInt2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    float v_speed = vector[2].asFloat();
    int v_min = vector[3].asInt();
    int v_max = vector[4].asInt();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragInt2(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragInt3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    float v_speed = vector[2].asFloat();
    int v_min = vector[3].asInt();
    int v_max = vector[4].asInt();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragInt3(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragInt4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    float v_speed = vector[2].asFloat();
    int v_min = vector[3].asInt();
    int v_max = vector[4].asInt();
    string format_temp = vector[5].asString();
    const char* format = format_temp.c_str();
    int flags = vector[6].asInt();
    bool ret = ImGui::DragInt4(label,v,v_speed,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", const char* format_max = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragIntRange2(FValueVector vector)
{
    //TODO
}

//bool DragScalar(const char* label, ImGuiDataType data_type, void* p_data, float v_speed, const void* p_min = NULL, const void* p_max = NULL, const char* format = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragScalar(FValueVector vector)
{
    //TODO
}

//bool DragScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, float v_speed, const void* p_min = NULL, const void* p_max = NULL, const char* format = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::DragScalarN(FValueVector vector)
{
    //TODO
}

//bool SliderFloat(const char* label, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderFloat(FValueVector vector)
{
    //TODO
}

//bool SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderFloat2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_min = vector[2].asFloat();
    float v_max = vector[3].asFloat();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderFloat2(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderFloat3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_min = vector[2].asFloat();
    float v_max = vector[3].asFloat();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderFloat3(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderFloat4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    float v_min = vector[2].asFloat();
    float v_max = vector[3].asFloat();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderFloat4(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f, const char* format = "%.0f deg", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderAngle(FValueVector vector)
{
    //TODO
}

//bool SliderInt(const char* label, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderInt(FValueVector vector)
{
    //TODO
}

//bool SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderInt2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int v_min = vector[2].asInt();
    int v_max = vector[3].asInt();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderInt2(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderInt3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int v_min = vector[2].asInt();
    int v_max = vector[3].asInt();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderInt3(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderInt4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int v_min = vector[2].asInt();
    int v_max = vector[3].asInt();
    string format_temp = vector[4].asString();
    const char* format = format_temp.c_str();
    int flags = vector[5].asInt();
    bool ret = ImGui::SliderInt4(label,v,v_min,v_max,format,flags);
    return FValue(ret);
}

//bool SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderScalar(FValueVector vector)
{
    //TODO
}

//bool SliderScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::SliderScalarN(FValueVector vector)
{
    //TODO
}

//bool VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::VSliderFloat(FValueVector vector)
{
    //TODO
}

//bool VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::VSliderInt(FValueVector vector)
{
    //TODO
}

//bool VSliderScalar(const char* label, const ImVec2& size, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0)
FValue IMGUI_LUA::VSliderScalar(FValueVector vector)
{
    //TODO
}

//bool InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL)
FValue IMGUI_LUA::InputText(FValueVector vector)
{
    //TODO
}

//bool InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::InputTextMultiline(FValueVector vector)
{
    //TODO
}

//bool InputTextWithHint(const char* label, const char* hint, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL)
FValue IMGUI_LUA::InputTextWithHint(FValueVector vector)
{
    //TODO
}

//bool InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, const char* format = "%.3f", ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputFloat(FValueVector vector)
{
    //TODO
}

//bool InputFloat2(const char* label, float v[2], const char* format = "%.3f", ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputFloat2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    string format_temp = vector[2].asString();
    const char* format = format_temp.c_str();
    int flags = vector[3].asInt();
    bool ret = ImGui::InputFloat2(label,v,format,flags);
    return FValue(ret);
}

//bool InputFloat3(const char* label, float v[3], const char* format = "%.3f", ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputFloat3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    string format_temp = vector[2].asString();
    const char* format = format_temp.c_str();
    int flags = vector[3].asInt();
    bool ret = ImGui::InputFloat3(label,v,format,flags);
    return FValue(ret);
}

//bool InputFloat4(const char* label, float v[4], const char* format = "%.3f", ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputFloat4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float v = vector[1].asFloat();
    string format_temp = vector[2].asString();
    const char* format = format_temp.c_str();
    int flags = vector[3].asInt();
    bool ret = ImGui::InputFloat4(label,v,format,flags);
    return FValue(ret);
}

//bool InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputInt(FValueVector vector)
{
    //TODO
}

//bool InputInt2(const char* label, int v[2], ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputInt2(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int flags = vector[2].asInt();
    bool ret = ImGui::InputInt2(label,v,flags);
    return FValue(ret);
}

//bool InputInt3(const char* label, int v[3], ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputInt3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int flags = vector[2].asInt();
    bool ret = ImGui::InputInt3(label,v,flags);
    return FValue(ret);
}

//bool InputInt4(const char* label, int v[4], ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputInt4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int v = vector[1].asInt();
    int flags = vector[2].asInt();
    bool ret = ImGui::InputInt4(label,v,flags);
    return FValue(ret);
}

//bool InputDouble(const char* label, double* v, double step = 0.0, double step_fast = 0.0, const char* format = "%.6f", ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputDouble(FValueVector vector)
{
    //TODO
}

//bool InputScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_step = NULL, const void* p_step_fast = NULL, const char* format = NULL, ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputScalar(FValueVector vector)
{
    //TODO
}

//bool InputScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_step = NULL, const void* p_step_fast = NULL, const char* format = NULL, ImGuiInputTextFlags flags = 0)
FValue IMGUI_LUA::InputScalarN(FValueVector vector)
{
    //TODO
}

//bool ColorEdit3(const char* label, float col[3], ImGuiColorEditFlags flags = 0)
FValue IMGUI_LUA::ColorEdit3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float col = vector[1].asFloat();
    int flags = vector[2].asInt();
    bool ret = ImGui::ColorEdit3(label,col,flags);
    return FValue(ret);
}

//bool ColorEdit4(const char* label, float col[4], ImGuiColorEditFlags flags = 0)
FValue IMGUI_LUA::ColorEdit4(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float col = vector[1].asFloat();
    int flags = vector[2].asInt();
    bool ret = ImGui::ColorEdit4(label,col,flags);
    return FValue(ret);
}

//bool ColorPicker3(const char* label, float col[3], ImGuiColorEditFlags flags = 0)
FValue IMGUI_LUA::ColorPicker3(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    float col = vector[1].asFloat();
    int flags = vector[2].asInt();
    bool ret = ImGui::ColorPicker3(label,col,flags);
    return FValue(ret);
}

//bool ColorPicker4(const char* label, float col[4], ImGuiColorEditFlags flags = 0, const float* ref_col = NULL)
FValue IMGUI_LUA::ColorPicker4(FValueVector vector)
{
    //TODO
}

//bool ColorButton(const char* desc_id, const ImVec4& col, ImGuiColorEditFlags flags = 0, ImVec2 size = ImVec2(0, 0)
FValue IMGUI_LUA::ColorButton(FValueVector vector)
{
    //TODO
}

//void SetColorEditOptions(ImGuiColorEditFlags flags)
FValue IMGUI_LUA::SetColorEditOptions(FValueVector vector)
{
    int flags = vector[0].asInt();
    ImGui::SetColorEditOptions(flags)
    return FValue();
}

//bool TreeNode(const char* label)
FValue IMGUI_LUA::TreeNode(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    bool ret = ImGui::TreeNode(label);
    return FValue(ret);
}

//bool TreeNodeV(const char* str_id, const char* fmt, va_list args)
FValue IMGUI_LUA::TreeNodeV(FValueVector vector)
{
    //TODO
}

//bool TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags = 0)
FValue IMGUI_LUA::TreeNodeEx(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::TreeNodeEx(label,flags);
    return FValue(ret);
}

//bool TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args)
FValue IMGUI_LUA::TreeNodeExV(FValueVector vector)
{
    //TODO
}

//void TreePush(const char* str_id)
FValue IMGUI_LUA::TreePush(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    ImGui::TreePush(str_id)
    return FValue();
}

//void TreePop()
FValue IMGUI_LUA::TreePop(FValueVector vector)
{
    ImGui::TreePop()
    return FValue();
}

//float GetTreeNodeToLabelSpacing()
FValue IMGUI_LUA::GetTreeNodeToLabelSpacing(FValueVector vector)
{
    float ret = ImGui::GetTreeNodeToLabelSpacing();
    return FValue(ret);
}

//bool CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags = 0)
FValue IMGUI_LUA::CollapsingHeader(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::CollapsingHeader(label,flags);
    return FValue(ret);
}

//void SetNextItemOpen(bool is_open, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetNextItemOpen(FValueVector vector)
{
    bool is_open = vector[0].asBool();
    int cond = vector[1].asInt();
    ImGui::SetNextItemOpen(is_open,cond)
    return FValue();
}

//bool Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::Selectable(FValueVector vector)
{
    //TODO
}

//bool ListBox(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items = -1)
FValue IMGUI_LUA::ListBox(FValueVector vector)
{
    //TODO
}

//bool ListBoxHeader(const char* label, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::ListBoxHeader(FValueVector vector)
{
    //TODO
}

//void ListBoxFooter()
FValue IMGUI_LUA::ListBoxFooter(FValueVector vector)
{
    ImGui::ListBoxFooter()
    return FValue();
}

//void PlotLines(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0)
FValue IMGUI_LUA::PlotLines(FValueVector vector)
{
    //TODO
}

//void PlotHistogram(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0)
FValue IMGUI_LUA::PlotHistogram(FValueVector vector)
{
    //TODO
}

//void Value(const char* prefix, bool b)
FValue IMGUI_LUA::Value(FValueVector vector)
{
    string prefix_temp = vector[0].asString();
    const char* prefix = prefix_temp.c_str();
    bool b = vector[1].asBool();
    ImGui::Value(prefix,b)
    return FValue();
}

//bool BeginMenuBar()
FValue IMGUI_LUA::BeginMenuBar(FValueVector vector)
{
    bool ret = ImGui::BeginMenuBar();
    return FValue(ret);
}

//void EndMenuBar()
FValue IMGUI_LUA::EndMenuBar(FValueVector vector)
{
    ImGui::EndMenuBar()
    return FValue();
}

//bool BeginMainMenuBar()
FValue IMGUI_LUA::BeginMainMenuBar(FValueVector vector)
{
    bool ret = ImGui::BeginMainMenuBar();
    return FValue(ret);
}

//void EndMainMenuBar()
FValue IMGUI_LUA::EndMainMenuBar(FValueVector vector)
{
    ImGui::EndMainMenuBar()
    return FValue();
}

//bool BeginMenu(const char* label, bool enabled = true)
FValue IMGUI_LUA::BeginMenu(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    bool enabled = vector[1].asBool();
    bool ret = ImGui::BeginMenu(label,enabled);
    return FValue(ret);
}

//void EndMenu()
FValue IMGUI_LUA::EndMenu(FValueVector vector)
{
    ImGui::EndMenu()
    return FValue();
}

//bool MenuItem(const char* label, const char* shortcut = NULL, bool selected = false, bool enabled = true)
FValue IMGUI_LUA::MenuItem(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    string shortcut_temp = vector[1].asString();
    const char* shortcut = shortcut_temp.c_str();
    bool selected = vector[2].asBool();
    bool enabled = vector[3].asBool();
    bool ret = ImGui::MenuItem(label,shortcut,selected,enabled);
    return FValue(ret);
}

//void BeginTooltip()
FValue IMGUI_LUA::BeginTooltip(FValueVector vector)
{
    ImGui::BeginTooltip()
    return FValue();
}

//void EndTooltip()
FValue IMGUI_LUA::EndTooltip(FValueVector vector)
{
    ImGui::EndTooltip()
    return FValue();
}

//void SetTooltip(const char* fmt, ...)
FValue IMGUI_LUA::SetTooltip(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::SetTooltip(fmt)
    return FValue();
}

//void SetTooltipV(const char* fmt, va_list args)
FValue IMGUI_LUA::SetTooltipV(FValueVector vector)
{
    //TODO
}

//bool BeginPopup(const char* str_id, ImGuiWindowFlags flags = 0)
FValue IMGUI_LUA::BeginPopup(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::BeginPopup(str_id,flags);
    return FValue(ret);
}

//bool BeginPopupModal(const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0)
FValue IMGUI_LUA::BeginPopupModal(FValueVector vector)
{
    //TODO
}

//void EndPopup()
FValue IMGUI_LUA::EndPopup(FValueVector vector)
{
    ImGui::EndPopup()
    return FValue();
}

//void OpenPopup(const char* str_id, ImGuiPopupFlags popup_flags = 0)
FValue IMGUI_LUA::OpenPopup(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int popup_flags = vector[1].asInt();
    ImGui::OpenPopup(str_id,popup_flags)
    return FValue();
}

//void OpenPopupOnItemClick(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1)
FValue IMGUI_LUA::OpenPopupOnItemClick(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int popup_flags = vector[1].asInt();
    ImGui::OpenPopupOnItemClick(str_id,popup_flags)
    return FValue();
}

//void CloseCurrentPopup()
FValue IMGUI_LUA::CloseCurrentPopup(FValueVector vector)
{
    ImGui::CloseCurrentPopup()
    return FValue();
}

//bool BeginPopupContextItem(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1)
FValue IMGUI_LUA::BeginPopupContextItem(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int popup_flags = vector[1].asInt();
    bool ret = ImGui::BeginPopupContextItem(str_id,popup_flags);
    return FValue(ret);
}

//bool BeginPopupContextWindow(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1)
FValue IMGUI_LUA::BeginPopupContextWindow(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int popup_flags = vector[1].asInt();
    bool ret = ImGui::BeginPopupContextWindow(str_id,popup_flags);
    return FValue(ret);
}

//bool BeginPopupContextVoid(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1)
FValue IMGUI_LUA::BeginPopupContextVoid(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int popup_flags = vector[1].asInt();
    bool ret = ImGui::BeginPopupContextVoid(str_id,popup_flags);
    return FValue(ret);
}

//bool IsPopupOpen(const char* str_id, ImGuiPopupFlags flags = 0)
FValue IMGUI_LUA::IsPopupOpen(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::IsPopupOpen(str_id,flags);
    return FValue(ret);
}

//void Columns(int count = 1, const char* id = NULL, bool border = true)
FValue IMGUI_LUA::Columns(FValueVector vector)
{
    int count = vector[0].asInt();
    string id_temp = vector[1].asString();
    const char* id = id_temp.c_str();
    bool border = vector[2].asBool();
    ImGui::Columns(count,id,border)
    return FValue();
}

//void NextColumn()
FValue IMGUI_LUA::NextColumn(FValueVector vector)
{
    ImGui::NextColumn()
    return FValue();
}

//int GetColumnIndex()
FValue IMGUI_LUA::GetColumnIndex(FValueVector vector)
{
    int ret = ImGui::GetColumnIndex();
    return FValue(ret);
}

//float GetColumnWidth(int column_index = -1)
FValue IMGUI_LUA::GetColumnWidth(FValueVector vector)
{
    int column_index = vector[0].asInt();
    float ret = ImGui::GetColumnWidth(column_index);
    return FValue(ret);
}

//void SetColumnWidth(int column_index, float width)
FValue IMGUI_LUA::SetColumnWidth(FValueVector vector)
{
    int column_index = vector[0].asInt();
    float width = vector[1].asFloat();
    ImGui::SetColumnWidth(column_index,width)
    return FValue();
}

//float GetColumnOffset(int column_index = -1)
FValue IMGUI_LUA::GetColumnOffset(FValueVector vector)
{
    int column_index = vector[0].asInt();
    float ret = ImGui::GetColumnOffset(column_index);
    return FValue(ret);
}

//void SetColumnOffset(int column_index, float offset_x)
FValue IMGUI_LUA::SetColumnOffset(FValueVector vector)
{
    int column_index = vector[0].asInt();
    float offset_x = vector[1].asFloat();
    ImGui::SetColumnOffset(column_index,offset_x)
    return FValue();
}

//int GetColumnsCount()
FValue IMGUI_LUA::GetColumnsCount(FValueVector vector)
{
    int ret = ImGui::GetColumnsCount();
    return FValue(ret);
}

//bool BeginTabBar(const char* str_id, ImGuiTabBarFlags flags = 0)
FValue IMGUI_LUA::BeginTabBar(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::BeginTabBar(str_id,flags);
    return FValue(ret);
}

//void EndTabBar()
FValue IMGUI_LUA::EndTabBar(FValueVector vector)
{
    ImGui::EndTabBar()
    return FValue();
}

//bool BeginTabItem(const char* label, bool* p_open = NULL, ImGuiTabItemFlags flags = 0)
FValue IMGUI_LUA::BeginTabItem(FValueVector vector)
{
    //TODO
}

//void EndTabItem()
FValue IMGUI_LUA::EndTabItem(FValueVector vector)
{
    ImGui::EndTabItem()
    return FValue();
}

//bool TabItemButton(const char* label, ImGuiTabItemFlags flags = 0)
FValue IMGUI_LUA::TabItemButton(FValueVector vector)
{
    string label_temp = vector[0].asString();
    const char* label = label_temp.c_str();
    int flags = vector[1].asInt();
    bool ret = ImGui::TabItemButton(label,flags);
    return FValue(ret);
}

//void SetTabItemClosed(const char* tab_or_docked_window_label)
FValue IMGUI_LUA::SetTabItemClosed(FValueVector vector)
{
    string tab_or_docked_window_label_temp = vector[0].asString();
    const char* tab_or_docked_window_label = tab_or_docked_window_label_temp.c_str();
    ImGui::SetTabItemClosed(tab_or_docked_window_label)
    return FValue();
}

//void DockSpace(ImGuiID id, const ImVec2& size = ImVec2(0, 0)
FValue IMGUI_LUA::DockSpace(FValueVector vector)
{
    //TODO
}

//ImGuiID DockSpaceOverViewport(ImGuiViewport* viewport = NULL, ImGuiDockNodeFlags flags = 0, const ImGuiWindowClass* window_class = NULL)
FValue IMGUI_LUA::DockSpaceOverViewport(FValueVector vector)
{
    //TODO
}

//void SetNextWindowDockID(ImGuiID dock_id, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetNextWindowDockID(FValueVector vector)
{
    int dock_id = vector[0].asInt();
    int cond = vector[1].asInt();
    ImGui::SetNextWindowDockID(dock_id,cond)
    return FValue();
}

//void SetNextWindowClass(const ImGuiWindowClass* window_class)
FValue IMGUI_LUA::SetNextWindowClass(FValueVector vector)
{
    //TODO
}

//ImGuiID GetWindowDockID()
FValue IMGUI_LUA::GetWindowDockID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetWindowDockID();
    return FValue(ret);
}

//bool IsWindowDocked()
FValue IMGUI_LUA::IsWindowDocked(FValueVector vector)
{
    bool ret = ImGui::IsWindowDocked();
    return FValue(ret);
}

//void LogToTTY(int auto_open_depth = -1)
FValue IMGUI_LUA::LogToTTY(FValueVector vector)
{
    int auto_open_depth = vector[0].asInt();
    ImGui::LogToTTY(auto_open_depth)
    return FValue();
}

//void LogToFile(int auto_open_depth = -1, const char* filename = NULL)
FValue IMGUI_LUA::LogToFile(FValueVector vector)
{
    int auto_open_depth = vector[0].asInt();
    string filename_temp = vector[1].asString();
    const char* filename = filename_temp.c_str();
    ImGui::LogToFile(auto_open_depth,filename)
    return FValue();
}

//void LogToClipboard(int auto_open_depth = -1)
FValue IMGUI_LUA::LogToClipboard(FValueVector vector)
{
    int auto_open_depth = vector[0].asInt();
    ImGui::LogToClipboard(auto_open_depth)
    return FValue();
}

//void LogFinish()
FValue IMGUI_LUA::LogFinish(FValueVector vector)
{
    ImGui::LogFinish()
    return FValue();
}

//void LogButtons()
FValue IMGUI_LUA::LogButtons(FValueVector vector)
{
    ImGui::LogButtons()
    return FValue();
}

//void LogText(const char* fmt, ...)
FValue IMGUI_LUA::LogText(FValueVector vector)
{
    string fmt_temp = vector[0].asString();
    const char* fmt = fmt_temp.c_str();
    ImGui::LogText(fmt)
    return FValue();
}

//bool BeginDragDropSource(ImGuiDragDropFlags flags = 0)
FValue IMGUI_LUA::BeginDragDropSource(FValueVector vector)
{
    int flags = vector[0].asInt();
    bool ret = ImGui::BeginDragDropSource(flags);
    return FValue(ret);
}

//bool SetDragDropPayload(const char* type, const void* data, size_t sz, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetDragDropPayload(FValueVector vector)
{
    //TODO
}

//void EndDragDropSource()
FValue IMGUI_LUA::EndDragDropSource(FValueVector vector)
{
    ImGui::EndDragDropSource()
    return FValue();
}

//bool BeginDragDropTarget()
FValue IMGUI_LUA::BeginDragDropTarget(FValueVector vector)
{
    bool ret = ImGui::BeginDragDropTarget();
    return FValue(ret);
}

//ImGuiPayload* AcceptDragDropPayload(const char* type, ImGuiDragDropFlags flags = 0)
FValue IMGUI_LUA::AcceptDragDropPayload(FValueVector vector)
{
    //TODO
}

//void EndDragDropTarget()
FValue IMGUI_LUA::EndDragDropTarget(FValueVector vector)
{
    ImGui::EndDragDropTarget()
    return FValue();
}

//ImGuiPayload* GetDragDropPayload()
FValue IMGUI_LUA::GetDragDropPayload(FValueVector vector)
{
    //TODO
}

//void PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect)
FValue IMGUI_LUA::PushClipRect(FValueVector vector)
{
    //TODO
}

//void PopClipRect()
FValue IMGUI_LUA::PopClipRect(FValueVector vector)
{
    ImGui::PopClipRect()
    return FValue();
}

//void SetItemDefaultFocus()
FValue IMGUI_LUA::SetItemDefaultFocus(FValueVector vector)
{
    ImGui::SetItemDefaultFocus()
    return FValue();
}

//void SetKeyboardFocusHere(int offset = 0)
FValue IMGUI_LUA::SetKeyboardFocusHere(FValueVector vector)
{
    int offset = vector[0].asInt();
    ImGui::SetKeyboardFocusHere(offset)
    return FValue();
}

//bool IsItemHovered(ImGuiHoveredFlags flags = 0)
FValue IMGUI_LUA::IsItemHovered(FValueVector vector)
{
    int flags = vector[0].asInt();
    bool ret = ImGui::IsItemHovered(flags);
    return FValue(ret);
}

//bool IsItemActive()
FValue IMGUI_LUA::IsItemActive(FValueVector vector)
{
    bool ret = ImGui::IsItemActive();
    return FValue(ret);
}

//bool IsItemFocused()
FValue IMGUI_LUA::IsItemFocused(FValueVector vector)
{
    bool ret = ImGui::IsItemFocused();
    return FValue(ret);
}

//bool IsItemClicked(ImGuiMouseButton mouse_button = 0)
FValue IMGUI_LUA::IsItemClicked(FValueVector vector)
{
    int mouse_button = vector[0].asInt();
    bool ret = ImGui::IsItemClicked(mouse_button);
    return FValue(ret);
}

//bool IsItemVisible()
FValue IMGUI_LUA::IsItemVisible(FValueVector vector)
{
    bool ret = ImGui::IsItemVisible();
    return FValue(ret);
}

//bool IsItemEdited()
FValue IMGUI_LUA::IsItemEdited(FValueVector vector)
{
    bool ret = ImGui::IsItemEdited();
    return FValue(ret);
}

//bool IsItemActivated()
FValue IMGUI_LUA::IsItemActivated(FValueVector vector)
{
    bool ret = ImGui::IsItemActivated();
    return FValue(ret);
}

//bool IsItemDeactivated()
FValue IMGUI_LUA::IsItemDeactivated(FValueVector vector)
{
    bool ret = ImGui::IsItemDeactivated();
    return FValue(ret);
}

//bool IsItemDeactivatedAfterEdit()
FValue IMGUI_LUA::IsItemDeactivatedAfterEdit(FValueVector vector)
{
    bool ret = ImGui::IsItemDeactivatedAfterEdit();
    return FValue(ret);
}

//bool IsItemToggledOpen()
FValue IMGUI_LUA::IsItemToggledOpen(FValueVector vector)
{
    bool ret = ImGui::IsItemToggledOpen();
    return FValue(ret);
}

//bool IsAnyItemHovered()
FValue IMGUI_LUA::IsAnyItemHovered(FValueVector vector)
{
    bool ret = ImGui::IsAnyItemHovered();
    return FValue(ret);
}

//bool IsAnyItemActive()
FValue IMGUI_LUA::IsAnyItemActive(FValueVector vector)
{
    bool ret = ImGui::IsAnyItemActive();
    return FValue(ret);
}

//bool IsAnyItemFocused()
FValue IMGUI_LUA::IsAnyItemFocused(FValueVector vector)
{
    bool ret = ImGui::IsAnyItemFocused();
    return FValue(ret);
}

//ImVec2 GetItemRectMin()
FValue IMGUI_LUA::GetItemRectMin(FValueVector vector)
{
    //TODO
}

//ImVec2 GetItemRectMax()
FValue IMGUI_LUA::GetItemRectMax(FValueVector vector)
{
    //TODO
}

//ImVec2 GetItemRectSize()
FValue IMGUI_LUA::GetItemRectSize(FValueVector vector)
{
    //TODO
}

//void SetItemAllowOverlap()
FValue IMGUI_LUA::SetItemAllowOverlap(FValueVector vector)
{
    ImGui::SetItemAllowOverlap()
    return FValue();
}

//bool IsRectVisible(const ImVec2& size)
FValue IMGUI_LUA::IsRectVisible(FValueVector vector)
{
    //TODO
}

//double GetTime()
FValue IMGUI_LUA::GetTime(FValueVector vector)
{
    double ret = ImGui::GetTime();
    return FValue(ret);
}

//int GetFrameCount()
FValue IMGUI_LUA::GetFrameCount(FValueVector vector)
{
    int ret = ImGui::GetFrameCount();
    return FValue(ret);
}

//ImDrawList* GetBackgroundDrawList()
FValue IMGUI_LUA::GetBackgroundDrawList(FValueVector vector)
{
    //TODO
}

//ImDrawList* GetForegroundDrawList()
FValue IMGUI_LUA::GetForegroundDrawList(FValueVector vector)
{
    //TODO
}

//ImDrawListSharedData* GetDrawListSharedData()
FValue IMGUI_LUA::GetDrawListSharedData(FValueVector vector)
{
    //TODO
}

//char* GetStyleColorName(ImGuiCol idx)
FValue IMGUI_LUA::GetStyleColorName(FValueVector vector)
{
    //TODO
}

//void SetStateStorage(ImGuiStorage* storage)
FValue IMGUI_LUA::SetStateStorage(FValueVector vector)
{
    //TODO
}

//ImGuiStorage* GetStateStorage()
FValue IMGUI_LUA::GetStateStorage(FValueVector vector)
{
    //TODO
}

//void CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end)
FValue IMGUI_LUA::CalcListClipping(FValueVector vector)
{
    //TODO
}

//bool BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags flags = 0)
FValue IMGUI_LUA::BeginChildFrame(FValueVector vector)
{
    //TODO
}

//void EndChildFrame()
FValue IMGUI_LUA::EndChildFrame(FValueVector vector)
{
    ImGui::EndChildFrame()
    return FValue();
}

//ImVec2 CalcTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f)
FValue IMGUI_LUA::CalcTextSize(FValueVector vector)
{
    //TODO
}

//ImVec4 ColorConvertU32ToFloat4(ImU32 in)
FValue IMGUI_LUA::ColorConvertU32ToFloat4(FValueVector vector)
{
    //TODO
}

//ImU32 ColorConvertFloat4ToU32(const ImVec4& in)
FValue IMGUI_LUA::ColorConvertFloat4ToU32(FValueVector vector)
{
    //TODO
}

//void ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v)
FValue IMGUI_LUA::ColorConvertRGBtoHSV(FValueVector vector)
{
    //TODO
}

//void ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b)
FValue IMGUI_LUA::ColorConvertHSVtoRGB(FValueVector vector)
{
    //TODO
}

//int GetKeyIndex(ImGuiKey imgui_key)
FValue IMGUI_LUA::GetKeyIndex(FValueVector vector)
{
    int imgui_key = vector[0].asInt();
    int ret = ImGui::GetKeyIndex(imgui_key);
    return FValue(ret);
}

//bool IsKeyDown(int user_key_index)
FValue IMGUI_LUA::IsKeyDown(FValueVector vector)
{
    int user_key_index = vector[0].asInt();
    bool ret = ImGui::IsKeyDown(user_key_index);
    return FValue(ret);
}

//bool IsKeyPressed(int user_key_index, bool repeat = true)
FValue IMGUI_LUA::IsKeyPressed(FValueVector vector)
{
    int user_key_index = vector[0].asInt();
    bool repeat = vector[1].asBool();
    bool ret = ImGui::IsKeyPressed(user_key_index,repeat);
    return FValue(ret);
}

//bool IsKeyReleased(int user_key_index)
FValue IMGUI_LUA::IsKeyReleased(FValueVector vector)
{
    int user_key_index = vector[0].asInt();
    bool ret = ImGui::IsKeyReleased(user_key_index);
    return FValue(ret);
}

//int GetKeyPressedAmount(int key_index, float repeat_delay, float rate)
FValue IMGUI_LUA::GetKeyPressedAmount(FValueVector vector)
{
    int key_index = vector[0].asInt();
    float repeat_delay = vector[1].asFloat();
    float rate = vector[2].asFloat();
    int ret = ImGui::GetKeyPressedAmount(key_index,repeat_delay,rate);
    return FValue(ret);
}

//void CaptureKeyboardFromApp(bool want_capture_keyboard_value = true)
FValue IMGUI_LUA::CaptureKeyboardFromApp(FValueVector vector)
{
    bool want_capture_keyboard_value = vector[0].asBool();
    ImGui::CaptureKeyboardFromApp(want_capture_keyboard_value)
    return FValue();
}

//bool IsMouseDown(ImGuiMouseButton button)
FValue IMGUI_LUA::IsMouseDown(FValueVector vector)
{
    int button = vector[0].asInt();
    bool ret = ImGui::IsMouseDown(button);
    return FValue(ret);
}

//bool IsMouseClicked(ImGuiMouseButton button, bool repeat = false)
FValue IMGUI_LUA::IsMouseClicked(FValueVector vector)
{
    int button = vector[0].asInt();
    bool repeat = vector[1].asBool();
    bool ret = ImGui::IsMouseClicked(button,repeat);
    return FValue(ret);
}

//bool IsMouseReleased(ImGuiMouseButton button)
FValue IMGUI_LUA::IsMouseReleased(FValueVector vector)
{
    int button = vector[0].asInt();
    bool ret = ImGui::IsMouseReleased(button);
    return FValue(ret);
}

//bool IsMouseDoubleClicked(ImGuiMouseButton button)
FValue IMGUI_LUA::IsMouseDoubleClicked(FValueVector vector)
{
    int button = vector[0].asInt();
    bool ret = ImGui::IsMouseDoubleClicked(button);
    return FValue(ret);
}

//bool IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip = true)
FValue IMGUI_LUA::IsMouseHoveringRect(FValueVector vector)
{
    //TODO
}

//bool IsMousePosValid(const ImVec2* mouse_pos = NULL)
FValue IMGUI_LUA::IsMousePosValid(FValueVector vector)
{
    //TODO
}

//bool IsAnyMouseDown()
FValue IMGUI_LUA::IsAnyMouseDown(FValueVector vector)
{
    bool ret = ImGui::IsAnyMouseDown();
    return FValue(ret);
}

//ImVec2 GetMousePos()
FValue IMGUI_LUA::GetMousePos(FValueVector vector)
{
    //TODO
}

//ImVec2 GetMousePosOnOpeningCurrentPopup()
FValue IMGUI_LUA::GetMousePosOnOpeningCurrentPopup(FValueVector vector)
{
    //TODO
}

//bool IsMouseDragging(ImGuiMouseButton button, float lock_threshold = -1.0f)
FValue IMGUI_LUA::IsMouseDragging(FValueVector vector)
{
    int button = vector[0].asInt();
    float lock_threshold = vector[1].asFloat();
    bool ret = ImGui::IsMouseDragging(button,lock_threshold);
    return FValue(ret);
}

//ImVec2 GetMouseDragDelta(ImGuiMouseButton button = 0, float lock_threshold = -1.0f)
FValue IMGUI_LUA::GetMouseDragDelta(FValueVector vector)
{
    //TODO
}

//void ResetMouseDragDelta(ImGuiMouseButton button = 0)
FValue IMGUI_LUA::ResetMouseDragDelta(FValueVector vector)
{
    int button = vector[0].asInt();
    ImGui::ResetMouseDragDelta(button)
    return FValue();
}

//ImGuiMouseCursor GetMouseCursor()
FValue IMGUI_LUA::GetMouseCursor(FValueVector vector)
{
    ImGuiMouseCursor ret = ImGui::GetMouseCursor();
    return FValue(ret);
}

//void SetMouseCursor(ImGuiMouseCursor cursor_type)
FValue IMGUI_LUA::SetMouseCursor(FValueVector vector)
{
    int cursor_type = vector[0].asInt();
    ImGui::SetMouseCursor(cursor_type)
    return FValue();
}

//void CaptureMouseFromApp(bool want_capture_mouse_value = true)
FValue IMGUI_LUA::CaptureMouseFromApp(FValueVector vector)
{
    bool want_capture_mouse_value = vector[0].asBool();
    ImGui::CaptureMouseFromApp(want_capture_mouse_value)
    return FValue();
}

//char* GetClipboardText()
FValue IMGUI_LUA::GetClipboardText(FValueVector vector)
{
    //TODO
}

//void SetClipboardText(const char* text)
FValue IMGUI_LUA::SetClipboardText(FValueVector vector)
{
    string text_temp = vector[0].asString();
    const char* text = text_temp.c_str();
    ImGui::SetClipboardText(text)
    return FValue();
}

//void LoadIniSettingsFromDisk(const char* ini_filename)
FValue IMGUI_LUA::LoadIniSettingsFromDisk(FValueVector vector)
{
    string ini_filename_temp = vector[0].asString();
    const char* ini_filename = ini_filename_temp.c_str();
    ImGui::LoadIniSettingsFromDisk(ini_filename)
    return FValue();
}

//void LoadIniSettingsFromMemory(const char* ini_data, size_t ini_size=0)
FValue IMGUI_LUA::LoadIniSettingsFromMemory(FValueVector vector)
{
    //TODO
}

//void SaveIniSettingsToDisk(const char* ini_filename)
FValue IMGUI_LUA::SaveIniSettingsToDisk(FValueVector vector)
{
    string ini_filename_temp = vector[0].asString();
    const char* ini_filename = ini_filename_temp.c_str();
    ImGui::SaveIniSettingsToDisk(ini_filename)
    return FValue();
}

//char* SaveIniSettingsToMemory(size_t* out_ini_size = NULL)
FValue IMGUI_LUA::SaveIniSettingsToMemory(FValueVector vector)
{
    //TODO
}

//bool DebugCheckVersionAndDataLayout(const char* version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx)
FValue IMGUI_LUA::DebugCheckVersionAndDataLayout(FValueVector vector)
{
    //TODO
}

//void SetAllocatorFunctions(void* (*alloc_func)
FValue IMGUI_LUA::SetAllocatorFunctions(FValueVector vector)
{
    ImGui::SetAllocatorFunctions()
    return FValue();
}

//void* MemAlloc(size_t size)
FValue IMGUI_LUA::MemAlloc(FValueVector vector)
{
    //TODO
}

//void MemFree(void* ptr)
FValue IMGUI_LUA::MemFree(FValueVector vector)
{
    //TODO
}

//ImGuiPlatformIO& GetPlatformIO()
FValue IMGUI_LUA::GetPlatformIO(FValueVector vector)
{
    //TODO
}

//ImGuiViewport* GetMainViewport()
FValue IMGUI_LUA::GetMainViewport(FValueVector vector)
{
    //TODO
}

//void UpdatePlatformWindows()
FValue IMGUI_LUA::UpdatePlatformWindows(FValueVector vector)
{
    ImGui::UpdatePlatformWindows()
    return FValue();
}

//void RenderPlatformWindowsDefault(void* platform_render_arg = NULL, void* renderer_render_arg = NULL)
FValue IMGUI_LUA::RenderPlatformWindowsDefault(FValueVector vector)
{
    //TODO
}

//void DestroyPlatformWindows()
FValue IMGUI_LUA::DestroyPlatformWindows(FValueVector vector)
{
    ImGui::DestroyPlatformWindows()
    return FValue();
}

//ImGuiViewport* FindViewportByID(ImGuiID id)
FValue IMGUI_LUA::FindViewportByID(FValueVector vector)
{
    //TODO
}

//ImGuiViewport* FindViewportByPlatformHandle(void* platform_handle)
FValue IMGUI_LUA::FindViewportByPlatformHandle(FValueVector vector)
{
    //TODO
}

//void OpenPopupContextItem(const char* str_id = NULL, ImGuiMouseButton mb = 1)
FValue IMGUI_LUA::OpenPopupContextItem(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int mb = vector[1].asInt();
    ImGui::OpenPopupContextItem(str_id,mb)
    return FValue();
}

//void TreeAdvanceToLabelPos()
FValue IMGUI_LUA::TreeAdvanceToLabelPos(FValueVector vector)
{
    ImGui::TreeAdvanceToLabelPos()
    return FValue();
}

//void SetNextTreeNodeOpen(bool open, ImGuiCond cond = 0)
FValue IMGUI_LUA::SetNextTreeNodeOpen(FValueVector vector)
{
    bool open = vector[0].asBool();
    int cond = vector[1].asInt();
    ImGui::SetNextTreeNodeOpen(open,cond)
    return FValue();
}

//float GetContentRegionAvailWidth()
FValue IMGUI_LUA::GetContentRegionAvailWidth(FValueVector vector)
{
    float ret = ImGui::GetContentRegionAvailWidth();
    return FValue(ret);
}

//ImDrawList* GetOverlayDrawList()
FValue IMGUI_LUA::GetOverlayDrawList(FValueVector vector)
{
    //TODO
}

//void SetScrollHere(float center_ratio=0.5f)
FValue IMGUI_LUA::SetScrollHere(FValueVector vector)
{
    float center_ratio = vector[0].asFloat();
    ImGui::SetScrollHere(center_ratio)
    return FValue();
}

//bool IsItemDeactivatedAfterChange()
FValue IMGUI_LUA::IsItemDeactivatedAfterChange(FValueVector vector)
{
    bool ret = ImGui::IsItemDeactivatedAfterChange();
    return FValue(ret);
}

//ImGuiWindow* GetCurrentWindowRead()
FValue IMGUI_LUA::GetCurrentWindowRead(FValueVector vector)
{
    //TODO
}

//ImGuiWindow* GetCurrentWindow()
FValue IMGUI_LUA::GetCurrentWindow(FValueVector vector)
{
    //TODO
}

//ImGuiWindow* FindWindowByID(ImGuiID id)
FValue IMGUI_LUA::FindWindowByID(FValueVector vector)
{
    //TODO
}

//ImGuiWindow* FindWindowByName(const char* name)
FValue IMGUI_LUA::FindWindowByName(FValueVector vector)
{
    //TODO
}

//void UpdateWindowParentAndRootLinks(ImGuiWindow* window, ImGuiWindowFlags flags, ImGuiWindow* parent_window)
FValue IMGUI_LUA::UpdateWindowParentAndRootLinks(FValueVector vector)
{
    //TODO
}

//ImVec2 CalcWindowExpectedSize(ImGuiWindow* window)
FValue IMGUI_LUA::CalcWindowExpectedSize(FValueVector vector)
{
    //TODO
}

//bool IsWindowChildOf(ImGuiWindow* window, ImGuiWindow* potential_parent)
FValue IMGUI_LUA::IsWindowChildOf(FValueVector vector)
{
    //TODO
}

//bool IsWindowNavFocusable(ImGuiWindow* window)
FValue IMGUI_LUA::IsWindowNavFocusable(FValueVector vector)
{
    //TODO
}

//ImRect GetWindowAllowedExtentRect(ImGuiWindow* window)
FValue IMGUI_LUA::GetWindowAllowedExtentRect(FValueVector vector)
{
    //TODO
}

//void SetWindowHitTestHole(ImGuiWindow* window, const ImVec2& pos, const ImVec2& size)
FValue IMGUI_LUA::SetWindowHitTestHole(FValueVector vector)
{
    //TODO
}

//void FocusWindow(ImGuiWindow* window)
FValue IMGUI_LUA::FocusWindow(FValueVector vector)
{
    //TODO
}

//void FocusTopMostWindowUnderOne(ImGuiWindow* under_this_window, ImGuiWindow* ignore_window)
FValue IMGUI_LUA::FocusTopMostWindowUnderOne(FValueVector vector)
{
    //TODO
}

//void BringWindowToFocusFront(ImGuiWindow* window)
FValue IMGUI_LUA::BringWindowToFocusFront(FValueVector vector)
{
    //TODO
}

//void BringWindowToDisplayFront(ImGuiWindow* window)
FValue IMGUI_LUA::BringWindowToDisplayFront(FValueVector vector)
{
    //TODO
}

//void BringWindowToDisplayBack(ImGuiWindow* window)
FValue IMGUI_LUA::BringWindowToDisplayBack(FValueVector vector)
{
    //TODO
}

//void SetCurrentFont(ImFont* font)
FValue IMGUI_LUA::SetCurrentFont(FValueVector vector)
{
    //TODO
}

//ImFont* GetDefaultFont()
FValue IMGUI_LUA::GetDefaultFont(FValueVector vector)
{
    //TODO
}

//void Initialize(ImGuiContext* context)
FValue IMGUI_LUA::Initialize(FValueVector vector)
{
    //TODO
}

//void Shutdown(ImGuiContext* context)
FValue IMGUI_LUA::Shutdown(FValueVector vector)
{
    //TODO
}

//void UpdateHoveredWindowAndCaptureFlags()
FValue IMGUI_LUA::UpdateHoveredWindowAndCaptureFlags(FValueVector vector)
{
    ImGui::UpdateHoveredWindowAndCaptureFlags()
    return FValue();
}

//void StartMouseMovingWindow(ImGuiWindow* window)
FValue IMGUI_LUA::StartMouseMovingWindow(FValueVector vector)
{
    //TODO
}

//void StartMouseMovingWindowOrNode(ImGuiWindow* window, ImGuiDockNode* node, bool undock_floating_node)
FValue IMGUI_LUA::StartMouseMovingWindowOrNode(FValueVector vector)
{
    //TODO
}

//void UpdateMouseMovingWindowNewFrame()
FValue IMGUI_LUA::UpdateMouseMovingWindowNewFrame(FValueVector vector)
{
    ImGui::UpdateMouseMovingWindowNewFrame()
    return FValue();
}

//void UpdateMouseMovingWindowEndFrame()
FValue IMGUI_LUA::UpdateMouseMovingWindowEndFrame(FValueVector vector)
{
    ImGui::UpdateMouseMovingWindowEndFrame()
    return FValue();
}

//void AddContextHook(ImGuiContext* context, const ImGuiContextHook* hook)
FValue IMGUI_LUA::AddContextHook(FValueVector vector)
{
    //TODO
}

//void CallContextHooks(ImGuiContext* context, ImGuiContextHookType type)
FValue IMGUI_LUA::CallContextHooks(FValueVector vector)
{
    //TODO
}

//void TranslateWindowsInViewport(ImGuiViewportP* viewport, const ImVec2& old_pos, const ImVec2& new_pos)
FValue IMGUI_LUA::TranslateWindowsInViewport(FValueVector vector)
{
    //TODO
}

//void ScaleWindowsInViewport(ImGuiViewportP* viewport, float scale)
FValue IMGUI_LUA::ScaleWindowsInViewport(FValueVector vector)
{
    //TODO
}

//void DestroyPlatformWindow(ImGuiViewportP* viewport)
FValue IMGUI_LUA::DestroyPlatformWindow(FValueVector vector)
{
    //TODO
}

//void ShowViewportThumbnails()
FValue IMGUI_LUA::ShowViewportThumbnails(FValueVector vector)
{
    ImGui::ShowViewportThumbnails()
    return FValue();
}

//void MarkIniSettingsDirty()
FValue IMGUI_LUA::MarkIniSettingsDirty(FValueVector vector)
{
    ImGui::MarkIniSettingsDirty()
    return FValue();
}

//void ClearIniSettings()
FValue IMGUI_LUA::ClearIniSettings(FValueVector vector)
{
    ImGui::ClearIniSettings()
    return FValue();
}

//ImGuiWindowSettings* CreateNewWindowSettings(const char* name)
FValue IMGUI_LUA::CreateNewWindowSettings(FValueVector vector)
{
    //TODO
}

//ImGuiWindowSettings* FindWindowSettings(ImGuiID id)
FValue IMGUI_LUA::FindWindowSettings(FValueVector vector)
{
    //TODO
}

//ImGuiWindowSettings* FindOrCreateWindowSettings(const char* name)
FValue IMGUI_LUA::FindOrCreateWindowSettings(FValueVector vector)
{
    //TODO
}

//ImGuiSettingsHandler* FindSettingsHandler(const char* type_name)
FValue IMGUI_LUA::FindSettingsHandler(FValueVector vector)
{
    //TODO
}

//void SetNextWindowScroll(const ImVec2& scroll)
FValue IMGUI_LUA::SetNextWindowScroll(FValueVector vector)
{
    //TODO
}

//ImVec2 ScrollToBringRectIntoView(ImGuiWindow* window, const ImRect& item_rect)
FValue IMGUI_LUA::ScrollToBringRectIntoView(FValueVector vector)
{
    //TODO
}

//ImGuiID GetItemID()
FValue IMGUI_LUA::GetItemID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetItemID();
    return FValue(ret);
}

//ImGuiItemStatusFlags GetItemStatusFlags()
FValue IMGUI_LUA::GetItemStatusFlags(FValueVector vector)
{
    ImGuiItemStatusFlags ret = ImGui::GetItemStatusFlags();
    return FValue(ret);
}

//ImGuiID GetActiveID()
FValue IMGUI_LUA::GetActiveID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetActiveID();
    return FValue(ret);
}

//ImGuiID GetFocusID()
FValue IMGUI_LUA::GetFocusID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetFocusID();
    return FValue(ret);
}

//void SetActiveID(ImGuiID id, ImGuiWindow* window)
FValue IMGUI_LUA::SetActiveID(FValueVector vector)
{
    //TODO
}

//void SetFocusID(ImGuiID id, ImGuiWindow* window)
FValue IMGUI_LUA::SetFocusID(FValueVector vector)
{
    //TODO
}

//void ClearActiveID()
FValue IMGUI_LUA::ClearActiveID(FValueVector vector)
{
    ImGui::ClearActiveID()
    return FValue();
}

//ImGuiID GetHoveredID()
FValue IMGUI_LUA::GetHoveredID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetHoveredID();
    return FValue(ret);
}

//void SetHoveredID(ImGuiID id)
FValue IMGUI_LUA::SetHoveredID(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::SetHoveredID(id)
    return FValue();
}

//void KeepAliveID(ImGuiID id)
FValue IMGUI_LUA::KeepAliveID(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::KeepAliveID(id)
    return FValue();
}

//void MarkItemEdited(ImGuiID id)
FValue IMGUI_LUA::MarkItemEdited(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::MarkItemEdited(id)
    return FValue();
}

//void PushOverrideID(ImGuiID id)
FValue IMGUI_LUA::PushOverrideID(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::PushOverrideID(id)
    return FValue();
}

//ImGuiID GetIDWithSeed(const char* str_id_begin, const char* str_id_end, ImGuiID seed)
FValue IMGUI_LUA::GetIDWithSeed(FValueVector vector)
{
    string str_id_begin_temp = vector[0].asString();
    const char* str_id_begin = str_id_begin_temp.c_str();
    string str_id_end_temp = vector[1].asString();
    const char* str_id_end = str_id_end_temp.c_str();
    int seed = vector[2].asInt();
    ImGuiID ret = ImGui::GetIDWithSeed(str_id_begin,str_id_end,seed);
    return FValue(ret);
}

//void ItemSize(const ImVec2& size, float text_baseline_y = -1.0f)
FValue IMGUI_LUA::ItemSize(FValueVector vector)
{
    //TODO
}

//bool ItemAdd(const ImRect& bb, ImGuiID id, const ImRect* nav_bb = NULL)
FValue IMGUI_LUA::ItemAdd(FValueVector vector)
{
    //TODO
}

//bool ItemHoverable(const ImRect& bb, ImGuiID id)
FValue IMGUI_LUA::ItemHoverable(FValueVector vector)
{
    //TODO
}

//bool IsClippedEx(const ImRect& bb, ImGuiID id, bool clip_even_when_logged)
FValue IMGUI_LUA::IsClippedEx(FValueVector vector)
{
    //TODO
}

//void SetLastItemData(ImGuiWindow* window, ImGuiID item_id, ImGuiItemStatusFlags status_flags, const ImRect& item_rect)
FValue IMGUI_LUA::SetLastItemData(FValueVector vector)
{
    //TODO
}

//bool FocusableItemRegister(ImGuiWindow* window, ImGuiID id)
FValue IMGUI_LUA::FocusableItemRegister(FValueVector vector)
{
    //TODO
}

//void FocusableItemUnregister(ImGuiWindow* window)
FValue IMGUI_LUA::FocusableItemUnregister(FValueVector vector)
{
    //TODO
}

//ImVec2 CalcItemSize(ImVec2 size, float default_w, float default_h)
FValue IMGUI_LUA::CalcItemSize(FValueVector vector)
{
    //TODO
}

//float CalcWrapWidthForPos(const ImVec2& pos, float wrap_pos_x)
FValue IMGUI_LUA::CalcWrapWidthForPos(FValueVector vector)
{
    //TODO
}

//void PushMultiItemsWidths(int components, float width_full)
FValue IMGUI_LUA::PushMultiItemsWidths(FValueVector vector)
{
    int components = vector[0].asInt();
    float width_full = vector[1].asFloat();
    ImGui::PushMultiItemsWidths(components,width_full)
    return FValue();
}

//void PushItemFlag(ImGuiItemFlags option, bool enabled)
FValue IMGUI_LUA::PushItemFlag(FValueVector vector)
{
    int option = vector[0].asInt();
    bool enabled = vector[1].asBool();
    ImGui::PushItemFlag(option,enabled)
    return FValue();
}

//void PopItemFlag()
FValue IMGUI_LUA::PopItemFlag(FValueVector vector)
{
    ImGui::PopItemFlag()
    return FValue();
}

//bool IsItemToggledSelection()
FValue IMGUI_LUA::IsItemToggledSelection(FValueVector vector)
{
    bool ret = ImGui::IsItemToggledSelection();
    return FValue(ret);
}

//ImVec2 GetContentRegionMaxAbs()
FValue IMGUI_LUA::GetContentRegionMaxAbs(FValueVector vector)
{
    //TODO
}

//void ShrinkWidths(ImGuiShrinkWidthItem* items, int count, float width_excess)
FValue IMGUI_LUA::ShrinkWidths(FValueVector vector)
{
    //TODO
}

//void LogBegin(ImGuiLogType type, int auto_open_depth)
FValue IMGUI_LUA::LogBegin(FValueVector vector)
{
    //TODO
}

//void LogToBuffer(int auto_open_depth = -1)
FValue IMGUI_LUA::LogToBuffer(FValueVector vector)
{
    int auto_open_depth = vector[0].asInt();
    ImGui::LogToBuffer(auto_open_depth)
    return FValue();
}

//bool BeginChildEx(const char* name, ImGuiID id, const ImVec2& size_arg, bool border, ImGuiWindowFlags flags)
FValue IMGUI_LUA::BeginChildEx(FValueVector vector)
{
    //TODO
}

//void OpenPopupEx(ImGuiID id, ImGuiPopupFlags popup_flags = ImGuiPopupFlags_None)
FValue IMGUI_LUA::OpenPopupEx(FValueVector vector)
{
    int id = vector[0].asInt();
    int popup_flags = vector[1].asInt();
    ImGui::OpenPopupEx(id,popup_flags)
    return FValue();
}

//void ClosePopupToLevel(int remaining, bool restore_focus_to_window_under_popup)
FValue IMGUI_LUA::ClosePopupToLevel(FValueVector vector)
{
    int remaining = vector[0].asInt();
    bool restore_focus_to_window_under_popup = vector[1].asBool();
    ImGui::ClosePopupToLevel(remaining,restore_focus_to_window_under_popup)
    return FValue();
}

//void ClosePopupsOverWindow(ImGuiWindow* ref_window, bool restore_focus_to_window_under_popup)
FValue IMGUI_LUA::ClosePopupsOverWindow(FValueVector vector)
{
    //TODO
}

//bool BeginPopupEx(ImGuiID id, ImGuiWindowFlags extra_flags)
FValue IMGUI_LUA::BeginPopupEx(FValueVector vector)
{
    int id = vector[0].asInt();
    int extra_flags = vector[1].asInt();
    bool ret = ImGui::BeginPopupEx(id,extra_flags);
    return FValue(ret);
}

//void BeginTooltipEx(ImGuiWindowFlags extra_flags, ImGuiTooltipFlags tooltip_flags)
FValue IMGUI_LUA::BeginTooltipEx(FValueVector vector)
{
    int extra_flags = vector[0].asInt();
    int tooltip_flags = vector[1].asInt();
    ImGui::BeginTooltipEx(extra_flags,tooltip_flags)
    return FValue();
}

//ImGuiWindow* GetTopMostPopupModal()
FValue IMGUI_LUA::GetTopMostPopupModal(FValueVector vector)
{
    //TODO
}

//ImVec2 FindBestWindowPosForPopup(ImGuiWindow* window)
FValue IMGUI_LUA::FindBestWindowPosForPopup(FValueVector vector)
{
    //TODO
}

//ImVec2 FindBestWindowPosForPopupEx(const ImVec2& ref_pos, const ImVec2& size, ImGuiDir* last_dir, const ImRect& r_outer, const ImRect& r_avoid, ImGuiPopupPositionPolicy policy)
FValue IMGUI_LUA::FindBestWindowPosForPopupEx(FValueVector vector)
{
    //TODO
}

//void NavInitWindow(ImGuiWindow* window, bool force_reinit)
FValue IMGUI_LUA::NavInitWindow(FValueVector vector)
{
    //TODO
}

//bool NavMoveRequestButNoResultYet()
FValue IMGUI_LUA::NavMoveRequestButNoResultYet(FValueVector vector)
{
    bool ret = ImGui::NavMoveRequestButNoResultYet();
    return FValue(ret);
}

//void NavMoveRequestCancel()
FValue IMGUI_LUA::NavMoveRequestCancel(FValueVector vector)
{
    ImGui::NavMoveRequestCancel()
    return FValue();
}

//void NavMoveRequestForward(ImGuiDir move_dir, ImGuiDir clip_dir, const ImRect& bb_rel, ImGuiNavMoveFlags move_flags)
FValue IMGUI_LUA::NavMoveRequestForward(FValueVector vector)
{
    //TODO
}

//void NavMoveRequestTryWrapping(ImGuiWindow* window, ImGuiNavMoveFlags move_flags)
FValue IMGUI_LUA::NavMoveRequestTryWrapping(FValueVector vector)
{
    //TODO
}

//float GetNavInputAmount(ImGuiNavInput n, ImGuiInputReadMode mode)
FValue IMGUI_LUA::GetNavInputAmount(FValueVector vector)
{
    int n = vector[0].asInt();
    int mode = vector[1].asInt();
    float ret = ImGui::GetNavInputAmount(n,mode);
    return FValue(ret);
}

//ImVec2 GetNavInputAmount2d(ImGuiNavDirSourceFlags dir_sources, ImGuiInputReadMode mode, float slow_factor = 0.0f, float fast_factor = 0.0f)
FValue IMGUI_LUA::GetNavInputAmount2d(FValueVector vector)
{
    //TODO
}

//int CalcTypematicRepeatAmount(float t0, float t1, float repeat_delay, float repeat_rate)
FValue IMGUI_LUA::CalcTypematicRepeatAmount(FValueVector vector)
{
    float t0 = vector[0].asFloat();
    float t1 = vector[1].asFloat();
    float repeat_delay = vector[2].asFloat();
    float repeat_rate = vector[3].asFloat();
    int ret = ImGui::CalcTypematicRepeatAmount(t0,t1,repeat_delay,repeat_rate);
    return FValue(ret);
}

//void ActivateItem(ImGuiID id)
FValue IMGUI_LUA::ActivateItem(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::ActivateItem(id)
    return FValue();
}

//void SetNavID(ImGuiID id, int nav_layer, ImGuiID focus_scope_id)
FValue IMGUI_LUA::SetNavID(FValueVector vector)
{
    int id = vector[0].asInt();
    int nav_layer = vector[1].asInt();
    int focus_scope_id = vector[2].asInt();
    ImGui::SetNavID(id,nav_layer,focus_scope_id)
    return FValue();
}

//void SetNavIDWithRectRel(ImGuiID id, int nav_layer, ImGuiID focus_scope_id, const ImRect& rect_rel)
FValue IMGUI_LUA::SetNavIDWithRectRel(FValueVector vector)
{
    //TODO
}

//void PushFocusScope(ImGuiID id)
FValue IMGUI_LUA::PushFocusScope(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::PushFocusScope(id)
    return FValue();
}

//void PopFocusScope()
FValue IMGUI_LUA::PopFocusScope(FValueVector vector)
{
    ImGui::PopFocusScope()
    return FValue();
}

//ImGuiID GetFocusScopeID()
FValue IMGUI_LUA::GetFocusScopeID(FValueVector vector)
{
    ImGuiID ret = ImGui::GetFocusScopeID();
    return FValue(ret);
}

//bool IsActiveIdUsingNavDir(ImGuiDir dir)
FValue IMGUI_LUA::IsActiveIdUsingNavDir(FValueVector vector)
{
    int dir = vector[0].asInt();
    bool ret = ImGui::IsActiveIdUsingNavDir(dir);
    return FValue(ret);
}

//bool IsActiveIdUsingNavInput(ImGuiNavInput input)
FValue IMGUI_LUA::IsActiveIdUsingNavInput(FValueVector vector)
{
    int input = vector[0].asInt();
    bool ret = ImGui::IsActiveIdUsingNavInput(input);
    return FValue(ret);
}

//bool IsActiveIdUsingKey(ImGuiKey key)
FValue IMGUI_LUA::IsActiveIdUsingKey(FValueVector vector)
{
    int key = vector[0].asInt();
    bool ret = ImGui::IsActiveIdUsingKey(key);
    return FValue(ret);
}

//bool IsMouseDragPastThreshold(ImGuiMouseButton button, float lock_threshold = -1.0f)
FValue IMGUI_LUA::IsMouseDragPastThreshold(FValueVector vector)
{
    int button = vector[0].asInt();
    float lock_threshold = vector[1].asFloat();
    bool ret = ImGui::IsMouseDragPastThreshold(button,lock_threshold);
    return FValue(ret);
}

//bool IsKeyPressedMap(ImGuiKey key, bool repeat = true)
FValue IMGUI_LUA::IsKeyPressedMap(FValueVector vector)
{
    int key = vector[0].asInt();
    bool repeat = vector[1].asBool();
    bool ret = ImGui::IsKeyPressedMap(key,repeat);
    return FValue(ret);
}

//bool IsNavInputDown(ImGuiNavInput n)
FValue IMGUI_LUA::IsNavInputDown(FValueVector vector)
{
    int n = vector[0].asInt();
    bool ret = ImGui::IsNavInputDown(n);
    return FValue(ret);
}

//bool IsNavInputTest(ImGuiNavInput n, ImGuiInputReadMode rm)
FValue IMGUI_LUA::IsNavInputTest(FValueVector vector)
{
    int n = vector[0].asInt();
    int rm = vector[1].asInt();
    bool ret = ImGui::IsNavInputTest(n,rm);
    return FValue(ret);
}

//ImGuiKeyModFlags GetMergedKeyModFlags()
FValue IMGUI_LUA::GetMergedKeyModFlags(FValueVector vector)
{
    ImGuiKeyModFlags ret = ImGui::GetMergedKeyModFlags();
    return FValue(ret);
}

//void DockContextInitialize(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextInitialize(FValueVector vector)
{
    //TODO
}

//void DockContextShutdown(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextShutdown(FValueVector vector)
{
    //TODO
}

//void DockContextClearNodes(ImGuiContext* ctx, ImGuiID root_id, bool clear_settings_refs)
FValue IMGUI_LUA::DockContextClearNodes(FValueVector vector)
{
    //TODO
}

//void DockContextRebuildNodes(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextRebuildNodes(FValueVector vector)
{
    //TODO
}

//void DockContextUpdateUndocking(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextUpdateUndocking(FValueVector vector)
{
    //TODO
}

//void DockContextUpdateDocking(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextUpdateDocking(FValueVector vector)
{
    //TODO
}

//ImGuiID DockContextGenNodeID(ImGuiContext* ctx)
FValue IMGUI_LUA::DockContextGenNodeID(FValueVector vector)
{
    //TODO
}

//void DockContextQueueDock(ImGuiContext* ctx, ImGuiWindow* target, ImGuiDockNode* target_node, ImGuiWindow* payload, ImGuiDir split_dir, float split_ratio, bool split_outer)
FValue IMGUI_LUA::DockContextQueueDock(FValueVector vector)
{
    //TODO
}

//void DockContextQueueUndockWindow(ImGuiContext* ctx, ImGuiWindow* window)
FValue IMGUI_LUA::DockContextQueueUndockWindow(FValueVector vector)
{
    //TODO
}

//void DockContextQueueUndockNode(ImGuiContext* ctx, ImGuiDockNode* node)
FValue IMGUI_LUA::DockContextQueueUndockNode(FValueVector vector)
{
    //TODO
}

//bool DockContextCalcDropPosForDocking(ImGuiWindow* target, ImGuiDockNode* target_node, ImGuiWindow* payload, ImGuiDir split_dir, bool split_outer, ImVec2* out_pos)
FValue IMGUI_LUA::DockContextCalcDropPosForDocking(FValueVector vector)
{
    //TODO
}

//bool DockNodeBeginAmendTabBar(ImGuiDockNode* node)
FValue IMGUI_LUA::DockNodeBeginAmendTabBar(FValueVector vector)
{
    //TODO
}

//void DockNodeEndAmendTabBar()
FValue IMGUI_LUA::DockNodeEndAmendTabBar(FValueVector vector)
{
    ImGui::DockNodeEndAmendTabBar()
    return FValue();
}

//ImGuiDockNode* DockNodeGetRootNode(ImGuiDockNode* node)
FValue IMGUI_LUA::DockNodeGetRootNode(FValueVector vector)
{
    //TODO
}

//int DockNodeGetDepth(const ImGuiDockNode* node)
FValue IMGUI_LUA::DockNodeGetDepth(FValueVector vector)
{
    //TODO
}

//ImGuiDockNode* GetWindowDockNode()
FValue IMGUI_LUA::GetWindowDockNode(FValueVector vector)
{
    //TODO
}

//bool GetWindowAlwaysWantOwnTabBar(ImGuiWindow* window)
FValue IMGUI_LUA::GetWindowAlwaysWantOwnTabBar(FValueVector vector)
{
    //TODO
}

//void BeginDocked(ImGuiWindow* window, bool* p_open)
FValue IMGUI_LUA::BeginDocked(FValueVector vector)
{
    //TODO
}

//void BeginDockableDragDropSource(ImGuiWindow* window)
FValue IMGUI_LUA::BeginDockableDragDropSource(FValueVector vector)
{
    //TODO
}

//void BeginDockableDragDropTarget(ImGuiWindow* window)
FValue IMGUI_LUA::BeginDockableDragDropTarget(FValueVector vector)
{
    //TODO
}

//void SetWindowDock(ImGuiWindow* window, ImGuiID dock_id, ImGuiCond cond)
FValue IMGUI_LUA::SetWindowDock(FValueVector vector)
{
    //TODO
}

//void DockBuilderDockWindow(const char* window_name, ImGuiID node_id)
FValue IMGUI_LUA::DockBuilderDockWindow(FValueVector vector)
{
    string window_name_temp = vector[0].asString();
    const char* window_name = window_name_temp.c_str();
    int node_id = vector[1].asInt();
    ImGui::DockBuilderDockWindow(window_name,node_id)
    return FValue();
}

//ImGuiDockNode* DockBuilderGetCentralNode(ImGuiID node_id)
FValue IMGUI_LUA::DockBuilderGetCentralNode(FValueVector vector)
{
    //TODO
}

//ImGuiID DockBuilderAddNode(ImGuiID node_id = 0, ImGuiDockNodeFlags flags = 0)
FValue IMGUI_LUA::DockBuilderAddNode(FValueVector vector)
{
    int node_id = vector[0].asInt();
    int flags = vector[1].asInt();
    ImGuiID ret = ImGui::DockBuilderAddNode(node_id,flags);
    return FValue(ret);
}

//void DockBuilderRemoveNode(ImGuiID node_id)
FValue IMGUI_LUA::DockBuilderRemoveNode(FValueVector vector)
{
    int node_id = vector[0].asInt();
    ImGui::DockBuilderRemoveNode(node_id)
    return FValue();
}

//void DockBuilderRemoveNodeDockedWindows(ImGuiID node_id, bool clear_settings_refs = true)
FValue IMGUI_LUA::DockBuilderRemoveNodeDockedWindows(FValueVector vector)
{
    int node_id = vector[0].asInt();
    bool clear_settings_refs = vector[1].asBool();
    ImGui::DockBuilderRemoveNodeDockedWindows(node_id,clear_settings_refs)
    return FValue();
}

//void DockBuilderRemoveNodeChildNodes(ImGuiID node_id)
FValue IMGUI_LUA::DockBuilderRemoveNodeChildNodes(FValueVector vector)
{
    int node_id = vector[0].asInt();
    ImGui::DockBuilderRemoveNodeChildNodes(node_id)
    return FValue();
}

//void DockBuilderSetNodePos(ImGuiID node_id, ImVec2 pos)
FValue IMGUI_LUA::DockBuilderSetNodePos(FValueVector vector)
{
    //TODO
}

//void DockBuilderSetNodeSize(ImGuiID node_id, ImVec2 size)
FValue IMGUI_LUA::DockBuilderSetNodeSize(FValueVector vector)
{
    //TODO
}

//ImGuiID DockBuilderSplitNode(ImGuiID node_id, ImGuiDir split_dir, float size_ratio_for_node_at_dir, ImGuiID* out_id_at_dir, ImGuiID* out_id_at_opposite_dir)
FValue IMGUI_LUA::DockBuilderSplitNode(FValueVector vector)
{
    //TODO
}

//void DockBuilderCopyDockSpace(ImGuiID src_dockspace_id, ImGuiID dst_dockspace_id, ImVector<const char*>* in_window_remap_pairs)
FValue IMGUI_LUA::DockBuilderCopyDockSpace(FValueVector vector)
{
    //TODO
}

//void DockBuilderCopyNode(ImGuiID src_node_id, ImGuiID dst_node_id, ImVector<ImGuiID>* out_node_remap_pairs)
FValue IMGUI_LUA::DockBuilderCopyNode(FValueVector vector)
{
    //TODO
}

//void DockBuilderCopyWindowSettings(const char* src_name, const char* dst_name)
FValue IMGUI_LUA::DockBuilderCopyWindowSettings(FValueVector vector)
{
    string src_name_temp = vector[0].asString();
    const char* src_name = src_name_temp.c_str();
    string dst_name_temp = vector[1].asString();
    const char* dst_name = dst_name_temp.c_str();
    ImGui::DockBuilderCopyWindowSettings(src_name,dst_name)
    return FValue();
}

//void DockBuilderFinish(ImGuiID node_id)
FValue IMGUI_LUA::DockBuilderFinish(FValueVector vector)
{
    int node_id = vector[0].asInt();
    ImGui::DockBuilderFinish(node_id)
    return FValue();
}

//bool BeginDragDropTargetCustom(const ImRect& bb, ImGuiID id)
FValue IMGUI_LUA::BeginDragDropTargetCustom(FValueVector vector)
{
    //TODO
}

//void ClearDragDrop()
FValue IMGUI_LUA::ClearDragDrop(FValueVector vector)
{
    ImGui::ClearDragDrop()
    return FValue();
}

//bool IsDragDropPayloadBeingAccepted()
FValue IMGUI_LUA::IsDragDropPayloadBeingAccepted(FValueVector vector)
{
    bool ret = ImGui::IsDragDropPayloadBeingAccepted();
    return FValue(ret);
}

//void SetWindowClipRectBeforeSetChannel(ImGuiWindow* window, const ImRect& clip_rect)
FValue IMGUI_LUA::SetWindowClipRectBeforeSetChannel(FValueVector vector)
{
    //TODO
}

//void BeginColumns(const char* str_id, int count, ImGuiColumnsFlags flags = 0)
FValue IMGUI_LUA::BeginColumns(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int count = vector[1].asInt();
    int flags = vector[2].asInt();
    ImGui::BeginColumns(str_id,count,flags)
    return FValue();
}

//void EndColumns()
FValue IMGUI_LUA::EndColumns(FValueVector vector)
{
    ImGui::EndColumns()
    return FValue();
}

//void PushColumnClipRect(int column_index)
FValue IMGUI_LUA::PushColumnClipRect(FValueVector vector)
{
    int column_index = vector[0].asInt();
    ImGui::PushColumnClipRect(column_index)
    return FValue();
}

//void PushColumnsBackground()
FValue IMGUI_LUA::PushColumnsBackground(FValueVector vector)
{
    ImGui::PushColumnsBackground()
    return FValue();
}

//void PopColumnsBackground()
FValue IMGUI_LUA::PopColumnsBackground(FValueVector vector)
{
    ImGui::PopColumnsBackground()
    return FValue();
}

//ImGuiID GetColumnsID(const char* str_id, int count)
FValue IMGUI_LUA::GetColumnsID(FValueVector vector)
{
    string str_id_temp = vector[0].asString();
    const char* str_id = str_id_temp.c_str();
    int count = vector[1].asInt();
    ImGuiID ret = ImGui::GetColumnsID(str_id,count);
    return FValue(ret);
}

//ImGuiColumns* FindOrCreateColumns(ImGuiWindow* window, ImGuiID id)
FValue IMGUI_LUA::FindOrCreateColumns(FValueVector vector)
{
    //TODO
}

//float GetColumnOffsetFromNorm(const ImGuiColumns* columns, float offset_norm)
FValue IMGUI_LUA::GetColumnOffsetFromNorm(FValueVector vector)
{
    //TODO
}

//float GetColumnNormFromOffset(const ImGuiColumns* columns, float offset)
FValue IMGUI_LUA::GetColumnNormFromOffset(FValueVector vector)
{
    //TODO
}

//bool BeginTabBarEx(ImGuiTabBar* tab_bar, const ImRect& bb, ImGuiTabBarFlags flags, ImGuiDockNode* dock_node)
FValue IMGUI_LUA::BeginTabBarEx(FValueVector vector)
{
    //TODO
}

//ImGuiTabItem* TabBarFindTabByID(ImGuiTabBar* tab_bar, ImGuiID tab_id)
FValue IMGUI_LUA::TabBarFindTabByID(FValueVector vector)
{
    //TODO
}

//ImGuiTabItem* TabBarFindMostRecentlySelectedTabForActiveWindow(ImGuiTabBar* tab_bar)
FValue IMGUI_LUA::TabBarFindMostRecentlySelectedTabForActiveWindow(FValueVector vector)
{
    //TODO
}

//void TabBarAddTab(ImGuiTabBar* tab_bar, ImGuiTabItemFlags tab_flags, ImGuiWindow* window)
FValue IMGUI_LUA::TabBarAddTab(FValueVector vector)
{
    //TODO
}

//void TabBarRemoveTab(ImGuiTabBar* tab_bar, ImGuiID tab_id)
FValue IMGUI_LUA::TabBarRemoveTab(FValueVector vector)
{
    //TODO
}

//void TabBarCloseTab(ImGuiTabBar* tab_bar, ImGuiTabItem* tab)
FValue IMGUI_LUA::TabBarCloseTab(FValueVector vector)
{
    //TODO
}

//void TabBarQueueReorder(ImGuiTabBar* tab_bar, const ImGuiTabItem* tab, int dir)
FValue IMGUI_LUA::TabBarQueueReorder(FValueVector vector)
{
    //TODO
}

//bool TabBarProcessReorder(ImGuiTabBar* tab_bar)
FValue IMGUI_LUA::TabBarProcessReorder(FValueVector vector)
{
    //TODO
}

//bool TabItemEx(ImGuiTabBar* tab_bar, const char* label, bool* p_open, ImGuiTabItemFlags flags, ImGuiWindow* docked_window)
FValue IMGUI_LUA::TabItemEx(FValueVector vector)
{
    //TODO
}

//ImVec2 TabItemCalcSize(const char* label, bool has_close_button)
FValue IMGUI_LUA::TabItemCalcSize(FValueVector vector)
{
    //TODO
}

//void TabItemBackground(ImDrawList* draw_list, const ImRect& bb, ImGuiTabItemFlags flags, ImU32 col)
FValue IMGUI_LUA::TabItemBackground(FValueVector vector)
{
    //TODO
}

//void TabItemLabelAndCloseButton(ImDrawList* draw_list, const ImRect& bb, ImGuiTabItemFlags flags, ImVec2 frame_padding, const char* label, ImGuiID tab_id, ImGuiID close_button_id, bool is_contents_visible, bool* out_just_closed, bool* out_text_clipped)
FValue IMGUI_LUA::TabItemLabelAndCloseButton(FValueVector vector)
{
    //TODO
}

//void RenderText(ImVec2 pos, const char* text, const char* text_end = NULL, bool hide_text_after_hash = true)
FValue IMGUI_LUA::RenderText(FValueVector vector)
{
    //TODO
}

//void RenderTextWrapped(ImVec2 pos, const char* text, const char* text_end, float wrap_width)
FValue IMGUI_LUA::RenderTextWrapped(FValueVector vector)
{
    //TODO
}

//void RenderTextClipped(const ImVec2& pos_min, const ImVec2& pos_max, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImVec2& align = ImVec2(0, 0)
FValue IMGUI_LUA::RenderTextClipped(FValueVector vector)
{
    //TODO
}

//void RenderTextClippedEx(ImDrawList* draw_list, const ImVec2& pos_min, const ImVec2& pos_max, const char* text, const char* text_end, const ImVec2* text_size_if_known, const ImVec2& align = ImVec2(0, 0)
FValue IMGUI_LUA::RenderTextClippedEx(FValueVector vector)
{
    //TODO
}

//void RenderTextEllipsis(ImDrawList* draw_list, const ImVec2& pos_min, const ImVec2& pos_max, float clip_max_x, float ellipsis_max_x, const char* text, const char* text_end, const ImVec2* text_size_if_known)
FValue IMGUI_LUA::RenderTextEllipsis(FValueVector vector)
{
    //TODO
}

//void RenderFrame(ImVec2 p_min, ImVec2 p_max, ImU32 fill_col, bool border = true, float rounding = 0.0f)
FValue IMGUI_LUA::RenderFrame(FValueVector vector)
{
    //TODO
}

//void RenderFrameBorder(ImVec2 p_min, ImVec2 p_max, float rounding = 0.0f)
FValue IMGUI_LUA::RenderFrameBorder(FValueVector vector)
{
    //TODO
}

//void RenderColorRectWithAlphaCheckerboard(ImDrawList* draw_list, ImVec2 p_min, ImVec2 p_max, ImU32 fill_col, float grid_step, ImVec2 grid_off, float rounding = 0.0f, int rounding_corners_flags = ~0)
FValue IMGUI_LUA::RenderColorRectWithAlphaCheckerboard(FValueVector vector)
{
    //TODO
}

//void RenderNavHighlight(const ImRect& bb, ImGuiID id, ImGuiNavHighlightFlags flags = ImGuiNavHighlightFlags_TypeDefault)
FValue IMGUI_LUA::RenderNavHighlight(FValueVector vector)
{
    //TODO
}

//char* FindRenderedTextEnd(const char* text, const char* text_end = NULL)
FValue IMGUI_LUA::FindRenderedTextEnd(FValueVector vector)
{
    //TODO
}

//void LogRenderedText(const ImVec2* ref_pos, const char* text, const char* text_end = NULL)
FValue IMGUI_LUA::LogRenderedText(FValueVector vector)
{
    //TODO
}

//void RenderArrow(ImDrawList* draw_list, ImVec2 pos, ImU32 col, ImGuiDir dir, float scale = 1.0f)
FValue IMGUI_LUA::RenderArrow(FValueVector vector)
{
    //TODO
}

//void RenderBullet(ImDrawList* draw_list, ImVec2 pos, ImU32 col)
FValue IMGUI_LUA::RenderBullet(FValueVector vector)
{
    //TODO
}

//void RenderCheckMark(ImDrawList* draw_list, ImVec2 pos, ImU32 col, float sz)
FValue IMGUI_LUA::RenderCheckMark(FValueVector vector)
{
    //TODO
}

//void RenderMouseCursor(ImDrawList* draw_list, ImVec2 pos, float scale, ImGuiMouseCursor mouse_cursor, ImU32 col_fill, ImU32 col_border, ImU32 col_shadow)
FValue IMGUI_LUA::RenderMouseCursor(FValueVector vector)
{
    //TODO
}

//void RenderArrowPointingAt(ImDrawList* draw_list, ImVec2 pos, ImVec2 half_sz, ImGuiDir direction, ImU32 col)
FValue IMGUI_LUA::RenderArrowPointingAt(FValueVector vector)
{
    //TODO
}

//void RenderArrowDockMenu(ImDrawList* draw_list, ImVec2 p_min, float sz, ImU32 col)
FValue IMGUI_LUA::RenderArrowDockMenu(FValueVector vector)
{
    //TODO
}

//void RenderRectFilledRangeH(ImDrawList* draw_list, const ImRect& rect, ImU32 col, float x_start_norm, float x_end_norm, float rounding)
FValue IMGUI_LUA::RenderRectFilledRangeH(FValueVector vector)
{
    //TODO
}

//void RenderRectFilledWithHole(ImDrawList* draw_list, ImRect outer, ImRect inner, ImU32 col, float rounding)
FValue IMGUI_LUA::RenderRectFilledWithHole(FValueVector vector)
{
    //TODO
}

//void TextEx(const char* text, const char* text_end = NULL, ImGuiTextFlags flags = 0)
FValue IMGUI_LUA::TextEx(FValueVector vector)
{
    string text_temp = vector[0].asString();
    const char* text = text_temp.c_str();
    string text_end_temp = vector[1].asString();
    const char* text_end = text_end_temp.c_str();
    int flags = vector[2].asInt();
    ImGui::TextEx(text,text_end,flags)
    return FValue();
}

//bool ButtonEx(const char* label, const ImVec2& size_arg = ImVec2(0, 0)
FValue IMGUI_LUA::ButtonEx(FValueVector vector)
{
    //TODO
}

//bool CloseButton(ImGuiID id, const ImVec2& pos)
FValue IMGUI_LUA::CloseButton(FValueVector vector)
{
    //TODO
}

//bool CollapseButton(ImGuiID id, const ImVec2& pos, ImGuiDockNode* dock_node)
FValue IMGUI_LUA::CollapseButton(FValueVector vector)
{
    //TODO
}

//bool ArrowButtonEx(const char* str_id, ImGuiDir dir, ImVec2 size_arg, ImGuiButtonFlags flags = 0)
FValue IMGUI_LUA::ArrowButtonEx(FValueVector vector)
{
    //TODO
}

//void Scrollbar(ImGuiAxis axis)
FValue IMGUI_LUA::Scrollbar(FValueVector vector)
{
    //TODO
}

//bool ScrollbarEx(const ImRect& bb, ImGuiID id, ImGuiAxis axis, float* p_scroll_v, float avail_v, float contents_v, ImDrawCornerFlags rounding_corners)
FValue IMGUI_LUA::ScrollbarEx(FValueVector vector)
{
    //TODO
}

//bool ImageButtonEx(ImGuiID id, ImTextureID texture_id, const ImVec2& size, const ImVec2& uv0, const ImVec2& uv1, const ImVec2& padding, const ImVec4& bg_col, const ImVec4& tint_col)
FValue IMGUI_LUA::ImageButtonEx(FValueVector vector)
{
    //TODO
}

//ImRect GetWindowScrollbarRect(ImGuiWindow* window, ImGuiAxis axis)
FValue IMGUI_LUA::GetWindowScrollbarRect(FValueVector vector)
{
    //TODO
}

//ImGuiID GetWindowScrollbarID(ImGuiWindow* window, ImGuiAxis axis)
FValue IMGUI_LUA::GetWindowScrollbarID(FValueVector vector)
{
    //TODO
}

//ImGuiID GetWindowResizeID(ImGuiWindow* window, int n)
FValue IMGUI_LUA::GetWindowResizeID(FValueVector vector)
{
    //TODO
}

//void SeparatorEx(ImGuiSeparatorFlags flags)
FValue IMGUI_LUA::SeparatorEx(FValueVector vector)
{
    int flags = vector[0].asInt();
    ImGui::SeparatorEx(flags)
    return FValue();
}

//bool ButtonBehavior(const ImRect& bb, ImGuiID id, bool* out_hovered, bool* out_held, ImGuiButtonFlags flags = 0)
FValue IMGUI_LUA::ButtonBehavior(FValueVector vector)
{
    //TODO
}

//bool DragBehavior(ImGuiID id, ImGuiDataType data_type, void* p_v, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
FValue IMGUI_LUA::DragBehavior(FValueVector vector)
{
    //TODO
}

//bool SliderBehavior(const ImRect& bb, ImGuiID id, ImGuiDataType data_type, void* p_v, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags, ImRect* out_grab_bb)
FValue IMGUI_LUA::SliderBehavior(FValueVector vector)
{
    //TODO
}

//bool SplitterBehavior(const ImRect& bb, ImGuiID id, ImGuiAxis axis, float* size1, float* size2, float min_size1, float min_size2, float hover_extend = 0.0f, float hover_visibility_delay = 0.0f)
FValue IMGUI_LUA::SplitterBehavior(FValueVector vector)
{
    //TODO
}

//bool TreeNodeBehavior(ImGuiID id, ImGuiTreeNodeFlags flags, const char* label, const char* label_end = NULL)
FValue IMGUI_LUA::TreeNodeBehavior(FValueVector vector)
{
    int id = vector[0].asInt();
    int flags = vector[1].asInt();
    string label_temp = vector[2].asString();
    const char* label = label_temp.c_str();
    string label_end_temp = vector[3].asString();
    const char* label_end = label_end_temp.c_str();
    bool ret = ImGui::TreeNodeBehavior(id,flags,label,label_end);
    return FValue(ret);
}

//bool TreeNodeBehaviorIsOpen(ImGuiID id, ImGuiTreeNodeFlags flags = 0)
FValue IMGUI_LUA::TreeNodeBehaviorIsOpen(FValueVector vector)
{
    int id = vector[0].asInt();
    int flags = vector[1].asInt();
    bool ret = ImGui::TreeNodeBehaviorIsOpen(id,flags);
    return FValue(ret);
}

//void TreePushOverrideID(ImGuiID id)
FValue IMGUI_LUA::TreePushOverrideID(FValueVector vector)
{
    int id = vector[0].asInt();
    ImGui::TreePushOverrideID(id)
    return FValue();
}

//float ScaleRatioFromValueT(ImGuiDataType data_type, T v, T v_min, T v_max, bool is_logarithmic, float logarithmic_zero_epsilon, float zero_deadzone_size)
FValue IMGUI_LUA::ScaleRatioFromValueT(FValueVector vector)
{
    //TODO
}

//T ScaleValueFromRatioT(ImGuiDataType data_type, float t, T v_min, T v_max, bool is_logarithmic, float logarithmic_zero_epsilon, float zero_deadzone_size)
FValue IMGUI_LUA::ScaleValueFromRatioT(FValueVector vector)
{
    //TODO
}

//bool DragBehaviorT(ImGuiDataType data_type, T* v, float v_speed, T v_min, T v_max, const char* format, ImGuiSliderFlags flags)
FValue IMGUI_LUA::DragBehaviorT(FValueVector vector)
{
    //TODO
}

//bool SliderBehaviorT(const ImRect& bb, ImGuiID id, ImGuiDataType data_type, T* v, T v_min, T v_max, const char* format, ImGuiSliderFlags flags, ImRect* out_grab_bb)
FValue IMGUI_LUA::SliderBehaviorT(FValueVector vector)
{
    //TODO
}

//T RoundScalarWithFormatT(const char* format, ImGuiDataType data_type, T v)
FValue IMGUI_LUA::RoundScalarWithFormatT(FValueVector vector)
{
    //TODO
}

//ImGuiDataTypeInfo* DataTypeGetInfo(ImGuiDataType data_type)
FValue IMGUI_LUA::DataTypeGetInfo(FValueVector vector)
{
    //TODO
}

//int DataTypeFormatString(char* buf, int buf_size, ImGuiDataType data_type, const void* p_data, const char* format)
FValue IMGUI_LUA::DataTypeFormatString(FValueVector vector)
{
    //TODO
}

//void DataTypeApplyOp(ImGuiDataType data_type, int op, void* output, const void* arg_1, const void* arg_2)
FValue IMGUI_LUA::DataTypeApplyOp(FValueVector vector)
{
    //TODO
}

//bool DataTypeApplyOpFromText(const char* buf, const char* initial_value_buf, ImGuiDataType data_type, void* p_data, const char* format)
FValue IMGUI_LUA::DataTypeApplyOpFromText(FValueVector vector)
{
    //TODO
}

//int DataTypeCompare(ImGuiDataType data_type, const void* arg_1, const void* arg_2)
FValue IMGUI_LUA::DataTypeCompare(FValueVector vector)
{
    //TODO
}

//bool DataTypeClamp(ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max)
FValue IMGUI_LUA::DataTypeClamp(FValueVector vector)
{
    //TODO
}

//bool InputTextEx(const char* label, const char* hint, char* buf, int buf_size, const ImVec2& size_arg, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback = NULL, void* user_data = NULL)
FValue IMGUI_LUA::InputTextEx(FValueVector vector)
{
    //TODO
}

//bool TempInputText(const ImRect& bb, ImGuiID id, const char* label, char* buf, int buf_size, ImGuiInputTextFlags flags)
FValue IMGUI_LUA::TempInputText(FValueVector vector)
{
    //TODO
}

//bool TempInputScalar(const ImRect& bb, ImGuiID id, const char* label, ImGuiDataType data_type, void* p_data, const char* format, const void* p_clamp_min = NULL, const void* p_clamp_max = NULL)
FValue IMGUI_LUA::TempInputScalar(FValueVector vector)
{
    //TODO
}

//bool TempInputIsActive(ImGuiID id)
FValue IMGUI_LUA::TempInputIsActive(FValueVector vector)
{
    int id = vector[0].asInt();
    bool ret = ImGui::TempInputIsActive(id);
    return FValue(ret);
}

//ImGuiInputTextState* GetInputTextState(ImGuiID id)
FValue IMGUI_LUA::GetInputTextState(FValueVector vector)
{
    //TODO
}

//void ColorTooltip(const char* text, const float* col, ImGuiColorEditFlags flags)
FValue IMGUI_LUA::ColorTooltip(FValueVector vector)
{
    //TODO
}

//void ColorEditOptionsPopup(const float* col, ImGuiColorEditFlags flags)
FValue IMGUI_LUA::ColorEditOptionsPopup(FValueVector vector)
{
    //TODO
}

//void ColorPickerOptionsPopup(const float* ref_col, ImGuiColorEditFlags flags)
FValue IMGUI_LUA::ColorPickerOptionsPopup(FValueVector vector)
{
    //TODO
}

//int PlotEx(ImGuiPlotType plot_type, const char* label, float (*values_getter)
FValue IMGUI_LUA::PlotEx(FValueVector vector)
{
    //TODO
}

//void ShadeVertsLinearColorGradientKeepAlpha(ImDrawList* draw_list, int vert_start_idx, int vert_end_idx, ImVec2 gradient_p0, ImVec2 gradient_p1, ImU32 col0, ImU32 col1)
FValue IMGUI_LUA::ShadeVertsLinearColorGradientKeepAlpha(FValueVector vector)
{
    //TODO
}

//void ShadeVertsLinearUV(ImDrawList* draw_list, int vert_start_idx, int vert_end_idx, const ImVec2& a, const ImVec2& b, const ImVec2& uv_a, const ImVec2& uv_b, bool clamp)
FValue IMGUI_LUA::ShadeVertsLinearUV(FValueVector vector)
{
    //TODO
}

//void GcCompactTransientWindowBuffers(ImGuiWindow* window)
FValue IMGUI_LUA::GcCompactTransientWindowBuffers(FValueVector vector)
{
    //TODO
}

//void GcAwakeTransientWindowBuffers(ImGuiWindow* window)
FValue IMGUI_LUA::GcAwakeTransientWindowBuffers(FValueVector vector)
{
    //TODO
}

//void DebugDrawItemRect(ImU32 col = IM_COL32(255,0,0,255)
FValue IMGUI_LUA::DebugDrawItemRect(FValueVector vector)
{
    //TODO
}

//void DebugStartItemPicker()
FValue IMGUI_LUA::DebugStartItemPicker(FValueVector vector)
{
    ImGui::DebugStartItemPicker()
    return FValue();
}

	