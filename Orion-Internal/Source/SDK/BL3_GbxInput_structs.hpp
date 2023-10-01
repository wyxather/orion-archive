#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxInput.EGbxButtonEvent
enum class EGbxButtonEvent : uint8_t
{
	Pressed                        = 0,
	Released                       = 1,
	EGbxButtonEvent_MAX            = 2
};


// Enum GbxInput.EGbxInputEvent_Button_PressHoldRelease_Events
enum class EGbxInputEvent_Button_PressHoldRelease_Events : uint8_t
{
	Pressed                        = 0,
	Held                           = 1,
	Released                       = 2,
	EGbxInputEvent_Button_PressHoldRelease_MAX = 3
};


// Enum GbxInput.EGbxInputEvent_Button_PressPulse_Events
enum class EGbxInputEvent_Button_PressPulse_Events : uint8_t
{
	Pressed                        = 0,
	InitialPulse                   = 1,
	Pulse                          = 2,
	Released                       = 3,
	EGbxInputEvent_Button_PressPulse_MAX = 4
};


// Enum GbxInput.EGbxInputEvent_Button_PressRelease_Events
enum class EGbxInputEvent_Button_PressRelease_Events : uint8_t
{
	Pressed                        = 0,
	Released                       = 1,
	EGbxInputEvent_Button_PressRelease_MAX = 2
};


