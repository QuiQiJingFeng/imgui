%module imgui

%{
#include "imgui.h"
%}

/* Let's just grab the original header file here */
%include "imgui.h"

%{
#include "imgui_internal.h"
%}

/* Let's just grab the original header file here */
%include "imgui_internal.h"

%{
#include "Bool.h"
%}

/* Let's just grab the original header file here */
%include "Bool.h"