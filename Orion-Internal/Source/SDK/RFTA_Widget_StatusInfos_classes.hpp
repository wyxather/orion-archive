#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusInfos_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StatusInfos.Widget_StatusInfos_C
// 0x0018 (0x0258 - 0x0240)
class UWidget_StatusInfos_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                ListStatus;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                ListTeamwork;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusInfos.Widget_StatusInfos_C");
		return ptr;
	}


	void CanAddAction(class UAction_StatusEffect_C** StatusEffect, class UActionBuff** BuffEffect, bool* Out);
	void Init();
	void RemoveAction(class UAction_StatusEffect_C** StatusEffect, class UAction_Buff_C** BuffEffect, bool* IsTeamwork);
	void AddAction(class UAction_StatusEffect_C** StatusEffect, class UAction_Buff_C** BuffEffect, bool* IsStatusEffect, bool* IsTeamwork);
	void Construct();
	void OnActionAdded_Event_1(class UActionBase** Action);
	void OnActionRemoved_Event_1(class UActionBase** Action);
	void ExecuteUbergraph_Widget_StatusInfos(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
