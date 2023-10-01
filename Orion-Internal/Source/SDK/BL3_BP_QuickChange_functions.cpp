// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_QuickChange_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_QuickChange.BP_QuickChange_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.UserConstructionScript");

	ABP_QuickChange_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnSaveGameRenamed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  NewName                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_QuickChange_C::OnSaveGameRenamed(struct FText* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnSaveGameRenamed");

	ABP_QuickChange_C_OnSaveGameRenamed_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkinColor
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_QuickChange_C::OnPickedNewSkinColor(int* Index, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkinColor");

	ABP_QuickChange_C_OnPickedNewSkinColor_Params params;
	params.Index = Index;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOakCustomizationData**  NewSkin                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChange_C::OnPickedNewSkin(class UOakCustomizationData** NewSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedNewSkin");

	ABP_QuickChange_C_OnPickedNewSkin_Params params;
	params.NewSkin = NewSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewHead
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOakCustomizationData**  NewHead                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChange_C::OnPickedNewHead(class UOakCustomizationData** NewHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedNewHead");

	ABP_QuickChange_C_OnPickedNewHead_Params params;
	params.NewHead = NewHead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedNewECHOTheme
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOakCustomizationData**  NewECHOTheme                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChange_C::OnPickedNewECHOTheme(class UOakCustomizationData** NewECHOTheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedNewECHOTheme");

	ABP_QuickChange_C_OnPickedNewECHOTheme_Params params;
	params.NewECHOTheme = NewECHOTheme;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnRespec
// (Event, Public, BlueprintEvent)

void ABP_QuickChange_C::OnRespec()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnRespec");

	ABP_QuickChange_C_OnRespec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPlayerStopInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AOakPlayerController**   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChange_C::OnPlayerStopInteraction(class AOakPlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPlayerStopInteraction");

	ABP_QuickChange_C_OnPlayerStopInteraction_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.ExecuteUbergraph_BP_QuickChange
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QuickChange_C::ExecuteUbergraph_BP_QuickChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.ExecuteUbergraph_BP_QuickChange");

	ABP_QuickChange_C_ExecuteUbergraph_BP_QuickChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnChangeSkinColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnChangeSkinColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnChangeSkinColor__DelegateSignature");

	ABP_QuickChange_C_OnChangeSkinColor__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedEchoTheme__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnPickedEchoTheme__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedEchoTheme__DelegateSignature");

	ABP_QuickChange_C_OnPickedEchoTheme__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedHead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnPickedHead__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedHead__DelegateSignature");

	ABP_QuickChange_C_OnPickedHead__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnSkillRespec__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnSkillRespec__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnSkillRespec__DelegateSignature");

	ABP_QuickChange_C_OnSkillRespec__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnRenameSave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnRenameSave__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnRenameSave__DelegateSignature");

	ABP_QuickChange_C_OnRenameSave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QuickChange.BP_QuickChange_C.OnPickedSkin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_QuickChange_C::OnPickedSkin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuickChange.BP_QuickChange_C.OnPickedSkin__DelegateSignature");

	ABP_QuickChange_C_OnPickedSkin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
