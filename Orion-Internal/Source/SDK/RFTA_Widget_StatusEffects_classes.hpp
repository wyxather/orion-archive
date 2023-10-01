#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffects_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StatusEffects.Widget_StatusEffects_C
// 0x0070 (0x02B8 - 0x0248)
class UWidget_StatusEffects_C : public UWIdget_StatusBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UActionBase*>                         ActionList;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UWidget_StatusEffect_C*> ActionToWidgetMap;                                        // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusEffects.Widget_StatusEffects_C");
		return ptr;
	}


	void DetermineDrawableStacks(class UActionBase** Action, TArray<class UClass*>* DrawnActions, int* NumStacks, bool* ShouldDraw);
	void GetRemainingTimeForAction(class UActionBase** Action, float* Time);
	void StatusEffectSortPredicate(class UObject** A, class UObject** B, bool* Result);
	void UpdateRenderedActions();
	void AddAction(class UActionBase** Action, int* StackSize);
	void Construct();
	void OnActionRemoved_Event_1(class UActionBase** Action);
	void On_Action_Added(class UActionBase** Action);
	void ExecuteUbergraph_Widget_StatusEffects(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
