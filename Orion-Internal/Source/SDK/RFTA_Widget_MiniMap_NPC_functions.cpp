// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateMiniMapWidget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetTransform*       InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FWidgetTransform        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)

struct FWidgetTransform UWidget_MiniMap_NPC_C::UpdateMiniMapWidget(struct FWidgetTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateMiniMapWidget");

	UWidget_MiniMap_NPC_C_UpdateMiniMapWidget_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateFactionColor
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAffiliation*                  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_NPC_C::UpdateFactionColor(EAffiliation* Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.UpdateFactionColor");

	UWidget_MiniMap_NPC_C_UpdateFactionColor_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnRegisteredToPanel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMiniMapPanel**          MiniMapPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_NPC_C::OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnRegisteredToPanel");

	UWidget_MiniMap_NPC_C_OnRegisteredToPanel_Params params;
	params.MiniMapPanel = MiniMapPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnFactionChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_NPC_C::OnFactionChanged(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.OnFactionChanged");

	UWidget_MiniMap_NPC_C_OnFactionChanged_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.ExecuteUbergraph_Widget_MiniMap_NPC
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_NPC_C::ExecuteUbergraph_Widget_MiniMap_NPC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_NPC.Widget_MiniMap_NPC_C.ExecuteUbergraph_Widget_MiniMap_NPC");

	UWidget_MiniMap_NPC_C_ExecuteUbergraph_Widget_MiniMap_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
