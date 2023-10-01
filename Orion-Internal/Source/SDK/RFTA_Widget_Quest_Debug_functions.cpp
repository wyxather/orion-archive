// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Quest_Debug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuestLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Quest_Debug_C::Get_BaseQuestLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuestLabel_Text_1");

	UWidget_Quest_Debug_C_Get_BaseQuestLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuestLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Quest_Debug_C::Get_RootQuestLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuestLabel_Text_1");

	UWidget_Quest_Debug_C_Get_RootQuestLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuestLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Quest_Debug_C::Get_ParentQuestLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuestLabel_Text_1");

	UWidget_Quest_Debug_C_Get_ParentQuestLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetText_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Quest_Debug_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetText_1");

	UWidget_Quest_Debug_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuest_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Quest_Debug_C::Get_RootQuest_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_RootQuest_Visibility_1");

	UWidget_Quest_Debug_C_Get_RootQuest_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuest_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Quest_Debug_C::Get_ParentQuest_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_ParentQuest_Visibility_1");

	UWidget_Quest_Debug_C_Get_ParentQuest_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuest_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Quest_Debug_C::Get_BaseQuest_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Get_BaseQuest_Visibility_1");

	UWidget_Quest_Debug_C_Get_BaseQuest_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.SelectComponent
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::SelectComponent(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.SelectComponent");

	UWidget_Quest_Debug_C_SelectComponent_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnantQuest**          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::Init(class ARemnantQuest** Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Init");

	UWidget_Quest_Debug_C_Init_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTile
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URemnantQuestTile*       Tile                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::GetTile(class URemnantQuestTile** Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTile");

	UWidget_Quest_Debug_C_GetTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tile != nullptr)
		*Tile = params.Tile;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileID
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::GetTileID(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileID");

	UWidget_Quest_Debug_C_GetTileID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileVector
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTileCoord*             Coord                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::GetTileVector(struct FTileCoord* Coord, struct FVector2D* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetTileVector");

	UWidget_Quest_Debug_C_GetTileVector_Params params;
	params.Coord = Coord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetMinPosition
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZoneActor**             Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::GetMinPosition(class AZoneActor** Zone, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetMinPosition");

	UWidget_Quest_Debug_C_GetMinPosition_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetZone
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZoneActor*              Zone                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::GetZone(class UQuestComponent** QuestComponent, class AZoneActor** Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.GetZone");

	UWidget_Quest_Debug_C_GetZone_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zone != nullptr)
		*Zone = params.Zone;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.SetZone
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZoneActor**             Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::SetZone(class AZoneActor** Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.SetZone");

	UWidget_Quest_Debug_C_SetZone_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Quest_Debug_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.Construct");

	UWidget_Quest_Debug_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UQuestComponent**        QuestComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature(class UQuestComponent** QuestComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature_Params params;
	params.QuestComponent = QuestComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Quest_Debug_C_BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Quest_Debug.Widget_Quest_Debug_C.ExecuteUbergraph_Widget_Quest_Debug
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Quest_Debug_C::ExecuteUbergraph_Widget_Quest_Debug(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Quest_Debug.Widget_Quest_Debug_C.ExecuteUbergraph_Widget_Quest_Debug");

	UWidget_Quest_Debug_C_ExecuteUbergraph_Widget_Quest_Debug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
