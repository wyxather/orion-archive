#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_SetBlackboardBool_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C
// 0x0018 (0x0118 - 0x0100)
class UAIAspect_SetBlackboardBool_C : public UAIAspect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)
	struct FGbxBlackboardKeySelector                   _Key;                                                     // 0x0108(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C");
		return ptr;
	}


	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void ExecuteUbergraph_AIAspect_SetBlackboardBool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
