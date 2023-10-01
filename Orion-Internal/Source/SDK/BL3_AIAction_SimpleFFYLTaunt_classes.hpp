#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_SimpleFFYLTaunt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_SimpleFFYLTaunt.AIAction_SimpleFFYLTaunt_C
// 0x0020 (0x0190 - 0x0170)
class UAIAction_SimpleFFYLTaunt_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	struct FGbxBlackboardKeySelector                   FFYLTauntActionKey;                                       // 0x0178(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      FFYLTauntAction;                                          // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_SimpleFFYLTaunt.AIAction_SimpleFFYLTaunt_C");
		return ptr;
	}


	void BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_FFYLTaunt(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__Sequence_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_FFYLTaunt(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AIAction_SimpleFFYLTaunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
