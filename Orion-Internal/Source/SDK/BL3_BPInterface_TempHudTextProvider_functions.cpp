// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_TempHudTextProvider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C.SetMissionDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FacePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInterface_TempHudTextProvider_C::SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C.SetMissionDebugText");

	UBPInterface_TempHudTextProvider_C_SetMissionDebugText_Params params;
	params.Text = Text;
	params.TextSize = TextSize;
	params.Duration = Duration;
	params.TextColor = TextColor;
	params.FacePlayer = FacePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
