#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_StatusEffectStack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_StatusEffectStack.Widget_StatusEffectStack_C
// 0x0078 (0x02B8 - 0x0240)
class UWidget_StatusEffectStack_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                StatusEffects;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IconSize;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverlapScalar;                                            // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Boss;                                                     // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	TMap<class UClass*, int>                           DummyMap;                                                 // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusEffectStack.Widget_StatusEffectStack_C");
		return ptr;
	}


	void StopListeningForLevelChange(class UActionBase** Action);
	void ListenForLevelChange(class UActionBase** Action);
	void DetermineDrawableStacks(class UActionBase** Action, TArray<class UClass*>* DrawnActions, int* NumStacks, bool* ShouldDraw);
	void GetRemainingTimeForAction(class UActionBase** Action, float* Time);
	void StatusEffectSortPredicate(class UObject** A, class UObject** B, bool* Result);
	void IsValidStatusEffect(class UActionBase** Action, bool* Valid);
	void UpdateStatusEffects();
	void Init(class ACharacterGunfire** Character);
	void OnActionRemoved(class UActionBase** Action);
	void OnActionAdded(class UActionBase** Action);
	void ExecuteUbergraph_Widget_StatusEffectStack(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
