#ifndef IMGUI_LUA_H
#define IMGUI_LUA_H

#include <string>
#include "FYDC.h"
class IMGUI_LUA {
    
public:
    static IMGUI_LUA* getInstance();
    FValue CreateContext(FValueVector vector);
    FValue DestroyContext(FValueVector vector);
    FValue GetCurrentContext(FValueVector vector);
    FValue SetCurrentContext(FValueVector vector);
    FValue GetIO(FValueVector vector);
    FValue GetStyle(FValueVector vector);
    FValue NewFrame(FValueVector vector);
    FValue EndFrame(FValueVector vector);
    FValue Render(FValueVector vector);
    FValue GetDrawData(FValueVector vector);
    FValue ShowDemoWindow(FValueVector vector);
    FValue ShowAboutWindow(FValueVector vector);
    FValue ShowMetricsWindow(FValueVector vector);
    FValue ShowStyleEditor(FValueVector vector);
    FValue ShowStyleSelector(FValueVector vector);
    FValue ShowFontSelector(FValueVector vector);
    FValue ShowUserGuide(FValueVector vector);
    FValue GetVersion(FValueVector vector);
    FValue StyleColorsDark(FValueVector vector);
    FValue StyleColorsClassic(FValueVector vector);
    FValue StyleColorsLight(FValueVector vector);
    FValue Begin(FValueVector vector);
    FValue End(FValueVector vector);
    FValue BeginChild(FValueVector vector);
    FValue EndChild(FValueVector vector);
    FValue IsWindowAppearing(FValueVector vector);
    FValue IsWindowCollapsed(FValueVector vector);
    FValue IsWindowFocused(FValueVector vector);
    FValue IsWindowHovered(FValueVector vector);
    FValue GetWindowDrawList(FValueVector vector);
    FValue GetWindowDpiScale(FValueVector vector);
    FValue GetWindowPos(FValueVector vector);
    FValue GetWindowSize(FValueVector vector);
    FValue GetWindowWidth(FValueVector vector);
    FValue GetWindowHeight(FValueVector vector);
    FValue SetNextWindowPos(FValueVector vector);
    FValue SetNextWindowSize(FValueVector vector);
    FValue SetNextWindowSizeConstraints(FValueVector vector);
    FValue SetNextWindowContentSize(FValueVector vector);
    FValue SetNextWindowCollapsed(FValueVector vector);
    FValue SetNextWindowFocus(FValueVector vector);
    FValue SetNextWindowBgAlpha(FValueVector vector);
    FValue SetNextWindowViewport(FValueVector vector);
    FValue SetWindowPos(FValueVector vector);
    FValue SetWindowSize(FValueVector vector);
    FValue SetWindowCollapsed(FValueVector vector);
    FValue SetWindowFocus(FValueVector vector);
    FValue SetWindowFontScale(FValueVector vector);
    FValue GetContentRegionMax(FValueVector vector);
    FValue GetContentRegionAvail(FValueVector vector);
    FValue GetWindowContentRegionMin(FValueVector vector);
    FValue GetWindowContentRegionMax(FValueVector vector);
    FValue GetWindowContentRegionWidth(FValueVector vector);
    FValue GetScrollX(FValueVector vector);
    FValue GetScrollY(FValueVector vector);
    FValue GetScrollMaxX(FValueVector vector);
    FValue GetScrollMaxY(FValueVector vector);
    FValue SetScrollX(FValueVector vector);
    FValue SetScrollY(FValueVector vector);
    FValue SetScrollHereX(FValueVector vector);
    FValue SetScrollHereY(FValueVector vector);
    FValue SetScrollFromPosX(FValueVector vector);
    FValue SetScrollFromPosY(FValueVector vector);
    FValue PushFont(FValueVector vector);
    FValue PopFont(FValueVector vector);
    FValue PushStyleColor(FValueVector vector);
    FValue PopStyleColor(FValueVector vector);
    FValue PushStyleVar(FValueVector vector);
    FValue PopStyleVar(FValueVector vector);
    FValue GetStyleColorVec4(FValueVector vector);
    FValue GetFont(FValueVector vector);
    FValue GetFontSize(FValueVector vector);
    FValue GetFontTexUvWhitePixel(FValueVector vector);
    FValue GetColorU32(FValueVector vector);
    FValue PushItemWidth(FValueVector vector);
    FValue PopItemWidth(FValueVector vector);
    FValue SetNextItemWidth(FValueVector vector);
    FValue CalcItemWidth(FValueVector vector);
    FValue PushTextWrapPos(FValueVector vector);
    FValue PopTextWrapPos(FValueVector vector);
    FValue PushAllowKeyboardFocus(FValueVector vector);
    FValue PopAllowKeyboardFocus(FValueVector vector);
    FValue PushButtonRepeat(FValueVector vector);
    FValue PopButtonRepeat(FValueVector vector);
    FValue Separator(FValueVector vector);
    FValue SameLine(FValueVector vector);
    FValue NewLine(FValueVector vector);
    FValue Spacing(FValueVector vector);
    FValue Dummy(FValueVector vector);
    FValue Indent(FValueVector vector);
    FValue Unindent(FValueVector vector);
    FValue BeginGroup(FValueVector vector);
    FValue EndGroup(FValueVector vector);
    FValue GetCursorPos(FValueVector vector);
    FValue GetCursorPosX(FValueVector vector);
    FValue GetCursorPosY(FValueVector vector);
    FValue SetCursorPos(FValueVector vector);
    FValue SetCursorPosX(FValueVector vector);
    FValue SetCursorPosY(FValueVector vector);
    FValue GetCursorStartPos(FValueVector vector);
    FValue GetCursorScreenPos(FValueVector vector);
    FValue SetCursorScreenPos(FValueVector vector);
    FValue AlignTextToFramePadding(FValueVector vector);
    FValue GetTextLineHeight(FValueVector vector);
    FValue GetTextLineHeightWithSpacing(FValueVector vector);
    FValue GetFrameHeight(FValueVector vector);
    FValue GetFrameHeightWithSpacing(FValueVector vector);
    FValue PushID(FValueVector vector);
    FValue PopID(FValueVector vector);
    FValue GetID(FValueVector vector);
    FValue TextUnformatted(FValueVector vector);
    FValue Text(FValueVector vector);
    FValue TextV(FValueVector vector);
    FValue TextColored(FValueVector vector);
    FValue TextColoredV(FValueVector vector);
    FValue TextDisabled(FValueVector vector);
    FValue TextDisabledV(FValueVector vector);
    FValue TextWrapped(FValueVector vector);
    FValue TextWrappedV(FValueVector vector);
    FValue LabelText(FValueVector vector);
    FValue LabelTextV(FValueVector vector);
    FValue BulletText(FValueVector vector);
    FValue BulletTextV(FValueVector vector);
    FValue Button(FValueVector vector);
    FValue SmallButton(FValueVector vector);
    FValue InvisibleButton(FValueVector vector);
    FValue ArrowButton(FValueVector vector);
    FValue Image(FValueVector vector);
    FValue ImageButton(FValueVector vector);
    FValue Checkbox(FValueVector vector);
    FValue CheckboxFlags(FValueVector vector);
    FValue RadioButton(FValueVector vector);
    FValue ProgressBar(FValueVector vector);
    FValue Bullet(FValueVector vector);
    FValue BeginCombo(FValueVector vector);
    FValue EndCombo(FValueVector vector);
    FValue Combo(FValueVector vector);
    FValue DragFloat(FValueVector vector);
    FValue DragFloat2(FValueVector vector);
    FValue DragFloat3(FValueVector vector);
    FValue DragFloat4(FValueVector vector);
    FValue DragFloatRange2(FValueVector vector);
    FValue DragInt(FValueVector vector);
    FValue DragInt2(FValueVector vector);
    FValue DragInt3(FValueVector vector);
    FValue DragInt4(FValueVector vector);
    FValue DragIntRange2(FValueVector vector);
    FValue DragScalar(FValueVector vector);
    FValue DragScalarN(FValueVector vector);
    FValue SliderFloat(FValueVector vector);
    FValue SliderFloat2(FValueVector vector);
    FValue SliderFloat3(FValueVector vector);
    FValue SliderFloat4(FValueVector vector);
    FValue SliderAngle(FValueVector vector);
    FValue SliderInt(FValueVector vector);
    FValue SliderInt2(FValueVector vector);
    FValue SliderInt3(FValueVector vector);
    FValue SliderInt4(FValueVector vector);
    FValue SliderScalar(FValueVector vector);
    FValue SliderScalarN(FValueVector vector);
    FValue VSliderFloat(FValueVector vector);
    FValue VSliderInt(FValueVector vector);
    FValue VSliderScalar(FValueVector vector);
    FValue InputText(FValueVector vector);
    FValue InputTextMultiline(FValueVector vector);
    FValue InputTextWithHint(FValueVector vector);
    FValue InputFloat(FValueVector vector);
    FValue InputFloat2(FValueVector vector);
    FValue InputFloat3(FValueVector vector);
    FValue InputFloat4(FValueVector vector);
    FValue InputInt(FValueVector vector);
    FValue InputInt2(FValueVector vector);
    FValue InputInt3(FValueVector vector);
    FValue InputInt4(FValueVector vector);
    FValue InputDouble(FValueVector vector);
    FValue InputScalar(FValueVector vector);
    FValue InputScalarN(FValueVector vector);
    FValue ColorEdit3(FValueVector vector);
    FValue ColorEdit4(FValueVector vector);
    FValue ColorPicker3(FValueVector vector);
    FValue ColorPicker4(FValueVector vector);
    FValue ColorButton(FValueVector vector);
    FValue SetColorEditOptions(FValueVector vector);
    FValue TreeNode(FValueVector vector);
    FValue TreeNodeV(FValueVector vector);
    FValue TreeNodeEx(FValueVector vector);
    FValue TreeNodeExV(FValueVector vector);
    FValue TreePush(FValueVector vector);
    FValue TreePop(FValueVector vector);
    FValue GetTreeNodeToLabelSpacing(FValueVector vector);
    FValue CollapsingHeader(FValueVector vector);
    FValue SetNextItemOpen(FValueVector vector);
    FValue Selectable(FValueVector vector);
    FValue ListBox(FValueVector vector);
    FValue ListBoxHeader(FValueVector vector);
    FValue ListBoxFooter(FValueVector vector);
    FValue PlotLines(FValueVector vector);
    FValue PlotHistogram(FValueVector vector);
    FValue Value(FValueVector vector);
    FValue BeginMenuBar(FValueVector vector);
    FValue EndMenuBar(FValueVector vector);
    FValue BeginMainMenuBar(FValueVector vector);
    FValue EndMainMenuBar(FValueVector vector);
    FValue BeginMenu(FValueVector vector);
    FValue EndMenu(FValueVector vector);
    FValue MenuItem(FValueVector vector);
    FValue BeginTooltip(FValueVector vector);
    FValue EndTooltip(FValueVector vector);
    FValue SetTooltip(FValueVector vector);
    FValue SetTooltipV(FValueVector vector);
    FValue BeginPopup(FValueVector vector);
    FValue BeginPopupModal(FValueVector vector);
    FValue EndPopup(FValueVector vector);
    FValue OpenPopup(FValueVector vector);
    FValue OpenPopupOnItemClick(FValueVector vector);
    FValue CloseCurrentPopup(FValueVector vector);
    FValue BeginPopupContextItem(FValueVector vector);
    FValue BeginPopupContextWindow(FValueVector vector);
    FValue BeginPopupContextVoid(FValueVector vector);
    FValue IsPopupOpen(FValueVector vector);
    FValue Columns(FValueVector vector);
    FValue NextColumn(FValueVector vector);
    FValue GetColumnIndex(FValueVector vector);
    FValue GetColumnWidth(FValueVector vector);
    FValue SetColumnWidth(FValueVector vector);
    FValue GetColumnOffset(FValueVector vector);
    FValue SetColumnOffset(FValueVector vector);
    FValue GetColumnsCount(FValueVector vector);
    FValue BeginTabBar(FValueVector vector);
    FValue EndTabBar(FValueVector vector);
    FValue BeginTabItem(FValueVector vector);
    FValue EndTabItem(FValueVector vector);
    FValue TabItemButton(FValueVector vector);
    FValue SetTabItemClosed(FValueVector vector);
    FValue DockSpace(FValueVector vector);
    FValue DockSpaceOverViewport(FValueVector vector);
    FValue SetNextWindowDockID(FValueVector vector);
    FValue SetNextWindowClass(FValueVector vector);
    FValue GetWindowDockID(FValueVector vector);
    FValue IsWindowDocked(FValueVector vector);
    FValue LogToTTY(FValueVector vector);
    FValue LogToFile(FValueVector vector);
    FValue LogToClipboard(FValueVector vector);
    FValue LogFinish(FValueVector vector);
    FValue LogButtons(FValueVector vector);
    FValue LogText(FValueVector vector);
    FValue BeginDragDropSource(FValueVector vector);
    FValue SetDragDropPayload(FValueVector vector);
    FValue EndDragDropSource(FValueVector vector);
    FValue BeginDragDropTarget(FValueVector vector);
    FValue AcceptDragDropPayload(FValueVector vector);
    FValue EndDragDropTarget(FValueVector vector);
    FValue GetDragDropPayload(FValueVector vector);
    FValue PushClipRect(FValueVector vector);
    FValue PopClipRect(FValueVector vector);
    FValue SetItemDefaultFocus(FValueVector vector);
    FValue SetKeyboardFocusHere(FValueVector vector);
    FValue IsItemHovered(FValueVector vector);
    FValue IsItemActive(FValueVector vector);
    FValue IsItemFocused(FValueVector vector);
    FValue IsItemClicked(FValueVector vector);
    FValue IsItemVisible(FValueVector vector);
    FValue IsItemEdited(FValueVector vector);
    FValue IsItemActivated(FValueVector vector);
    FValue IsItemDeactivated(FValueVector vector);
    FValue IsItemDeactivatedAfterEdit(FValueVector vector);
    FValue IsItemToggledOpen(FValueVector vector);
    FValue IsAnyItemHovered(FValueVector vector);
    FValue IsAnyItemActive(FValueVector vector);
    FValue IsAnyItemFocused(FValueVector vector);
    FValue GetItemRectMin(FValueVector vector);
    FValue GetItemRectMax(FValueVector vector);
    FValue GetItemRectSize(FValueVector vector);
    FValue SetItemAllowOverlap(FValueVector vector);
    FValue IsRectVisible(FValueVector vector);
    FValue GetTime(FValueVector vector);
    FValue GetFrameCount(FValueVector vector);
    FValue GetBackgroundDrawList(FValueVector vector);
    FValue GetForegroundDrawList(FValueVector vector);
    FValue GetDrawListSharedData(FValueVector vector);
    FValue GetStyleColorName(FValueVector vector);
    FValue SetStateStorage(FValueVector vector);
    FValue GetStateStorage(FValueVector vector);
    FValue CalcListClipping(FValueVector vector);
    FValue BeginChildFrame(FValueVector vector);
    FValue EndChildFrame(FValueVector vector);
    FValue CalcTextSize(FValueVector vector);
    FValue ColorConvertU32ToFloat4(FValueVector vector);
    FValue ColorConvertFloat4ToU32(FValueVector vector);
    FValue ColorConvertRGBtoHSV(FValueVector vector);
    FValue ColorConvertHSVtoRGB(FValueVector vector);
    FValue GetKeyIndex(FValueVector vector);
    FValue IsKeyDown(FValueVector vector);
    FValue IsKeyPressed(FValueVector vector);
    FValue IsKeyReleased(FValueVector vector);
    FValue GetKeyPressedAmount(FValueVector vector);
    FValue CaptureKeyboardFromApp(FValueVector vector);
    FValue IsMouseDown(FValueVector vector);
    FValue IsMouseClicked(FValueVector vector);
    FValue IsMouseReleased(FValueVector vector);
    FValue IsMouseDoubleClicked(FValueVector vector);
    FValue IsMouseHoveringRect(FValueVector vector);
    FValue IsMousePosValid(FValueVector vector);
    FValue IsAnyMouseDown(FValueVector vector);
    FValue GetMousePos(FValueVector vector);
    FValue GetMousePosOnOpeningCurrentPopup(FValueVector vector);
    FValue IsMouseDragging(FValueVector vector);
    FValue GetMouseDragDelta(FValueVector vector);
    FValue ResetMouseDragDelta(FValueVector vector);
    FValue GetMouseCursor(FValueVector vector);
    FValue SetMouseCursor(FValueVector vector);
    FValue CaptureMouseFromApp(FValueVector vector);
    FValue GetClipboardText(FValueVector vector);
    FValue SetClipboardText(FValueVector vector);
    FValue LoadIniSettingsFromDisk(FValueVector vector);
    FValue LoadIniSettingsFromMemory(FValueVector vector);
    FValue SaveIniSettingsToDisk(FValueVector vector);
    FValue SaveIniSettingsToMemory(FValueVector vector);
    FValue DebugCheckVersionAndDataLayout(FValueVector vector);
    FValue SetAllocatorFunctions(FValueVector vector);
    FValue MemAlloc(FValueVector vector);
    FValue MemFree(FValueVector vector);
    FValue GetPlatformIO(FValueVector vector);
    FValue GetMainViewport(FValueVector vector);
    FValue UpdatePlatformWindows(FValueVector vector);
    FValue RenderPlatformWindowsDefault(FValueVector vector);
    FValue DestroyPlatformWindows(FValueVector vector);
    FValue FindViewportByID(FValueVector vector);
    FValue FindViewportByPlatformHandle(FValueVector vector);
    FValue OpenPopupContextItem(FValueVector vector);
    FValue TreeAdvanceToLabelPos(FValueVector vector);
    FValue SetNextTreeNodeOpen(FValueVector vector);
    FValue GetContentRegionAvailWidth(FValueVector vector);
    FValue GetOverlayDrawList(FValueVector vector);
    FValue SetScrollHere(FValueVector vector);
    FValue IsItemDeactivatedAfterChange(FValueVector vector);
    FValue GetCurrentWindowRead(FValueVector vector);
    FValue GetCurrentWindow(FValueVector vector);
    FValue FindWindowByID(FValueVector vector);
    FValue FindWindowByName(FValueVector vector);
    FValue UpdateWindowParentAndRootLinks(FValueVector vector);
    FValue CalcWindowExpectedSize(FValueVector vector);
    FValue IsWindowChildOf(FValueVector vector);
    FValue IsWindowNavFocusable(FValueVector vector);
    FValue GetWindowAllowedExtentRect(FValueVector vector);
    FValue SetWindowHitTestHole(FValueVector vector);
    FValue FocusWindow(FValueVector vector);
    FValue FocusTopMostWindowUnderOne(FValueVector vector);
    FValue BringWindowToFocusFront(FValueVector vector);
    FValue BringWindowToDisplayFront(FValueVector vector);
    FValue BringWindowToDisplayBack(FValueVector vector);
    FValue SetCurrentFont(FValueVector vector);
    FValue GetDefaultFont(FValueVector vector);
    FValue Initialize(FValueVector vector);
    FValue Shutdown(FValueVector vector);
    FValue UpdateHoveredWindowAndCaptureFlags(FValueVector vector);
    FValue StartMouseMovingWindow(FValueVector vector);
    FValue StartMouseMovingWindowOrNode(FValueVector vector);
    FValue UpdateMouseMovingWindowNewFrame(FValueVector vector);
    FValue UpdateMouseMovingWindowEndFrame(FValueVector vector);
    FValue AddContextHook(FValueVector vector);
    FValue CallContextHooks(FValueVector vector);
    FValue TranslateWindowsInViewport(FValueVector vector);
    FValue ScaleWindowsInViewport(FValueVector vector);
    FValue DestroyPlatformWindow(FValueVector vector);
    FValue ShowViewportThumbnails(FValueVector vector);
    FValue MarkIniSettingsDirty(FValueVector vector);
    FValue ClearIniSettings(FValueVector vector);
    FValue CreateNewWindowSettings(FValueVector vector);
    FValue FindWindowSettings(FValueVector vector);
    FValue FindOrCreateWindowSettings(FValueVector vector);
    FValue FindSettingsHandler(FValueVector vector);
    FValue SetNextWindowScroll(FValueVector vector);
    FValue ScrollToBringRectIntoView(FValueVector vector);
    FValue GetItemID(FValueVector vector);
    FValue GetItemStatusFlags(FValueVector vector);
    FValue GetActiveID(FValueVector vector);
    FValue GetFocusID(FValueVector vector);
    FValue SetActiveID(FValueVector vector);
    FValue SetFocusID(FValueVector vector);
    FValue ClearActiveID(FValueVector vector);
    FValue GetHoveredID(FValueVector vector);
    FValue SetHoveredID(FValueVector vector);
    FValue KeepAliveID(FValueVector vector);
    FValue MarkItemEdited(FValueVector vector);
    FValue PushOverrideID(FValueVector vector);
    FValue GetIDWithSeed(FValueVector vector);
    FValue ItemSize(FValueVector vector);
    FValue ItemAdd(FValueVector vector);
    FValue ItemHoverable(FValueVector vector);
    FValue IsClippedEx(FValueVector vector);
    FValue SetLastItemData(FValueVector vector);
    FValue FocusableItemRegister(FValueVector vector);
    FValue FocusableItemUnregister(FValueVector vector);
    FValue CalcItemSize(FValueVector vector);
    FValue CalcWrapWidthForPos(FValueVector vector);
    FValue PushMultiItemsWidths(FValueVector vector);
    FValue PushItemFlag(FValueVector vector);
    FValue PopItemFlag(FValueVector vector);
    FValue IsItemToggledSelection(FValueVector vector);
    FValue GetContentRegionMaxAbs(FValueVector vector);
    FValue ShrinkWidths(FValueVector vector);
    FValue LogBegin(FValueVector vector);
    FValue LogToBuffer(FValueVector vector);
    FValue BeginChildEx(FValueVector vector);
    FValue OpenPopupEx(FValueVector vector);
    FValue ClosePopupToLevel(FValueVector vector);
    FValue ClosePopupsOverWindow(FValueVector vector);
    FValue BeginPopupEx(FValueVector vector);
    FValue BeginTooltipEx(FValueVector vector);
    FValue GetTopMostPopupModal(FValueVector vector);
    FValue FindBestWindowPosForPopup(FValueVector vector);
    FValue FindBestWindowPosForPopupEx(FValueVector vector);
    FValue NavInitWindow(FValueVector vector);
    FValue NavMoveRequestButNoResultYet(FValueVector vector);
    FValue NavMoveRequestCancel(FValueVector vector);
    FValue NavMoveRequestForward(FValueVector vector);
    FValue NavMoveRequestTryWrapping(FValueVector vector);
    FValue GetNavInputAmount(FValueVector vector);
    FValue GetNavInputAmount2d(FValueVector vector);
    FValue CalcTypematicRepeatAmount(FValueVector vector);
    FValue ActivateItem(FValueVector vector);
    FValue SetNavID(FValueVector vector);
    FValue SetNavIDWithRectRel(FValueVector vector);
    FValue PushFocusScope(FValueVector vector);
    FValue PopFocusScope(FValueVector vector);
    FValue GetFocusScopeID(FValueVector vector);
    FValue IsActiveIdUsingNavDir(FValueVector vector);
    FValue IsActiveIdUsingNavInput(FValueVector vector);
    FValue IsActiveIdUsingKey(FValueVector vector);
    FValue IsMouseDragPastThreshold(FValueVector vector);
    FValue IsKeyPressedMap(FValueVector vector);
    FValue IsNavInputDown(FValueVector vector);
    FValue IsNavInputTest(FValueVector vector);
    FValue GetMergedKeyModFlags(FValueVector vector);
    FValue DockContextInitialize(FValueVector vector);
    FValue DockContextShutdown(FValueVector vector);
    FValue DockContextClearNodes(FValueVector vector);
    FValue DockContextRebuildNodes(FValueVector vector);
    FValue DockContextUpdateUndocking(FValueVector vector);
    FValue DockContextUpdateDocking(FValueVector vector);
    FValue DockContextGenNodeID(FValueVector vector);
    FValue DockContextQueueDock(FValueVector vector);
    FValue DockContextQueueUndockWindow(FValueVector vector);
    FValue DockContextQueueUndockNode(FValueVector vector);
    FValue DockContextCalcDropPosForDocking(FValueVector vector);
    FValue DockNodeBeginAmendTabBar(FValueVector vector);
    FValue DockNodeEndAmendTabBar(FValueVector vector);
    FValue DockNodeGetRootNode(FValueVector vector);
    FValue DockNodeGetDepth(FValueVector vector);
    FValue GetWindowDockNode(FValueVector vector);
    FValue GetWindowAlwaysWantOwnTabBar(FValueVector vector);
    FValue BeginDocked(FValueVector vector);
    FValue BeginDockableDragDropSource(FValueVector vector);
    FValue BeginDockableDragDropTarget(FValueVector vector);
    FValue SetWindowDock(FValueVector vector);
    FValue DockBuilderDockWindow(FValueVector vector);
    FValue DockBuilderGetCentralNode(FValueVector vector);
    FValue DockBuilderAddNode(FValueVector vector);
    FValue DockBuilderRemoveNode(FValueVector vector);
    FValue DockBuilderRemoveNodeDockedWindows(FValueVector vector);
    FValue DockBuilderRemoveNodeChildNodes(FValueVector vector);
    FValue DockBuilderSetNodePos(FValueVector vector);
    FValue DockBuilderSetNodeSize(FValueVector vector);
    FValue DockBuilderSplitNode(FValueVector vector);
    FValue DockBuilderCopyDockSpace(FValueVector vector);
    FValue DockBuilderCopyNode(FValueVector vector);
    FValue DockBuilderCopyWindowSettings(FValueVector vector);
    FValue DockBuilderFinish(FValueVector vector);
    FValue BeginDragDropTargetCustom(FValueVector vector);
    FValue ClearDragDrop(FValueVector vector);
    FValue IsDragDropPayloadBeingAccepted(FValueVector vector);
    FValue SetWindowClipRectBeforeSetChannel(FValueVector vector);
    FValue BeginColumns(FValueVector vector);
    FValue EndColumns(FValueVector vector);
    FValue PushColumnClipRect(FValueVector vector);
    FValue PushColumnsBackground(FValueVector vector);
    FValue PopColumnsBackground(FValueVector vector);
    FValue GetColumnsID(FValueVector vector);
    FValue FindOrCreateColumns(FValueVector vector);
    FValue GetColumnOffsetFromNorm(FValueVector vector);
    FValue GetColumnNormFromOffset(FValueVector vector);
    FValue BeginTabBarEx(FValueVector vector);
    FValue TabBarFindTabByID(FValueVector vector);
    FValue TabBarFindMostRecentlySelectedTabForActiveWindow(FValueVector vector);
    FValue TabBarAddTab(FValueVector vector);
    FValue TabBarRemoveTab(FValueVector vector);
    FValue TabBarCloseTab(FValueVector vector);
    FValue TabBarQueueReorder(FValueVector vector);
    FValue TabBarProcessReorder(FValueVector vector);
    FValue TabItemEx(FValueVector vector);
    FValue TabItemCalcSize(FValueVector vector);
    FValue TabItemBackground(FValueVector vector);
    FValue TabItemLabelAndCloseButton(FValueVector vector);
    FValue RenderText(FValueVector vector);
    FValue RenderTextWrapped(FValueVector vector);
    FValue RenderTextClipped(FValueVector vector);
    FValue RenderTextClippedEx(FValueVector vector);
    FValue RenderTextEllipsis(FValueVector vector);
    FValue RenderFrame(FValueVector vector);
    FValue RenderFrameBorder(FValueVector vector);
    FValue RenderColorRectWithAlphaCheckerboard(FValueVector vector);
    FValue RenderNavHighlight(FValueVector vector);
    FValue FindRenderedTextEnd(FValueVector vector);
    FValue LogRenderedText(FValueVector vector);
    FValue RenderArrow(FValueVector vector);
    FValue RenderBullet(FValueVector vector);
    FValue RenderCheckMark(FValueVector vector);
    FValue RenderMouseCursor(FValueVector vector);
    FValue RenderArrowPointingAt(FValueVector vector);
    FValue RenderArrowDockMenu(FValueVector vector);
    FValue RenderRectFilledRangeH(FValueVector vector);
    FValue RenderRectFilledWithHole(FValueVector vector);
    FValue TextEx(FValueVector vector);
    FValue ButtonEx(FValueVector vector);
    FValue CloseButton(FValueVector vector);
    FValue CollapseButton(FValueVector vector);
    FValue ArrowButtonEx(FValueVector vector);
    FValue Scrollbar(FValueVector vector);
    FValue ScrollbarEx(FValueVector vector);
    FValue ImageButtonEx(FValueVector vector);
    FValue GetWindowScrollbarRect(FValueVector vector);
    FValue GetWindowScrollbarID(FValueVector vector);
    FValue GetWindowResizeID(FValueVector vector);
    FValue SeparatorEx(FValueVector vector);
    FValue ButtonBehavior(FValueVector vector);
    FValue DragBehavior(FValueVector vector);
    FValue SliderBehavior(FValueVector vector);
    FValue SplitterBehavior(FValueVector vector);
    FValue TreeNodeBehavior(FValueVector vector);
    FValue TreeNodeBehaviorIsOpen(FValueVector vector);
    FValue TreePushOverrideID(FValueVector vector);
    FValue ScaleRatioFromValueT(FValueVector vector);
    FValue ScaleValueFromRatioT(FValueVector vector);
    FValue DragBehaviorT(FValueVector vector);
    FValue SliderBehaviorT(FValueVector vector);
    FValue RoundScalarWithFormatT(FValueVector vector);
    FValue DataTypeGetInfo(FValueVector vector);
    FValue DataTypeFormatString(FValueVector vector);
    FValue DataTypeApplyOp(FValueVector vector);
    FValue DataTypeApplyOpFromText(FValueVector vector);
    FValue DataTypeCompare(FValueVector vector);
    FValue DataTypeClamp(FValueVector vector);
    FValue InputTextEx(FValueVector vector);
    FValue TempInputText(FValueVector vector);
    FValue TempInputScalar(FValueVector vector);
    FValue TempInputIsActive(FValueVector vector);
    FValue GetInputTextState(FValueVector vector);
    FValue ColorTooltip(FValueVector vector);
    FValue ColorEditOptionsPopup(FValueVector vector);
    FValue ColorPickerOptionsPopup(FValueVector vector);
    FValue PlotEx(FValueVector vector);
    FValue ShadeVertsLinearColorGradientKeepAlpha(FValueVector vector);
    FValue ShadeVertsLinearUV(FValueVector vector);
    FValue GcCompactTransientWindowBuffers(FValueVector vector);
    FValue GcAwakeTransientWindowBuffers(FValueVector vector);
    FValue DebugDrawItemRect(FValueVector vector);
    FValue DebugStartItemPicker(FValueVector vector);

void registerFunc(){

    REG_OBJ_FUNC(IMGUI_LUA::CreateContext,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CreateContext")
    REG_OBJ_FUNC(IMGUI_LUA::DestroyContext,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DestroyContext")
    REG_OBJ_FUNC(IMGUI_LUA::GetCurrentContext,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCurrentContext")
    REG_OBJ_FUNC(IMGUI_LUA::SetCurrentContext,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCurrentContext")
    REG_OBJ_FUNC(IMGUI_LUA::GetIO,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetIO")
    REG_OBJ_FUNC(IMGUI_LUA::GetStyle,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetStyle")
    REG_OBJ_FUNC(IMGUI_LUA::NewFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NewFrame")
    REG_OBJ_FUNC(IMGUI_LUA::EndFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndFrame")
    REG_OBJ_FUNC(IMGUI_LUA::Render,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Render")
    REG_OBJ_FUNC(IMGUI_LUA::GetDrawData,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetDrawData")
    REG_OBJ_FUNC(IMGUI_LUA::ShowDemoWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowDemoWindow")
    REG_OBJ_FUNC(IMGUI_LUA::ShowAboutWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowAboutWindow")
    REG_OBJ_FUNC(IMGUI_LUA::ShowMetricsWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowMetricsWindow")
    REG_OBJ_FUNC(IMGUI_LUA::ShowStyleEditor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowStyleEditor")
    REG_OBJ_FUNC(IMGUI_LUA::ShowStyleSelector,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowStyleSelector")
    REG_OBJ_FUNC(IMGUI_LUA::ShowFontSelector,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowFontSelector")
    REG_OBJ_FUNC(IMGUI_LUA::ShowUserGuide,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowUserGuide")
    REG_OBJ_FUNC(IMGUI_LUA::GetVersion,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetVersion")
    REG_OBJ_FUNC(IMGUI_LUA::StyleColorsDark,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::StyleColorsDark")
    REG_OBJ_FUNC(IMGUI_LUA::StyleColorsClassic,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::StyleColorsClassic")
    REG_OBJ_FUNC(IMGUI_LUA::StyleColorsLight,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::StyleColorsLight")
    REG_OBJ_FUNC(IMGUI_LUA::Begin,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Begin")
    REG_OBJ_FUNC(IMGUI_LUA::End,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::End")
    REG_OBJ_FUNC(IMGUI_LUA::BeginChild,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginChild")
    REG_OBJ_FUNC(IMGUI_LUA::EndChild,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndChild")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowAppearing,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowAppearing")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowCollapsed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowCollapsed")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowFocused,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowFocused")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowHovered,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowHovered")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowDrawList,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowDrawList")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowDpiScale,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowDpiScale")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowPos")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowSize")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowWidth")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowHeight,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowHeight")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowPos")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowSize")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowSizeConstraints,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowSizeConstraints")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowContentSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowContentSize")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowCollapsed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowCollapsed")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowFocus,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowFocus")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowBgAlpha,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowBgAlpha")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowViewport,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowViewport")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowPos")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowSize")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowCollapsed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowCollapsed")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowFocus,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowFocus")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowFontScale,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowFontScale")
    REG_OBJ_FUNC(IMGUI_LUA::GetContentRegionMax,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetContentRegionMax")
    REG_OBJ_FUNC(IMGUI_LUA::GetContentRegionAvail,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetContentRegionAvail")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowContentRegionMin,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowContentRegionMin")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowContentRegionMax,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowContentRegionMax")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowContentRegionWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowContentRegionWidth")
    REG_OBJ_FUNC(IMGUI_LUA::GetScrollX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetScrollX")
    REG_OBJ_FUNC(IMGUI_LUA::GetScrollY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetScrollY")
    REG_OBJ_FUNC(IMGUI_LUA::GetScrollMaxX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetScrollMaxX")
    REG_OBJ_FUNC(IMGUI_LUA::GetScrollMaxY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetScrollMaxY")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollX")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollY")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollHereX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollHereX")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollHereY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollHereY")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollFromPosX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollFromPosX")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollFromPosY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollFromPosY")
    REG_OBJ_FUNC(IMGUI_LUA::PushFont,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushFont")
    REG_OBJ_FUNC(IMGUI_LUA::PopFont,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopFont")
    REG_OBJ_FUNC(IMGUI_LUA::PushStyleColor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushStyleColor")
    REG_OBJ_FUNC(IMGUI_LUA::PopStyleColor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopStyleColor")
    REG_OBJ_FUNC(IMGUI_LUA::PushStyleVar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushStyleVar")
    REG_OBJ_FUNC(IMGUI_LUA::PopStyleVar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopStyleVar")
    REG_OBJ_FUNC(IMGUI_LUA::GetStyleColorVec4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetStyleColorVec4")
    REG_OBJ_FUNC(IMGUI_LUA::GetFont,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFont")
    REG_OBJ_FUNC(IMGUI_LUA::GetFontSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFontSize")
    REG_OBJ_FUNC(IMGUI_LUA::GetFontTexUvWhitePixel,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFontTexUvWhitePixel")
    REG_OBJ_FUNC(IMGUI_LUA::GetColorU32,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColorU32")
    REG_OBJ_FUNC(IMGUI_LUA::PushItemWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushItemWidth")
    REG_OBJ_FUNC(IMGUI_LUA::PopItemWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopItemWidth")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextItemWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextItemWidth")
    REG_OBJ_FUNC(IMGUI_LUA::CalcItemWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcItemWidth")
    REG_OBJ_FUNC(IMGUI_LUA::PushTextWrapPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushTextWrapPos")
    REG_OBJ_FUNC(IMGUI_LUA::PopTextWrapPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopTextWrapPos")
    REG_OBJ_FUNC(IMGUI_LUA::PushAllowKeyboardFocus,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushAllowKeyboardFocus")
    REG_OBJ_FUNC(IMGUI_LUA::PopAllowKeyboardFocus,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopAllowKeyboardFocus")
    REG_OBJ_FUNC(IMGUI_LUA::PushButtonRepeat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushButtonRepeat")
    REG_OBJ_FUNC(IMGUI_LUA::PopButtonRepeat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopButtonRepeat")
    REG_OBJ_FUNC(IMGUI_LUA::Separator,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Separator")
    REG_OBJ_FUNC(IMGUI_LUA::SameLine,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SameLine")
    REG_OBJ_FUNC(IMGUI_LUA::NewLine,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NewLine")
    REG_OBJ_FUNC(IMGUI_LUA::Spacing,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Spacing")
    REG_OBJ_FUNC(IMGUI_LUA::Dummy,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Dummy")
    REG_OBJ_FUNC(IMGUI_LUA::Indent,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Indent")
    REG_OBJ_FUNC(IMGUI_LUA::Unindent,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Unindent")
    REG_OBJ_FUNC(IMGUI_LUA::BeginGroup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginGroup")
    REG_OBJ_FUNC(IMGUI_LUA::EndGroup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndGroup")
    REG_OBJ_FUNC(IMGUI_LUA::GetCursorPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCursorPos")
    REG_OBJ_FUNC(IMGUI_LUA::GetCursorPosX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCursorPosX")
    REG_OBJ_FUNC(IMGUI_LUA::GetCursorPosY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCursorPosY")
    REG_OBJ_FUNC(IMGUI_LUA::SetCursorPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCursorPos")
    REG_OBJ_FUNC(IMGUI_LUA::SetCursorPosX,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCursorPosX")
    REG_OBJ_FUNC(IMGUI_LUA::SetCursorPosY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCursorPosY")
    REG_OBJ_FUNC(IMGUI_LUA::GetCursorStartPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCursorStartPos")
    REG_OBJ_FUNC(IMGUI_LUA::GetCursorScreenPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCursorScreenPos")
    REG_OBJ_FUNC(IMGUI_LUA::SetCursorScreenPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCursorScreenPos")
    REG_OBJ_FUNC(IMGUI_LUA::AlignTextToFramePadding,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::AlignTextToFramePadding")
    REG_OBJ_FUNC(IMGUI_LUA::GetTextLineHeight,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetTextLineHeight")
    REG_OBJ_FUNC(IMGUI_LUA::GetTextLineHeightWithSpacing,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetTextLineHeightWithSpacing")
    REG_OBJ_FUNC(IMGUI_LUA::GetFrameHeight,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFrameHeight")
    REG_OBJ_FUNC(IMGUI_LUA::GetFrameHeightWithSpacing,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFrameHeightWithSpacing")
    REG_OBJ_FUNC(IMGUI_LUA::PushID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushID")
    REG_OBJ_FUNC(IMGUI_LUA::PopID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopID")
    REG_OBJ_FUNC(IMGUI_LUA::GetID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetID")
    REG_OBJ_FUNC(IMGUI_LUA::TextUnformatted,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextUnformatted")
    REG_OBJ_FUNC(IMGUI_LUA::Text,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Text")
    REG_OBJ_FUNC(IMGUI_LUA::TextV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextV")
    REG_OBJ_FUNC(IMGUI_LUA::TextColored,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextColored")
    REG_OBJ_FUNC(IMGUI_LUA::TextColoredV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextColoredV")
    REG_OBJ_FUNC(IMGUI_LUA::TextDisabled,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextDisabled")
    REG_OBJ_FUNC(IMGUI_LUA::TextDisabledV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextDisabledV")
    REG_OBJ_FUNC(IMGUI_LUA::TextWrapped,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextWrapped")
    REG_OBJ_FUNC(IMGUI_LUA::TextWrappedV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextWrappedV")
    REG_OBJ_FUNC(IMGUI_LUA::LabelText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LabelText")
    REG_OBJ_FUNC(IMGUI_LUA::LabelTextV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LabelTextV")
    REG_OBJ_FUNC(IMGUI_LUA::BulletText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BulletText")
    REG_OBJ_FUNC(IMGUI_LUA::BulletTextV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BulletTextV")
    REG_OBJ_FUNC(IMGUI_LUA::Button,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Button")
    REG_OBJ_FUNC(IMGUI_LUA::SmallButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SmallButton")
    REG_OBJ_FUNC(IMGUI_LUA::InvisibleButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InvisibleButton")
    REG_OBJ_FUNC(IMGUI_LUA::ArrowButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ArrowButton")
    REG_OBJ_FUNC(IMGUI_LUA::Image,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Image")
    REG_OBJ_FUNC(IMGUI_LUA::ImageButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ImageButton")
    REG_OBJ_FUNC(IMGUI_LUA::Checkbox,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Checkbox")
    REG_OBJ_FUNC(IMGUI_LUA::CheckboxFlags,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CheckboxFlags")
    REG_OBJ_FUNC(IMGUI_LUA::RadioButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RadioButton")
    REG_OBJ_FUNC(IMGUI_LUA::ProgressBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ProgressBar")
    REG_OBJ_FUNC(IMGUI_LUA::Bullet,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Bullet")
    REG_OBJ_FUNC(IMGUI_LUA::BeginCombo,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginCombo")
    REG_OBJ_FUNC(IMGUI_LUA::EndCombo,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndCombo")
    REG_OBJ_FUNC(IMGUI_LUA::Combo,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Combo")
    REG_OBJ_FUNC(IMGUI_LUA::DragFloat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragFloat")
    REG_OBJ_FUNC(IMGUI_LUA::DragFloat2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragFloat2")
    REG_OBJ_FUNC(IMGUI_LUA::DragFloat3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragFloat3")
    REG_OBJ_FUNC(IMGUI_LUA::DragFloat4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragFloat4")
    REG_OBJ_FUNC(IMGUI_LUA::DragFloatRange2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragFloatRange2")
    REG_OBJ_FUNC(IMGUI_LUA::DragInt,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragInt")
    REG_OBJ_FUNC(IMGUI_LUA::DragInt2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragInt2")
    REG_OBJ_FUNC(IMGUI_LUA::DragInt3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragInt3")
    REG_OBJ_FUNC(IMGUI_LUA::DragInt4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragInt4")
    REG_OBJ_FUNC(IMGUI_LUA::DragIntRange2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragIntRange2")
    REG_OBJ_FUNC(IMGUI_LUA::DragScalar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragScalar")
    REG_OBJ_FUNC(IMGUI_LUA::DragScalarN,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragScalarN")
    REG_OBJ_FUNC(IMGUI_LUA::SliderFloat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderFloat")
    REG_OBJ_FUNC(IMGUI_LUA::SliderFloat2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderFloat2")
    REG_OBJ_FUNC(IMGUI_LUA::SliderFloat3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderFloat3")
    REG_OBJ_FUNC(IMGUI_LUA::SliderFloat4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderFloat4")
    REG_OBJ_FUNC(IMGUI_LUA::SliderAngle,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderAngle")
    REG_OBJ_FUNC(IMGUI_LUA::SliderInt,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderInt")
    REG_OBJ_FUNC(IMGUI_LUA::SliderInt2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderInt2")
    REG_OBJ_FUNC(IMGUI_LUA::SliderInt3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderInt3")
    REG_OBJ_FUNC(IMGUI_LUA::SliderInt4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderInt4")
    REG_OBJ_FUNC(IMGUI_LUA::SliderScalar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderScalar")
    REG_OBJ_FUNC(IMGUI_LUA::SliderScalarN,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderScalarN")
    REG_OBJ_FUNC(IMGUI_LUA::VSliderFloat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::VSliderFloat")
    REG_OBJ_FUNC(IMGUI_LUA::VSliderInt,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::VSliderInt")
    REG_OBJ_FUNC(IMGUI_LUA::VSliderScalar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::VSliderScalar")
    REG_OBJ_FUNC(IMGUI_LUA::InputText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputText")
    REG_OBJ_FUNC(IMGUI_LUA::InputTextMultiline,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputTextMultiline")
    REG_OBJ_FUNC(IMGUI_LUA::InputTextWithHint,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputTextWithHint")
    REG_OBJ_FUNC(IMGUI_LUA::InputFloat,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputFloat")
    REG_OBJ_FUNC(IMGUI_LUA::InputFloat2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputFloat2")
    REG_OBJ_FUNC(IMGUI_LUA::InputFloat3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputFloat3")
    REG_OBJ_FUNC(IMGUI_LUA::InputFloat4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputFloat4")
    REG_OBJ_FUNC(IMGUI_LUA::InputInt,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputInt")
    REG_OBJ_FUNC(IMGUI_LUA::InputInt2,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputInt2")
    REG_OBJ_FUNC(IMGUI_LUA::InputInt3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputInt3")
    REG_OBJ_FUNC(IMGUI_LUA::InputInt4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputInt4")
    REG_OBJ_FUNC(IMGUI_LUA::InputDouble,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputDouble")
    REG_OBJ_FUNC(IMGUI_LUA::InputScalar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputScalar")
    REG_OBJ_FUNC(IMGUI_LUA::InputScalarN,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputScalarN")
    REG_OBJ_FUNC(IMGUI_LUA::ColorEdit3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorEdit3")
    REG_OBJ_FUNC(IMGUI_LUA::ColorEdit4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorEdit4")
    REG_OBJ_FUNC(IMGUI_LUA::ColorPicker3,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorPicker3")
    REG_OBJ_FUNC(IMGUI_LUA::ColorPicker4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorPicker4")
    REG_OBJ_FUNC(IMGUI_LUA::ColorButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorButton")
    REG_OBJ_FUNC(IMGUI_LUA::SetColorEditOptions,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetColorEditOptions")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNode")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNodeV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNodeV")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNodeEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNodeEx")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNodeExV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNodeExV")
    REG_OBJ_FUNC(IMGUI_LUA::TreePush,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreePush")
    REG_OBJ_FUNC(IMGUI_LUA::TreePop,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreePop")
    REG_OBJ_FUNC(IMGUI_LUA::GetTreeNodeToLabelSpacing,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetTreeNodeToLabelSpacing")
    REG_OBJ_FUNC(IMGUI_LUA::CollapsingHeader,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CollapsingHeader")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextItemOpen,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextItemOpen")
    REG_OBJ_FUNC(IMGUI_LUA::Selectable,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Selectable")
    REG_OBJ_FUNC(IMGUI_LUA::ListBox,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ListBox")
    REG_OBJ_FUNC(IMGUI_LUA::ListBoxHeader,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ListBoxHeader")
    REG_OBJ_FUNC(IMGUI_LUA::ListBoxFooter,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ListBoxFooter")
    REG_OBJ_FUNC(IMGUI_LUA::PlotLines,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PlotLines")
    REG_OBJ_FUNC(IMGUI_LUA::PlotHistogram,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PlotHistogram")
    REG_OBJ_FUNC(IMGUI_LUA::Value,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Value")
    REG_OBJ_FUNC(IMGUI_LUA::BeginMenuBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginMenuBar")
    REG_OBJ_FUNC(IMGUI_LUA::EndMenuBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndMenuBar")
    REG_OBJ_FUNC(IMGUI_LUA::BeginMainMenuBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginMainMenuBar")
    REG_OBJ_FUNC(IMGUI_LUA::EndMainMenuBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndMainMenuBar")
    REG_OBJ_FUNC(IMGUI_LUA::BeginMenu,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginMenu")
    REG_OBJ_FUNC(IMGUI_LUA::EndMenu,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndMenu")
    REG_OBJ_FUNC(IMGUI_LUA::MenuItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::MenuItem")
    REG_OBJ_FUNC(IMGUI_LUA::BeginTooltip,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginTooltip")
    REG_OBJ_FUNC(IMGUI_LUA::EndTooltip,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndTooltip")
    REG_OBJ_FUNC(IMGUI_LUA::SetTooltip,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetTooltip")
    REG_OBJ_FUNC(IMGUI_LUA::SetTooltipV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetTooltipV")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopup")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopupModal,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopupModal")
    REG_OBJ_FUNC(IMGUI_LUA::EndPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndPopup")
    REG_OBJ_FUNC(IMGUI_LUA::OpenPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::OpenPopup")
    REG_OBJ_FUNC(IMGUI_LUA::OpenPopupOnItemClick,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::OpenPopupOnItemClick")
    REG_OBJ_FUNC(IMGUI_LUA::CloseCurrentPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CloseCurrentPopup")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopupContextItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopupContextItem")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopupContextWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopupContextWindow")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopupContextVoid,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopupContextVoid")
    REG_OBJ_FUNC(IMGUI_LUA::IsPopupOpen,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsPopupOpen")
    REG_OBJ_FUNC(IMGUI_LUA::Columns,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Columns")
    REG_OBJ_FUNC(IMGUI_LUA::NextColumn,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NextColumn")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnIndex,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnIndex")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnWidth")
    REG_OBJ_FUNC(IMGUI_LUA::SetColumnWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetColumnWidth")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnOffset,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnOffset")
    REG_OBJ_FUNC(IMGUI_LUA::SetColumnOffset,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetColumnOffset")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnsCount,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnsCount")
    REG_OBJ_FUNC(IMGUI_LUA::BeginTabBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginTabBar")
    REG_OBJ_FUNC(IMGUI_LUA::EndTabBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndTabBar")
    REG_OBJ_FUNC(IMGUI_LUA::BeginTabItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginTabItem")
    REG_OBJ_FUNC(IMGUI_LUA::EndTabItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndTabItem")
    REG_OBJ_FUNC(IMGUI_LUA::TabItemButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabItemButton")
    REG_OBJ_FUNC(IMGUI_LUA::SetTabItemClosed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetTabItemClosed")
    REG_OBJ_FUNC(IMGUI_LUA::DockSpace,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockSpace")
    REG_OBJ_FUNC(IMGUI_LUA::DockSpaceOverViewport,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockSpaceOverViewport")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowDockID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowDockID")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowClass,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowClass")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowDockID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowDockID")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowDocked,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowDocked")
    REG_OBJ_FUNC(IMGUI_LUA::LogToTTY,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogToTTY")
    REG_OBJ_FUNC(IMGUI_LUA::LogToFile,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogToFile")
    REG_OBJ_FUNC(IMGUI_LUA::LogToClipboard,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogToClipboard")
    REG_OBJ_FUNC(IMGUI_LUA::LogFinish,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogFinish")
    REG_OBJ_FUNC(IMGUI_LUA::LogButtons,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogButtons")
    REG_OBJ_FUNC(IMGUI_LUA::LogText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogText")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDragDropSource,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDragDropSource")
    REG_OBJ_FUNC(IMGUI_LUA::SetDragDropPayload,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetDragDropPayload")
    REG_OBJ_FUNC(IMGUI_LUA::EndDragDropSource,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndDragDropSource")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDragDropTarget,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDragDropTarget")
    REG_OBJ_FUNC(IMGUI_LUA::AcceptDragDropPayload,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::AcceptDragDropPayload")
    REG_OBJ_FUNC(IMGUI_LUA::EndDragDropTarget,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndDragDropTarget")
    REG_OBJ_FUNC(IMGUI_LUA::GetDragDropPayload,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetDragDropPayload")
    REG_OBJ_FUNC(IMGUI_LUA::PushClipRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushClipRect")
    REG_OBJ_FUNC(IMGUI_LUA::PopClipRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopClipRect")
    REG_OBJ_FUNC(IMGUI_LUA::SetItemDefaultFocus,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetItemDefaultFocus")
    REG_OBJ_FUNC(IMGUI_LUA::SetKeyboardFocusHere,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetKeyboardFocusHere")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemHovered,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemHovered")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemActive,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemActive")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemFocused,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemFocused")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemClicked,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemClicked")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemVisible,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemVisible")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemEdited,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemEdited")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemActivated,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemActivated")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemDeactivated,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemDeactivated")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemDeactivatedAfterEdit,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemDeactivatedAfterEdit")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemToggledOpen,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemToggledOpen")
    REG_OBJ_FUNC(IMGUI_LUA::IsAnyItemHovered,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsAnyItemHovered")
    REG_OBJ_FUNC(IMGUI_LUA::IsAnyItemActive,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsAnyItemActive")
    REG_OBJ_FUNC(IMGUI_LUA::IsAnyItemFocused,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsAnyItemFocused")
    REG_OBJ_FUNC(IMGUI_LUA::GetItemRectMin,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetItemRectMin")
    REG_OBJ_FUNC(IMGUI_LUA::GetItemRectMax,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetItemRectMax")
    REG_OBJ_FUNC(IMGUI_LUA::GetItemRectSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetItemRectSize")
    REG_OBJ_FUNC(IMGUI_LUA::SetItemAllowOverlap,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetItemAllowOverlap")
    REG_OBJ_FUNC(IMGUI_LUA::IsRectVisible,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsRectVisible")
    REG_OBJ_FUNC(IMGUI_LUA::GetTime,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetTime")
    REG_OBJ_FUNC(IMGUI_LUA::GetFrameCount,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFrameCount")
    REG_OBJ_FUNC(IMGUI_LUA::GetBackgroundDrawList,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetBackgroundDrawList")
    REG_OBJ_FUNC(IMGUI_LUA::GetForegroundDrawList,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetForegroundDrawList")
    REG_OBJ_FUNC(IMGUI_LUA::GetDrawListSharedData,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetDrawListSharedData")
    REG_OBJ_FUNC(IMGUI_LUA::GetStyleColorName,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetStyleColorName")
    REG_OBJ_FUNC(IMGUI_LUA::SetStateStorage,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetStateStorage")
    REG_OBJ_FUNC(IMGUI_LUA::GetStateStorage,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetStateStorage")
    REG_OBJ_FUNC(IMGUI_LUA::CalcListClipping,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcListClipping")
    REG_OBJ_FUNC(IMGUI_LUA::BeginChildFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginChildFrame")
    REG_OBJ_FUNC(IMGUI_LUA::EndChildFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndChildFrame")
    REG_OBJ_FUNC(IMGUI_LUA::CalcTextSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcTextSize")
    REG_OBJ_FUNC(IMGUI_LUA::ColorConvertU32ToFloat4,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorConvertU32ToFloat4")
    REG_OBJ_FUNC(IMGUI_LUA::ColorConvertFloat4ToU32,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorConvertFloat4ToU32")
    REG_OBJ_FUNC(IMGUI_LUA::ColorConvertRGBtoHSV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorConvertRGBtoHSV")
    REG_OBJ_FUNC(IMGUI_LUA::ColorConvertHSVtoRGB,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorConvertHSVtoRGB")
    REG_OBJ_FUNC(IMGUI_LUA::GetKeyIndex,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetKeyIndex")
    REG_OBJ_FUNC(IMGUI_LUA::IsKeyDown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsKeyDown")
    REG_OBJ_FUNC(IMGUI_LUA::IsKeyPressed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsKeyPressed")
    REG_OBJ_FUNC(IMGUI_LUA::IsKeyReleased,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsKeyReleased")
    REG_OBJ_FUNC(IMGUI_LUA::GetKeyPressedAmount,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetKeyPressedAmount")
    REG_OBJ_FUNC(IMGUI_LUA::CaptureKeyboardFromApp,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CaptureKeyboardFromApp")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseDown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseDown")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseClicked,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseClicked")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseReleased,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseReleased")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseDoubleClicked,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseDoubleClicked")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseHoveringRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseHoveringRect")
    REG_OBJ_FUNC(IMGUI_LUA::IsMousePosValid,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMousePosValid")
    REG_OBJ_FUNC(IMGUI_LUA::IsAnyMouseDown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsAnyMouseDown")
    REG_OBJ_FUNC(IMGUI_LUA::GetMousePos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMousePos")
    REG_OBJ_FUNC(IMGUI_LUA::GetMousePosOnOpeningCurrentPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMousePosOnOpeningCurrentPopup")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseDragging,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseDragging")
    REG_OBJ_FUNC(IMGUI_LUA::GetMouseDragDelta,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMouseDragDelta")
    REG_OBJ_FUNC(IMGUI_LUA::ResetMouseDragDelta,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ResetMouseDragDelta")
    REG_OBJ_FUNC(IMGUI_LUA::GetMouseCursor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMouseCursor")
    REG_OBJ_FUNC(IMGUI_LUA::SetMouseCursor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetMouseCursor")
    REG_OBJ_FUNC(IMGUI_LUA::CaptureMouseFromApp,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CaptureMouseFromApp")
    REG_OBJ_FUNC(IMGUI_LUA::GetClipboardText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetClipboardText")
    REG_OBJ_FUNC(IMGUI_LUA::SetClipboardText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetClipboardText")
    REG_OBJ_FUNC(IMGUI_LUA::LoadIniSettingsFromDisk,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LoadIniSettingsFromDisk")
    REG_OBJ_FUNC(IMGUI_LUA::LoadIniSettingsFromMemory,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LoadIniSettingsFromMemory")
    REG_OBJ_FUNC(IMGUI_LUA::SaveIniSettingsToDisk,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SaveIniSettingsToDisk")
    REG_OBJ_FUNC(IMGUI_LUA::SaveIniSettingsToMemory,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SaveIniSettingsToMemory")
    REG_OBJ_FUNC(IMGUI_LUA::DebugCheckVersionAndDataLayout,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DebugCheckVersionAndDataLayout")
    REG_OBJ_FUNC(IMGUI_LUA::SetAllocatorFunctions,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetAllocatorFunctions")
    REG_OBJ_FUNC(IMGUI_LUA::MemAlloc,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::MemAlloc")
    REG_OBJ_FUNC(IMGUI_LUA::MemFree,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::MemFree")
    REG_OBJ_FUNC(IMGUI_LUA::GetPlatformIO,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetPlatformIO")
    REG_OBJ_FUNC(IMGUI_LUA::GetMainViewport,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMainViewport")
    REG_OBJ_FUNC(IMGUI_LUA::UpdatePlatformWindows,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::UpdatePlatformWindows")
    REG_OBJ_FUNC(IMGUI_LUA::RenderPlatformWindowsDefault,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderPlatformWindowsDefault")
    REG_OBJ_FUNC(IMGUI_LUA::DestroyPlatformWindows,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DestroyPlatformWindows")
    REG_OBJ_FUNC(IMGUI_LUA::FindViewportByID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindViewportByID")
    REG_OBJ_FUNC(IMGUI_LUA::FindViewportByPlatformHandle,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindViewportByPlatformHandle")
    REG_OBJ_FUNC(IMGUI_LUA::OpenPopupContextItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::OpenPopupContextItem")
    REG_OBJ_FUNC(IMGUI_LUA::TreeAdvanceToLabelPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeAdvanceToLabelPos")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextTreeNodeOpen,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextTreeNodeOpen")
    REG_OBJ_FUNC(IMGUI_LUA::GetContentRegionAvailWidth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetContentRegionAvailWidth")
    REG_OBJ_FUNC(IMGUI_LUA::GetOverlayDrawList,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetOverlayDrawList")
    REG_OBJ_FUNC(IMGUI_LUA::SetScrollHere,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetScrollHere")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemDeactivatedAfterChange,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemDeactivatedAfterChange")
    REG_OBJ_FUNC(IMGUI_LUA::GetCurrentWindowRead,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCurrentWindowRead")
    REG_OBJ_FUNC(IMGUI_LUA::GetCurrentWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetCurrentWindow")
    REG_OBJ_FUNC(IMGUI_LUA::FindWindowByID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindWindowByID")
    REG_OBJ_FUNC(IMGUI_LUA::FindWindowByName,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindWindowByName")
    REG_OBJ_FUNC(IMGUI_LUA::UpdateWindowParentAndRootLinks,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::UpdateWindowParentAndRootLinks")
    REG_OBJ_FUNC(IMGUI_LUA::CalcWindowExpectedSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcWindowExpectedSize")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowChildOf,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowChildOf")
    REG_OBJ_FUNC(IMGUI_LUA::IsWindowNavFocusable,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsWindowNavFocusable")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowAllowedExtentRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowAllowedExtentRect")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowHitTestHole,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowHitTestHole")
    REG_OBJ_FUNC(IMGUI_LUA::FocusWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FocusWindow")
    REG_OBJ_FUNC(IMGUI_LUA::FocusTopMostWindowUnderOne,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FocusTopMostWindowUnderOne")
    REG_OBJ_FUNC(IMGUI_LUA::BringWindowToFocusFront,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BringWindowToFocusFront")
    REG_OBJ_FUNC(IMGUI_LUA::BringWindowToDisplayFront,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BringWindowToDisplayFront")
    REG_OBJ_FUNC(IMGUI_LUA::BringWindowToDisplayBack,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BringWindowToDisplayBack")
    REG_OBJ_FUNC(IMGUI_LUA::SetCurrentFont,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetCurrentFont")
    REG_OBJ_FUNC(IMGUI_LUA::GetDefaultFont,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetDefaultFont")
    REG_OBJ_FUNC(IMGUI_LUA::Initialize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Initialize")
    REG_OBJ_FUNC(IMGUI_LUA::Shutdown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Shutdown")
    REG_OBJ_FUNC(IMGUI_LUA::UpdateHoveredWindowAndCaptureFlags,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::UpdateHoveredWindowAndCaptureFlags")
    REG_OBJ_FUNC(IMGUI_LUA::StartMouseMovingWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::StartMouseMovingWindow")
    REG_OBJ_FUNC(IMGUI_LUA::StartMouseMovingWindowOrNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::StartMouseMovingWindowOrNode")
    REG_OBJ_FUNC(IMGUI_LUA::UpdateMouseMovingWindowNewFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::UpdateMouseMovingWindowNewFrame")
    REG_OBJ_FUNC(IMGUI_LUA::UpdateMouseMovingWindowEndFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::UpdateMouseMovingWindowEndFrame")
    REG_OBJ_FUNC(IMGUI_LUA::AddContextHook,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::AddContextHook")
    REG_OBJ_FUNC(IMGUI_LUA::CallContextHooks,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CallContextHooks")
    REG_OBJ_FUNC(IMGUI_LUA::TranslateWindowsInViewport,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TranslateWindowsInViewport")
    REG_OBJ_FUNC(IMGUI_LUA::ScaleWindowsInViewport,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ScaleWindowsInViewport")
    REG_OBJ_FUNC(IMGUI_LUA::DestroyPlatformWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DestroyPlatformWindow")
    REG_OBJ_FUNC(IMGUI_LUA::ShowViewportThumbnails,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShowViewportThumbnails")
    REG_OBJ_FUNC(IMGUI_LUA::MarkIniSettingsDirty,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::MarkIniSettingsDirty")
    REG_OBJ_FUNC(IMGUI_LUA::ClearIniSettings,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ClearIniSettings")
    REG_OBJ_FUNC(IMGUI_LUA::CreateNewWindowSettings,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CreateNewWindowSettings")
    REG_OBJ_FUNC(IMGUI_LUA::FindWindowSettings,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindWindowSettings")
    REG_OBJ_FUNC(IMGUI_LUA::FindOrCreateWindowSettings,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindOrCreateWindowSettings")
    REG_OBJ_FUNC(IMGUI_LUA::FindSettingsHandler,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindSettingsHandler")
    REG_OBJ_FUNC(IMGUI_LUA::SetNextWindowScroll,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNextWindowScroll")
    REG_OBJ_FUNC(IMGUI_LUA::ScrollToBringRectIntoView,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ScrollToBringRectIntoView")
    REG_OBJ_FUNC(IMGUI_LUA::GetItemID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetItemID")
    REG_OBJ_FUNC(IMGUI_LUA::GetItemStatusFlags,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetItemStatusFlags")
    REG_OBJ_FUNC(IMGUI_LUA::GetActiveID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetActiveID")
    REG_OBJ_FUNC(IMGUI_LUA::GetFocusID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFocusID")
    REG_OBJ_FUNC(IMGUI_LUA::SetActiveID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetActiveID")
    REG_OBJ_FUNC(IMGUI_LUA::SetFocusID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetFocusID")
    REG_OBJ_FUNC(IMGUI_LUA::ClearActiveID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ClearActiveID")
    REG_OBJ_FUNC(IMGUI_LUA::GetHoveredID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetHoveredID")
    REG_OBJ_FUNC(IMGUI_LUA::SetHoveredID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetHoveredID")
    REG_OBJ_FUNC(IMGUI_LUA::KeepAliveID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::KeepAliveID")
    REG_OBJ_FUNC(IMGUI_LUA::MarkItemEdited,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::MarkItemEdited")
    REG_OBJ_FUNC(IMGUI_LUA::PushOverrideID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushOverrideID")
    REG_OBJ_FUNC(IMGUI_LUA::GetIDWithSeed,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetIDWithSeed")
    REG_OBJ_FUNC(IMGUI_LUA::ItemSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ItemSize")
    REG_OBJ_FUNC(IMGUI_LUA::ItemAdd,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ItemAdd")
    REG_OBJ_FUNC(IMGUI_LUA::ItemHoverable,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ItemHoverable")
    REG_OBJ_FUNC(IMGUI_LUA::IsClippedEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsClippedEx")
    REG_OBJ_FUNC(IMGUI_LUA::SetLastItemData,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetLastItemData")
    REG_OBJ_FUNC(IMGUI_LUA::FocusableItemRegister,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FocusableItemRegister")
    REG_OBJ_FUNC(IMGUI_LUA::FocusableItemUnregister,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FocusableItemUnregister")
    REG_OBJ_FUNC(IMGUI_LUA::CalcItemSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcItemSize")
    REG_OBJ_FUNC(IMGUI_LUA::CalcWrapWidthForPos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcWrapWidthForPos")
    REG_OBJ_FUNC(IMGUI_LUA::PushMultiItemsWidths,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushMultiItemsWidths")
    REG_OBJ_FUNC(IMGUI_LUA::PushItemFlag,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushItemFlag")
    REG_OBJ_FUNC(IMGUI_LUA::PopItemFlag,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopItemFlag")
    REG_OBJ_FUNC(IMGUI_LUA::IsItemToggledSelection,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsItemToggledSelection")
    REG_OBJ_FUNC(IMGUI_LUA::GetContentRegionMaxAbs,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetContentRegionMaxAbs")
    REG_OBJ_FUNC(IMGUI_LUA::ShrinkWidths,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShrinkWidths")
    REG_OBJ_FUNC(IMGUI_LUA::LogBegin,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogBegin")
    REG_OBJ_FUNC(IMGUI_LUA::LogToBuffer,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogToBuffer")
    REG_OBJ_FUNC(IMGUI_LUA::BeginChildEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginChildEx")
    REG_OBJ_FUNC(IMGUI_LUA::OpenPopupEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::OpenPopupEx")
    REG_OBJ_FUNC(IMGUI_LUA::ClosePopupToLevel,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ClosePopupToLevel")
    REG_OBJ_FUNC(IMGUI_LUA::ClosePopupsOverWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ClosePopupsOverWindow")
    REG_OBJ_FUNC(IMGUI_LUA::BeginPopupEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginPopupEx")
    REG_OBJ_FUNC(IMGUI_LUA::BeginTooltipEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginTooltipEx")
    REG_OBJ_FUNC(IMGUI_LUA::GetTopMostPopupModal,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetTopMostPopupModal")
    REG_OBJ_FUNC(IMGUI_LUA::FindBestWindowPosForPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindBestWindowPosForPopup")
    REG_OBJ_FUNC(IMGUI_LUA::FindBestWindowPosForPopupEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindBestWindowPosForPopupEx")
    REG_OBJ_FUNC(IMGUI_LUA::NavInitWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NavInitWindow")
    REG_OBJ_FUNC(IMGUI_LUA::NavMoveRequestButNoResultYet,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NavMoveRequestButNoResultYet")
    REG_OBJ_FUNC(IMGUI_LUA::NavMoveRequestCancel,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NavMoveRequestCancel")
    REG_OBJ_FUNC(IMGUI_LUA::NavMoveRequestForward,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NavMoveRequestForward")
    REG_OBJ_FUNC(IMGUI_LUA::NavMoveRequestTryWrapping,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::NavMoveRequestTryWrapping")
    REG_OBJ_FUNC(IMGUI_LUA::GetNavInputAmount,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetNavInputAmount")
    REG_OBJ_FUNC(IMGUI_LUA::GetNavInputAmount2d,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetNavInputAmount2d")
    REG_OBJ_FUNC(IMGUI_LUA::CalcTypematicRepeatAmount,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CalcTypematicRepeatAmount")
    REG_OBJ_FUNC(IMGUI_LUA::ActivateItem,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ActivateItem")
    REG_OBJ_FUNC(IMGUI_LUA::SetNavID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNavID")
    REG_OBJ_FUNC(IMGUI_LUA::SetNavIDWithRectRel,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetNavIDWithRectRel")
    REG_OBJ_FUNC(IMGUI_LUA::PushFocusScope,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushFocusScope")
    REG_OBJ_FUNC(IMGUI_LUA::PopFocusScope,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopFocusScope")
    REG_OBJ_FUNC(IMGUI_LUA::GetFocusScopeID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetFocusScopeID")
    REG_OBJ_FUNC(IMGUI_LUA::IsActiveIdUsingNavDir,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsActiveIdUsingNavDir")
    REG_OBJ_FUNC(IMGUI_LUA::IsActiveIdUsingNavInput,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsActiveIdUsingNavInput")
    REG_OBJ_FUNC(IMGUI_LUA::IsActiveIdUsingKey,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsActiveIdUsingKey")
    REG_OBJ_FUNC(IMGUI_LUA::IsMouseDragPastThreshold,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsMouseDragPastThreshold")
    REG_OBJ_FUNC(IMGUI_LUA::IsKeyPressedMap,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsKeyPressedMap")
    REG_OBJ_FUNC(IMGUI_LUA::IsNavInputDown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsNavInputDown")
    REG_OBJ_FUNC(IMGUI_LUA::IsNavInputTest,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsNavInputTest")
    REG_OBJ_FUNC(IMGUI_LUA::GetMergedKeyModFlags,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetMergedKeyModFlags")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextInitialize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextInitialize")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextShutdown,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextShutdown")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextClearNodes,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextClearNodes")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextRebuildNodes,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextRebuildNodes")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextUpdateUndocking,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextUpdateUndocking")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextUpdateDocking,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextUpdateDocking")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextGenNodeID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextGenNodeID")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextQueueDock,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextQueueDock")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextQueueUndockWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextQueueUndockWindow")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextQueueUndockNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextQueueUndockNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockContextCalcDropPosForDocking,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockContextCalcDropPosForDocking")
    REG_OBJ_FUNC(IMGUI_LUA::DockNodeBeginAmendTabBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockNodeBeginAmendTabBar")
    REG_OBJ_FUNC(IMGUI_LUA::DockNodeEndAmendTabBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockNodeEndAmendTabBar")
    REG_OBJ_FUNC(IMGUI_LUA::DockNodeGetRootNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockNodeGetRootNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockNodeGetDepth,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockNodeGetDepth")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowDockNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowDockNode")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowAlwaysWantOwnTabBar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowAlwaysWantOwnTabBar")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDocked,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDocked")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDockableDragDropSource,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDockableDragDropSource")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDockableDragDropTarget,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDockableDragDropTarget")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowDock,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowDock")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderDockWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderDockWindow")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderGetCentralNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderGetCentralNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderAddNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderAddNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderRemoveNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderRemoveNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderRemoveNodeDockedWindows,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderRemoveNodeDockedWindows")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderRemoveNodeChildNodes,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderRemoveNodeChildNodes")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderSetNodePos,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderSetNodePos")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderSetNodeSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderSetNodeSize")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderSplitNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderSplitNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderCopyDockSpace,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderCopyDockSpace")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderCopyNode,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderCopyNode")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderCopyWindowSettings,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderCopyWindowSettings")
    REG_OBJ_FUNC(IMGUI_LUA::DockBuilderFinish,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DockBuilderFinish")
    REG_OBJ_FUNC(IMGUI_LUA::BeginDragDropTargetCustom,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginDragDropTargetCustom")
    REG_OBJ_FUNC(IMGUI_LUA::ClearDragDrop,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ClearDragDrop")
    REG_OBJ_FUNC(IMGUI_LUA::IsDragDropPayloadBeingAccepted,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::IsDragDropPayloadBeingAccepted")
    REG_OBJ_FUNC(IMGUI_LUA::SetWindowClipRectBeforeSetChannel,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SetWindowClipRectBeforeSetChannel")
    REG_OBJ_FUNC(IMGUI_LUA::BeginColumns,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginColumns")
    REG_OBJ_FUNC(IMGUI_LUA::EndColumns,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::EndColumns")
    REG_OBJ_FUNC(IMGUI_LUA::PushColumnClipRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushColumnClipRect")
    REG_OBJ_FUNC(IMGUI_LUA::PushColumnsBackground,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PushColumnsBackground")
    REG_OBJ_FUNC(IMGUI_LUA::PopColumnsBackground,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PopColumnsBackground")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnsID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnsID")
    REG_OBJ_FUNC(IMGUI_LUA::FindOrCreateColumns,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindOrCreateColumns")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnOffsetFromNorm,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnOffsetFromNorm")
    REG_OBJ_FUNC(IMGUI_LUA::GetColumnNormFromOffset,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetColumnNormFromOffset")
    REG_OBJ_FUNC(IMGUI_LUA::BeginTabBarEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::BeginTabBarEx")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarFindTabByID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarFindTabByID")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarFindMostRecentlySelectedTabForActiveWindow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarFindMostRecentlySelectedTabForActiveWindow")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarAddTab,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarAddTab")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarRemoveTab,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarRemoveTab")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarCloseTab,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarCloseTab")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarQueueReorder,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarQueueReorder")
    REG_OBJ_FUNC(IMGUI_LUA::TabBarProcessReorder,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabBarProcessReorder")
    REG_OBJ_FUNC(IMGUI_LUA::TabItemEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabItemEx")
    REG_OBJ_FUNC(IMGUI_LUA::TabItemCalcSize,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabItemCalcSize")
    REG_OBJ_FUNC(IMGUI_LUA::TabItemBackground,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabItemBackground")
    REG_OBJ_FUNC(IMGUI_LUA::TabItemLabelAndCloseButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TabItemLabelAndCloseButton")
    REG_OBJ_FUNC(IMGUI_LUA::RenderText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderText")
    REG_OBJ_FUNC(IMGUI_LUA::RenderTextWrapped,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderTextWrapped")
    REG_OBJ_FUNC(IMGUI_LUA::RenderTextClipped,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderTextClipped")
    REG_OBJ_FUNC(IMGUI_LUA::RenderTextClippedEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderTextClippedEx")
    REG_OBJ_FUNC(IMGUI_LUA::RenderTextEllipsis,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderTextEllipsis")
    REG_OBJ_FUNC(IMGUI_LUA::RenderFrame,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderFrame")
    REG_OBJ_FUNC(IMGUI_LUA::RenderFrameBorder,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderFrameBorder")
    REG_OBJ_FUNC(IMGUI_LUA::RenderColorRectWithAlphaCheckerboard,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderColorRectWithAlphaCheckerboard")
    REG_OBJ_FUNC(IMGUI_LUA::RenderNavHighlight,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderNavHighlight")
    REG_OBJ_FUNC(IMGUI_LUA::FindRenderedTextEnd,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::FindRenderedTextEnd")
    REG_OBJ_FUNC(IMGUI_LUA::LogRenderedText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::LogRenderedText")
    REG_OBJ_FUNC(IMGUI_LUA::RenderArrow,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderArrow")
    REG_OBJ_FUNC(IMGUI_LUA::RenderBullet,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderBullet")
    REG_OBJ_FUNC(IMGUI_LUA::RenderCheckMark,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderCheckMark")
    REG_OBJ_FUNC(IMGUI_LUA::RenderMouseCursor,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderMouseCursor")
    REG_OBJ_FUNC(IMGUI_LUA::RenderArrowPointingAt,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderArrowPointingAt")
    REG_OBJ_FUNC(IMGUI_LUA::RenderArrowDockMenu,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderArrowDockMenu")
    REG_OBJ_FUNC(IMGUI_LUA::RenderRectFilledRangeH,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderRectFilledRangeH")
    REG_OBJ_FUNC(IMGUI_LUA::RenderRectFilledWithHole,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RenderRectFilledWithHole")
    REG_OBJ_FUNC(IMGUI_LUA::TextEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TextEx")
    REG_OBJ_FUNC(IMGUI_LUA::ButtonEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ButtonEx")
    REG_OBJ_FUNC(IMGUI_LUA::CloseButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CloseButton")
    REG_OBJ_FUNC(IMGUI_LUA::CollapseButton,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::CollapseButton")
    REG_OBJ_FUNC(IMGUI_LUA::ArrowButtonEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ArrowButtonEx")
    REG_OBJ_FUNC(IMGUI_LUA::Scrollbar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::Scrollbar")
    REG_OBJ_FUNC(IMGUI_LUA::ScrollbarEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ScrollbarEx")
    REG_OBJ_FUNC(IMGUI_LUA::ImageButtonEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ImageButtonEx")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowScrollbarRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowScrollbarRect")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowScrollbarID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowScrollbarID")
    REG_OBJ_FUNC(IMGUI_LUA::GetWindowResizeID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetWindowResizeID")
    REG_OBJ_FUNC(IMGUI_LUA::SeparatorEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SeparatorEx")
    REG_OBJ_FUNC(IMGUI_LUA::ButtonBehavior,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ButtonBehavior")
    REG_OBJ_FUNC(IMGUI_LUA::DragBehavior,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragBehavior")
    REG_OBJ_FUNC(IMGUI_LUA::SliderBehavior,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderBehavior")
    REG_OBJ_FUNC(IMGUI_LUA::SplitterBehavior,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SplitterBehavior")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNodeBehavior,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNodeBehavior")
    REG_OBJ_FUNC(IMGUI_LUA::TreeNodeBehaviorIsOpen,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreeNodeBehaviorIsOpen")
    REG_OBJ_FUNC(IMGUI_LUA::TreePushOverrideID,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TreePushOverrideID")
    REG_OBJ_FUNC(IMGUI_LUA::ScaleRatioFromValueT,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ScaleRatioFromValueT")
    REG_OBJ_FUNC(IMGUI_LUA::ScaleValueFromRatioT,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ScaleValueFromRatioT")
    REG_OBJ_FUNC(IMGUI_LUA::DragBehaviorT,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DragBehaviorT")
    REG_OBJ_FUNC(IMGUI_LUA::SliderBehaviorT,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::SliderBehaviorT")
    REG_OBJ_FUNC(IMGUI_LUA::RoundScalarWithFormatT,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::RoundScalarWithFormatT")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeGetInfo,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeGetInfo")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeFormatString,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeFormatString")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeApplyOp,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeApplyOp")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeApplyOpFromText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeApplyOpFromText")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeCompare,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeCompare")
    REG_OBJ_FUNC(IMGUI_LUA::DataTypeClamp,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DataTypeClamp")
    REG_OBJ_FUNC(IMGUI_LUA::InputTextEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::InputTextEx")
    REG_OBJ_FUNC(IMGUI_LUA::TempInputText,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TempInputText")
    REG_OBJ_FUNC(IMGUI_LUA::TempInputScalar,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TempInputScalar")
    REG_OBJ_FUNC(IMGUI_LUA::TempInputIsActive,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::TempInputIsActive")
    REG_OBJ_FUNC(IMGUI_LUA::GetInputTextState,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GetInputTextState")
    REG_OBJ_FUNC(IMGUI_LUA::ColorTooltip,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorTooltip")
    REG_OBJ_FUNC(IMGUI_LUA::ColorEditOptionsPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorEditOptionsPopup")
    REG_OBJ_FUNC(IMGUI_LUA::ColorPickerOptionsPopup,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ColorPickerOptionsPopup")
    REG_OBJ_FUNC(IMGUI_LUA::PlotEx,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::PlotEx")
    REG_OBJ_FUNC(IMGUI_LUA::ShadeVertsLinearColorGradientKeepAlpha,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShadeVertsLinearColorGradientKeepAlpha")
    REG_OBJ_FUNC(IMGUI_LUA::ShadeVertsLinearUV,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::ShadeVertsLinearUV")
    REG_OBJ_FUNC(IMGUI_LUA::GcCompactTransientWindowBuffers,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GcCompactTransientWindowBuffers")
    REG_OBJ_FUNC(IMGUI_LUA::GcAwakeTransientWindowBuffers,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::GcAwakeTransientWindowBuffers")
    REG_OBJ_FUNC(IMGUI_LUA::DebugDrawItemRect,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DebugDrawItemRect")
    REG_OBJ_FUNC(IMGUI_LUA::DebugStartItemPicker,IMGUI_LUA::getInstance(),IMGUI_LUA::,"IMGUI_LUA::DebugStartItemPicker")

}

private:
    static IMGUI_LUA* __instance;
    IMGUI_LUA(){};
    
};

#endif /* IMGUI_LUA_H */
	