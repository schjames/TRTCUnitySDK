﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[19] = 
{
	{ 5105, 0,  4 } /*tableIndex: 0 */,
	{ 3452, 1,  4 } /*tableIndex: 1 */,
	{ 3452, 2,  5 } /*tableIndex: 2 */,
	{ 2453, 3,  6 } /*tableIndex: 3 */,
	{ 3452, 4,  7 } /*tableIndex: 4 */,
	{ 5105, 5,  7 } /*tableIndex: 5 */,
	{ 4149, 6,  7 } /*tableIndex: 6 */,
	{ 4136, 7,  7 } /*tableIndex: 7 */,
	{ 4425, 8,  7 } /*tableIndex: 8 */,
	{ 4425, 9,  7 } /*tableIndex: 9 */,
	{ 3101, 10,  7 } /*tableIndex: 10 */,
	{ 3101, 11,  7 } /*tableIndex: 11 */,
	{ 3452, 12,  8 } /*tableIndex: 12 */,
	{ 4425, 13,  8 } /*tableIndex: 13 */,
	{ 4425, 14,  8 } /*tableIndex: 14 */,
	{ 5095, 15,  8 } /*tableIndex: 15 */,
	{ 3452, 2,  9 } /*tableIndex: 16 */,
	{ 2362, 16,  10 } /*tableIndex: 17 */,
	{ 2362, 17,  10 } /*tableIndex: 18 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[18] = 
{
	"mousePosition",
	"camerasCount",
	"hitIndex",
	"camera",
	"displayIndex",
	"eventPosition",
	"rect",
	"screenProjectionRay",
	"projectionDirection",
	"distanceToClipPlane",
	"hit3D",
	"hit2D",
	"eventDisplayIndex",
	"w",
	"h",
	"pos",
	"mouseDownThisFrame",
	"mousePressed",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[36] = 
{
	{ 0, 0 } /* 0x06000001 System.Int32 UnityEngine.Touch::get_fingerId() */,
	{ 0, 0 } /* 0x06000002 UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 0, 0 } /* 0x06000003 UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.TouchType UnityEngine.Touch::get_type() */,
	{ 0, 0 } /* 0x06000005 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000007 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000008 UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Single UnityEngine.Input::GetAxisRaw(System.String) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.Input::GetButtonDown(System.String) */,
	{ 0, 0 } /* 0x0600000B System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0 } /* 0x0600000C System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0 } /* 0x0600000D System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0 } /* 0x0600000F UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0 } /* 0x06000010 UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta() */,
	{ 0, 0 } /* 0x06000011 UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode() */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode) */,
	{ 0, 0 } /* 0x06000013 System.String UnityEngine.Input::get_compositionString() */,
	{ 0, 0 } /* 0x06000014 UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos() */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2) */,
	{ 0, 0 } /* 0x06000016 System.Boolean UnityEngine.Input::get_mousePresent() */,
	{ 0, 0 } /* 0x06000017 System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0 } /* 0x06000018 System.Boolean UnityEngine.Input::get_touchSupported() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&) */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 0, 17 } /* 0x0600001F System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 17, 2 } /* 0x06000020 System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 0, 0 } /* 0x06000023 System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0 } /* 0x06000024 System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[260] = 
{
	{ 10919, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 10919, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 10919, 1, 51, 51, 35, 36, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 10919, 1, 51, 51, 37, 55, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 10919, 1, 51, 51, 56, 57, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 10920, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 10920, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 10920, 1, 52, 52, 39, 40, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 10920, 1, 52, 52, 41, 59, 1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 10920, 1, 52, 52, 60, 61, 10, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 10921, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 10921, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 10921, 1, 57, 57, 39, 40, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 10921, 1, 57, 57, 41, 56, 1, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 10921, 1, 57, 57, 57, 58, 10, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 10922, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 10922, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 10922, 1, 61, 61, 37, 38, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 10922, 1, 61, 61, 39, 53, 1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 10922, 1, 61, 61, 54, 55, 10, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 10948, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 10948, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 10948, 2, 43, 43, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 10948, 2, 44, 44, 13, 32, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 10948, 2, 45, 45, 9, 10, 7, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 10949, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 10949, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 10949, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 10949, 2, 50, 50, 13, 53, 1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 10949, 2, 52, 52, 13, 55, 7, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 10949, 2, 53, 53, 13, 71, 13, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 10949, 2, 53, 53, 0, 0, 37, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 10949, 2, 54, 54, 17, 54, 40, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 10949, 2, 57, 57, 13, 45, 51, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 10949, 2, 60, 60, 18, 34, 62, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 10949, 2, 60, 60, 0, 0, 64, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 10949, 2, 61, 61, 17, 56, 66, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 10949, 2, 60, 60, 68, 78, 83, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 10949, 2, 60, 60, 36, 66, 87, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 10949, 2, 60, 60, 0, 0, 99, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 10949, 2, 65, 65, 13, 30, 103, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 10949, 2, 65, 65, 0, 0, 113, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 10949, 2, 66, 66, 13, 14, 120, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 10949, 2, 67, 67, 17, 24, 121, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 10949, 2, 67, 67, 40, 49, 122, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 10949, 2, 67, 67, 0, 0, 132, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 10949, 2, 67, 67, 26, 36, 137, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 10949, 2, 68, 68, 17, 18, 144, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 10949, 2, 70, 70, 21, 94, 145, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 10949, 2, 70, 70, 0, 0, 179, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 10949, 2, 71, 71, 25, 34, 183, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 10949, 2, 73, 73, 21, 61, 188, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 10949, 2, 75, 75, 21, 80, 197, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 10949, 2, 76, 76, 21, 55, 205, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 10949, 2, 76, 76, 0, 0, 219, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 10949, 2, 77, 77, 21, 22, 226, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 10949, 2, 79, 79, 25, 70, 227, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 10949, 2, 82, 82, 25, 63, 237, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 10949, 2, 82, 82, 0, 0, 248, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 10949, 2, 83, 83, 29, 38, 252, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 10949, 2, 88, 88, 25, 48, 257, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 10949, 2, 89, 89, 25, 49, 265, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 10949, 2, 90, 90, 25, 88, 273, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 10949, 2, 90, 90, 0, 0, 294, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 10949, 2, 91, 91, 25, 26, 298, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 10949, 2, 92, 92, 29, 76, 299, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 10949, 2, 93, 93, 29, 77, 315, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 10949, 2, 94, 94, 25, 26, 331, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 10949, 2, 96, 96, 25, 93, 332, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 10949, 2, 99, 99, 25, 82, 359, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 10949, 2, 99, 99, 0, 0, 420, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 10949, 2, 100, 100, 29, 38, 424, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 10949, 2, 101, 101, 21, 22, 429, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 10949, 2, 103, 103, 21, 22, 432, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 10949, 2, 106, 106, 25, 55, 433, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 10949, 2, 107, 107, 21, 22, 436, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 10949, 2, 110, 110, 21, 49, 437, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 10949, 2, 111, 111, 21, 55, 446, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 10949, 2, 111, 111, 0, 0, 460, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 10949, 2, 112, 112, 25, 34, 464, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 10949, 2, 116, 116, 21, 47, 469, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 10949, 2, 116, 116, 0, 0, 481, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 10949, 2, 117, 117, 25, 34, 485, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 10949, 2, 120, 120, 21, 86, 490, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 10949, 2, 121, 121, 21, 79, 501, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 10949, 2, 122, 122, 21, 191, 515, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 10949, 2, 125, 125, 21, 153, 561, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 10949, 2, 126, 126, 21, 39, 589, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 10949, 2, 126, 126, 0, 0, 599, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 10949, 2, 127, 127, 21, 22, 603, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 10949, 2, 128, 128, 25, 74, 604, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 10949, 2, 129, 129, 25, 75, 622, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 10949, 2, 130, 130, 21, 22, 640, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 10949, 2, 134, 134, 26, 127, 643, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 10949, 2, 134, 134, 0, 0, 668, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 10949, 2, 135, 135, 21, 22, 672, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 10949, 2, 136, 136, 25, 73, 673, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 10949, 2, 137, 137, 25, 73, 690, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 10949, 2, 138, 138, 21, 22, 707, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 10949, 2, 141, 141, 21, 155, 708, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 10949, 2, 142, 142, 21, 39, 736, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 10949, 2, 142, 142, 0, 0, 746, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 10949, 2, 143, 143, 21, 22, 750, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 10949, 2, 144, 144, 25, 74, 751, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 10949, 2, 145, 145, 25, 75, 769, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 10949, 2, 146, 146, 21, 22, 787, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 10949, 2, 150, 150, 26, 127, 790, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 10949, 2, 150, 150, 0, 0, 815, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 10949, 2, 151, 151, 21, 22, 819, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 10949, 2, 152, 152, 25, 73, 820, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 10949, 2, 153, 153, 25, 73, 837, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 10949, 2, 154, 154, 21, 22, 854, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 10949, 2, 156, 156, 17, 18, 855, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 10949, 2, 156, 156, 0, 0, 856, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 10949, 2, 67, 67, 37, 39, 862, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 10949, 2, 157, 157, 13, 14, 873, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 10949, 2, 160, 160, 18, 34, 874, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 10949, 2, 160, 160, 0, 0, 877, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 10949, 2, 161, 161, 17, 62, 879, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 10949, 2, 160, 160, 68, 78, 899, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 10949, 2, 160, 160, 36, 66, 905, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 10949, 2, 160, 160, 0, 0, 918, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 10949, 2, 163, 163, 13, 33, 922, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 10949, 2, 164, 164, 9, 10, 928, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 10949, 2, 50, 50, 13, 53, 1, kSequencePointKind_StepOut, 0, 124 } /* seqPointIndex: 124 */,
	{ 10949, 2, 52, 52, 13, 55, 7, kSequencePointKind_StepOut, 0, 125 } /* seqPointIndex: 125 */,
	{ 10949, 2, 57, 57, 13, 45, 56, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 10949, 2, 70, 70, 21, 94, 148, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 10949, 2, 70, 70, 21, 94, 160, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 10949, 2, 70, 70, 21, 94, 166, kSequencePointKind_StepOut, 0, 129 } /* seqPointIndex: 129 */,
	{ 10949, 2, 73, 73, 21, 61, 190, kSequencePointKind_StepOut, 0, 130 } /* seqPointIndex: 130 */,
	{ 10949, 2, 75, 75, 21, 80, 198, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
	{ 10949, 2, 76, 76, 21, 55, 207, kSequencePointKind_StepOut, 0, 132 } /* seqPointIndex: 132 */,
	{ 10949, 2, 76, 76, 21, 55, 212, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 10949, 2, 88, 88, 25, 48, 257, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 10949, 2, 89, 89, 25, 49, 265, kSequencePointKind_StepOut, 0, 135 } /* seqPointIndex: 135 */,
	{ 10949, 2, 92, 92, 29, 76, 307, kSequencePointKind_StepOut, 0, 136 } /* seqPointIndex: 136 */,
	{ 10949, 2, 93, 93, 29, 77, 323, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 10949, 2, 96, 96, 25, 93, 354, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 10949, 2, 110, 110, 21, 49, 439, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 10949, 2, 111, 111, 21, 55, 450, kSequencePointKind_StepOut, 0, 140 } /* seqPointIndex: 140 */,
	{ 10949, 2, 116, 116, 21, 47, 471, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 10949, 2, 120, 120, 21, 86, 494, kSequencePointKind_StepOut, 0, 142 } /* seqPointIndex: 142 */,
	{ 10949, 2, 121, 121, 21, 79, 503, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 10949, 2, 122, 122, 21, 191, 522, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 10949, 2, 122, 122, 21, 191, 531, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 10949, 2, 122, 122, 21, 191, 538, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 10949, 2, 122, 122, 21, 191, 547, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 10949, 2, 125, 125, 21, 153, 569, kSequencePointKind_StepOut, 0, 148 } /* seqPointIndex: 148 */,
	{ 10949, 2, 125, 125, 21, 153, 576, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 10949, 2, 125, 125, 21, 153, 582, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 10949, 2, 126, 126, 21, 39, 592, kSequencePointKind_StepOut, 0, 151 } /* seqPointIndex: 151 */,
	{ 10949, 2, 134, 134, 26, 127, 645, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 10949, 2, 134, 134, 26, 127, 655, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 10949, 2, 141, 141, 21, 155, 716, kSequencePointKind_StepOut, 0, 154 } /* seqPointIndex: 154 */,
	{ 10949, 2, 141, 141, 21, 155, 723, kSequencePointKind_StepOut, 0, 155 } /* seqPointIndex: 155 */,
	{ 10949, 2, 141, 141, 21, 155, 729, kSequencePointKind_StepOut, 0, 156 } /* seqPointIndex: 156 */,
	{ 10949, 2, 142, 142, 21, 39, 739, kSequencePointKind_StepOut, 0, 157 } /* seqPointIndex: 157 */,
	{ 10949, 2, 150, 150, 26, 127, 792, kSequencePointKind_StepOut, 0, 158 } /* seqPointIndex: 158 */,
	{ 10949, 2, 150, 150, 26, 127, 802, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 10949, 2, 161, 161, 17, 62, 893, kSequencePointKind_StepOut, 0, 160 } /* seqPointIndex: 160 */,
	{ 10950, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 10950, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 10950, 2, 171, 171, 9, 10, 0, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 10950, 2, 173, 173, 13, 67, 1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 10950, 2, 174, 174, 13, 57, 8, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 10950, 2, 176, 176, 13, 36, 15, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 10950, 2, 176, 176, 0, 0, 17, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 10950, 2, 177, 177, 13, 14, 20, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 10950, 2, 178, 178, 17, 25, 21, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 10950, 2, 178, 178, 0, 0, 28, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 10950, 2, 179, 179, 17, 18, 31, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 10950, 2, 180, 180, 21, 45, 32, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 10950, 2, 181, 181, 21, 66, 44, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 10950, 2, 182, 182, 17, 18, 66, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 10950, 2, 183, 183, 13, 14, 67, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 10950, 2, 184, 184, 18, 36, 73, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 10950, 2, 184, 184, 0, 0, 79, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 10950, 2, 185, 185, 13, 14, 83, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 10950, 2, 186, 186, 17, 39, 84, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 10950, 2, 186, 186, 0, 0, 102, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 10950, 2, 187, 187, 17, 18, 106, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 10950, 2, 189, 189, 21, 65, 107, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 10950, 2, 189, 189, 0, 0, 126, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 10950, 2, 190, 190, 25, 76, 130, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 10950, 2, 193, 193, 21, 64, 152, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 10950, 2, 194, 194, 21, 55, 174, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 10950, 2, 195, 195, 17, 18, 191, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 10950, 2, 196, 196, 13, 14, 192, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 10950, 2, 197, 197, 18, 40, 195, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 10950, 2, 197, 197, 0, 0, 213, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 10950, 2, 198, 198, 13, 14, 217, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 10950, 2, 199, 199, 17, 62, 218, kSequencePointKind_Normal, 0, 192 } /* seqPointIndex: 192 */,
	{ 10950, 2, 200, 200, 13, 14, 240, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 10950, 2, 204, 204, 13, 52, 241, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 10950, 2, 204, 204, 0, 0, 260, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 10950, 2, 205, 205, 13, 14, 264, kSequencePointKind_Normal, 0, 196 } /* seqPointIndex: 196 */,
	{ 10950, 2, 206, 206, 17, 25, 265, kSequencePointKind_Normal, 0, 197 } /* seqPointIndex: 197 */,
	{ 10950, 2, 206, 206, 0, 0, 273, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 10950, 2, 207, 207, 21, 52, 277, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 10950, 2, 208, 208, 13, 14, 290, kSequencePointKind_Normal, 0, 200 } /* seqPointIndex: 200 */,
	{ 10950, 2, 210, 210, 13, 14, 293, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 10950, 2, 211, 211, 17, 34, 294, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 10950, 2, 211, 211, 0, 0, 312, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 10950, 2, 212, 212, 17, 18, 316, kSequencePointKind_Normal, 0, 204 } /* seqPointIndex: 204 */,
	{ 10950, 2, 213, 213, 21, 61, 317, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 10950, 2, 214, 214, 17, 18, 339, kSequencePointKind_Normal, 0, 206 } /* seqPointIndex: 206 */,
	{ 10950, 2, 216, 216, 17, 25, 340, kSequencePointKind_Normal, 0, 207 } /* seqPointIndex: 207 */,
	{ 10950, 2, 216, 216, 0, 0, 348, kSequencePointKind_Normal, 0, 208 } /* seqPointIndex: 208 */,
	{ 10950, 2, 217, 217, 17, 18, 352, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 10950, 2, 218, 218, 21, 53, 353, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 10950, 2, 219, 219, 21, 52, 366, kSequencePointKind_Normal, 0, 211 } /* seqPointIndex: 211 */,
	{ 10950, 2, 220, 220, 17, 18, 379, kSequencePointKind_Normal, 0, 212 } /* seqPointIndex: 212 */,
	{ 10950, 2, 221, 221, 13, 14, 380, kSequencePointKind_Normal, 0, 213 } /* seqPointIndex: 213 */,
	{ 10950, 2, 222, 222, 13, 32, 381, kSequencePointKind_Normal, 0, 214 } /* seqPointIndex: 214 */,
	{ 10950, 2, 223, 223, 9, 10, 393, kSequencePointKind_Normal, 0, 215 } /* seqPointIndex: 215 */,
	{ 10950, 2, 173, 173, 13, 67, 2, kSequencePointKind_StepOut, 0, 216 } /* seqPointIndex: 216 */,
	{ 10950, 2, 174, 174, 13, 57, 9, kSequencePointKind_StepOut, 0, 217 } /* seqPointIndex: 217 */,
	{ 10950, 2, 178, 178, 17, 25, 22, kSequencePointKind_StepOut, 0, 218 } /* seqPointIndex: 218 */,
	{ 10950, 2, 181, 181, 21, 66, 60, kSequencePointKind_StepOut, 0, 219 } /* seqPointIndex: 219 */,
	{ 10950, 2, 186, 186, 17, 39, 95, kSequencePointKind_StepOut, 0, 220 } /* seqPointIndex: 220 */,
	{ 10950, 2, 189, 189, 21, 65, 119, kSequencePointKind_StepOut, 0, 221 } /* seqPointIndex: 221 */,
	{ 10950, 2, 190, 190, 25, 76, 146, kSequencePointKind_StepOut, 0, 222 } /* seqPointIndex: 222 */,
	{ 10950, 2, 193, 193, 21, 64, 168, kSequencePointKind_StepOut, 0, 223 } /* seqPointIndex: 223 */,
	{ 10950, 2, 197, 197, 18, 40, 206, kSequencePointKind_StepOut, 0, 224 } /* seqPointIndex: 224 */,
	{ 10950, 2, 199, 199, 17, 62, 234, kSequencePointKind_StepOut, 0, 225 } /* seqPointIndex: 225 */,
	{ 10950, 2, 204, 204, 13, 52, 253, kSequencePointKind_StepOut, 0, 226 } /* seqPointIndex: 226 */,
	{ 10950, 2, 206, 206, 17, 25, 266, kSequencePointKind_StepOut, 0, 227 } /* seqPointIndex: 227 */,
	{ 10950, 2, 207, 207, 21, 52, 284, kSequencePointKind_StepOut, 0, 228 } /* seqPointIndex: 228 */,
	{ 10950, 2, 211, 211, 17, 34, 305, kSequencePointKind_StepOut, 0, 229 } /* seqPointIndex: 229 */,
	{ 10950, 2, 213, 213, 21, 61, 333, kSequencePointKind_StepOut, 0, 230 } /* seqPointIndex: 230 */,
	{ 10950, 2, 216, 216, 17, 25, 341, kSequencePointKind_StepOut, 0, 231 } /* seqPointIndex: 231 */,
	{ 10950, 2, 218, 218, 21, 53, 360, kSequencePointKind_StepOut, 0, 232 } /* seqPointIndex: 232 */,
	{ 10950, 2, 219, 219, 21, 52, 373, kSequencePointKind_StepOut, 0, 233 } /* seqPointIndex: 233 */,
	{ 10951, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 234 } /* seqPointIndex: 234 */,
	{ 10951, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 235 } /* seqPointIndex: 235 */,
	{ 10951, 2, 34, 34, 9, 49, 0, kSequencePointKind_Normal, 0, 236 } /* seqPointIndex: 236 */,
	{ 10951, 2, 36, 36, 9, 95, 6, kSequencePointKind_Normal, 0, 237 } /* seqPointIndex: 237 */,
	{ 10951, 2, 37, 37, 9, 100, 17, kSequencePointKind_Normal, 0, 238 } /* seqPointIndex: 238 */,
	{ 10951, 2, 38, 38, 9, 98, 28, kSequencePointKind_Normal, 0, 239 } /* seqPointIndex: 239 */,
	{ 10952, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 240 } /* seqPointIndex: 240 */,
	{ 10952, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 241 } /* seqPointIndex: 241 */,
	{ 10952, 2, 16, 16, 13, 14, 0, kSequencePointKind_Normal, 0, 242 } /* seqPointIndex: 242 */,
	{ 10952, 2, 17, 17, 17, 88, 1, kSequencePointKind_Normal, 0, 243 } /* seqPointIndex: 243 */,
	{ 10952, 2, 18, 18, 13, 14, 16, kSequencePointKind_Normal, 0, 244 } /* seqPointIndex: 244 */,
	{ 10952, 2, 17, 17, 17, 88, 10, kSequencePointKind_StepOut, 0, 245 } /* seqPointIndex: 245 */,
	{ 10953, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 246 } /* seqPointIndex: 246 */,
	{ 10953, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 247 } /* seqPointIndex: 247 */,
	{ 10953, 2, 21, 21, 13, 14, 0, kSequencePointKind_Normal, 0, 248 } /* seqPointIndex: 248 */,
	{ 10953, 2, 22, 22, 17, 71, 1, kSequencePointKind_Normal, 0, 249 } /* seqPointIndex: 249 */,
	{ 10953, 2, 23, 23, 13, 14, 33, kSequencePointKind_Normal, 0, 250 } /* seqPointIndex: 250 */,
	{ 10953, 2, 22, 22, 17, 71, 8, kSequencePointKind_StepOut, 0, 251 } /* seqPointIndex: 251 */,
	{ 10953, 2, 22, 22, 17, 71, 22, kSequencePointKind_StepOut, 0, 252 } /* seqPointIndex: 252 */,
	{ 10954, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 253 } /* seqPointIndex: 253 */,
	{ 10954, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 254 } /* seqPointIndex: 254 */,
	{ 10954, 2, 26, 26, 13, 14, 0, kSequencePointKind_Normal, 0, 255 } /* seqPointIndex: 255 */,
	{ 10954, 2, 27, 27, 17, 77, 1, kSequencePointKind_Normal, 0, 256 } /* seqPointIndex: 256 */,
	{ 10954, 2, 28, 28, 13, 14, 43, kSequencePointKind_Normal, 0, 257 } /* seqPointIndex: 257 */,
	{ 10954, 2, 27, 27, 17, 77, 13, kSequencePointKind_StepOut, 0, 258 } /* seqPointIndex: 258 */,
	{ 10954, 2, 27, 27, 17, 77, 32, kSequencePointKind_StepOut, 0, 259 } /* seqPointIndex: 259 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_InputLegacyModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/InputLegacy/Input.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/InputLegacy/MouseEvents.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 1937, 1 },
	{ 1941, 2 },
	{ 1940, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[13] = 
{
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 929 },
	{ 62, 103 },
	{ 137, 856 },
	{ 144, 856 },
	{ 226, 430 },
	{ 874, 922 },
	{ 0, 394 },
	{ 0, 35 },
	{ 0, 45 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[36] = 
{
	{ 12, 0, 1 } /* System.Int32 UnityEngine.Touch::get_fingerId() */,
	{ 12, 1, 1 } /* UnityEngine.Vector2 UnityEngine.Touch::get_position() */,
	{ 12, 2, 1 } /* UnityEngine.TouchPhase UnityEngine.Touch::get_phase() */,
	{ 12, 3, 1 } /* UnityEngine.TouchType UnityEngine.Touch::get_type() */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Single UnityEngine.Input::GetAxisRaw(System.String) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetButtonDown(System.String) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButton(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32) */,
	{ 0, 0, 0 } /* UnityEngine.Vector3 UnityEngine.Input::get_mousePosition() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta() */,
	{ 0, 0, 0 } /* UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Input::get_compositionString() */,
	{ 0, 0, 0 } /* UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::get_mousePresent() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Input::get_touchCount() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Input::get_touchSupported() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::SetMouseMoved() */,
	{ 929, 4, 6 } /* System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32) */,
	{ 394, 10, 1 } /* System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String) */,
	{ 35, 11, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo) */,
	{ 45, 12, 1 } /* System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_InputLegacyModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	260,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_InputLegacyModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