// Enum GbxInput.EGbxInputRebindPlatformSupportType
enum class EGbxInputRebindPlatformSupportType : uint8_t
{
	PC_Only                        = 0,
	Console_Only                   = 1,
	PC_And_Console                 = 2,
	EGbxInputRebindPlatformSupportType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxInput.BlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector
// 0x0020
struct FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector
{
	class UGbxInputActionData_Continuous_Vector*       Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BindingID;                                                // 0x0010(0x0010) (IsPlainOldData)
};

// ScriptStruct GbxInput.BlueprintGbxInputActionReceiverDelegateBinding_Discrete
// 0x0028
struct FBlueprintGbxInputActionReceiverDelegateBinding_Discrete
{
	class UGbxInputActionData_Discrete*                Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BindingID;                                                // 0x0018(0x0010) (IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputKey
// 0x0010
struct FGbxInputKey
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       KeyName;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputButton
// 0x0010 (0x0020 - 0x0010)
struct FGbxInputButton : public FGbxInputKey
{
	TArray<struct FKey>                                Keys;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxInput.GbxInputAxisKey
// 0x0028
struct FGbxInputAxisKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	struct FVector                                     Scale3D;                                                  // 0x0018(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputAxis
// 0x0010 (0x0020 - 0x0010)
struct FGbxInputAxis : public FGbxInputKey
{
	TArray<struct FGbxInputAxisKey>                    Keys;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GbxInput.GbxInputActionMappedEventParam
// 0x0008
struct FGbxInputActionMappedEventParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputActionMappedEventParam_String
// 0x0010 (0x0018 - 0x0008)
struct FGbxInputActionMappedEventParam_String : public FGbxInputActionMappedEventParam
{
	class FString                                      Value;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxInput.GbxInputActionMappedEventParam_Name
// 0x0008 (0x0010 - 0x0008)
struct FGbxInputActionMappedEventParam_Name : public FGbxInputActionMappedEventParam
{
	struct FName                                       Value;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputActionMappedEventParam_Int
// 0x0008 (0x0010 - 0x0008)
struct FGbxInputActionMappedEventParam_Int : public FGbxInputActionMappedEventParam
{
	int                                                Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputActionMappedEventParam_Float
// 0x0008 (0x0010 - 0x0008)
struct FGbxInputActionMappedEventParam_Float : public FGbxInputActionMappedEventParam
{
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputActionMappedEventData
// 0x0070
struct FGbxInputActionMappedEventData
{
	TArray<struct FGbxInputButton>                     Buttons;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGbxInputAxis>                       Axes;                                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UGbxInputKeyRebindData*>              Bindings;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FGbxInputActionMappedEventParam_String> StringParams;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FGbxInputActionMappedEventParam_Name> NameParams;                                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FGbxInputActionMappedEventParam_Int> IntParams;                                                // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FGbxInputActionMappedEventParam_Float> FloatParams;                                              // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxInput.GbxInputActionMap
// 0x0018
struct FGbxInputActionMap
{
	class UGbxInputActionData*                         InputActionData;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxInputActionMappedEventData>      Events;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxInput.GbxInputActionEventLookupList
// 0x0010
struct FGbxInputActionEventLookupList
{
	TArray<struct FGbxInputActionMap>                  InputActionMaps;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GbxInput.GbxInputRebind_Button
// 0x0030
struct FGbxInputRebind_Button
{
	class UGbxInputKeyRebindData_Button*               Binding;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxInputButton                             BUTTON;                                                   // 0x0008(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputRebind_Axis
// 0x0030
struct FGbxInputRebind_Axis
{
	class UGbxInputKeyRebindData_Axis*                 Binding;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGbxInputAxis                               AXIS;                                                     // 0x0008(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputEventExecOutput_FastPath
// 0x0018
struct FGbxInputEventExecOutput_FastPath
{
	bool                                               bUsesFastpath;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UGbxInputActionData*                         DirectActionData;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeEvent;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputEventExecOutput
// 0x0038
struct FGbxInputEventExecOutput
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecFunctionName;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBound;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FGbxInputEventExecOutput_FastPath           FastPathData;                                             // 0x0018(0x0018)
	class UFunction*                                   ExecFunction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputEvent
// 0x0048
struct FGbxInputEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FGbxInputEventExecOutput>            ExecOutputs;                                              // 0x0010(0x0010) (ZeroConstructor)
	class UBlueprintGeneratedClass*                    SelfClass;                                                // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxInputComponent*                          Component;                                                // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UGbxInputActionData_Discrete*>        PendingDiscreteActions;                                   // 0x0030(0x0010) (ZeroConstructor, Transient)
	bool                                               bBlockParentClassEvent;                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputEvent_Axis_Core
// 0x0028 (0x0070 - 0x0048)
struct FGbxInputEvent_Axis_Core : public FGbxInputEvent
{
	struct FGbxInputAxis                               AXIS;                                                     // 0x0048(0x0020) (Edit)
	class UGbxInputKeyRebindData_Axis*                 RebindData;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputEvent_Axis_Basic
// 0x0000 (0x0070 - 0x0070)
struct FGbxInputEvent_Axis_Basic : public FGbxInputEvent_Axis_Core
{

};

// ScriptStruct GbxInput.GbxInputEvent_Button_Core
// 0x0030 (0x0078 - 0x0048)
struct FGbxInputEvent_Button_Core : public FGbxInputEvent
{
	struct FGbxInputButton                             BUTTON;                                                   // 0x0048(0x0020) (Edit)
	class UGbxInputKeyRebindData_Button*               RebindData;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputEvent_Button_PressHoldRelease
// 0x0008 (0x0080 - 0x0078)
struct FGbxInputEvent_Button_PressHoldRelease : public FGbxInputEvent_Button_Core
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0078(0x0004) MISSED OFFSET
	float                                              HoldTime;                                                 // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputEvent_Button_PressPulse
// 0x0020 (0x0098 - 0x0078)
struct FGbxInputEvent_Button_PressPulse : public FGbxInputEvent_Button_Core
{
	float                                              DelayBeforeInitialPulse;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BaseDelayBetweenPulses;                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PulseDelayAcceleration;                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalDelayBetweenPulses;                                  // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
};

// ScriptStruct GbxInput.GbxInputEvent_Button_PressRelease
// 0x0000 (0x0078 - 0x0078)
struct FGbxInputEvent_Button_PressRelease : public FGbxInputEvent_Button_Core
{

};

// ScriptStruct GbxInput.GbxInputEventHelper_SigFunc_Button_PressPulse_Data
// 0x0004
struct FGbxInputEventHelper_SigFunc_Button_PressPulse_Data
{
	float                                              NextPulseDelay;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxInput.GbxInputEventHelper_SigFunc_Axis_Data
// 0x000C
struct FGbxInputEventHelper_SigFunc_Axis_Data
{
	struct FVector                                     Val;                                                      // 0x0000(0x000C) (IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
