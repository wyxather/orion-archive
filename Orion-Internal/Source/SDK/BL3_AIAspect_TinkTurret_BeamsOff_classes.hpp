#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TinkTurret_BeamsOff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAspect_TinkTurret_BeamsOff.AIAspect_TinkTurret_BeamsOff_C
// 0x0008 (0x0108 - 0x0100)
class UAIAspect_TinkTurret_BeamsOff_C : public UAIAspect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_TinkTurret_BeamsOff.AIAspect_TinkTurret_BeamsOff_C");
		return ptr;
	}


	void BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkTurret_IdleLightOn(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AIAspect_TinkTurret_BeamsOff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
