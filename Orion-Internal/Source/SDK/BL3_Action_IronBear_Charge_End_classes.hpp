#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_Charge_End_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_IronBear_Charge_End.Action_IronBear_Charge_End_C
// 0x0008 (0x0220 - 0x0218)
class UAction_IronBear_Charge_End_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_Charge_End.Action_IronBear_Charge_End_C");
		return ptr;
	}


	void OnAnimEnd_B40E293946052D568378BF989B320782();
	void OnEnd_B40E293946052D568378BF989B320782(EGbxActionEndState EndState, class AActor* Actor);
	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_IronBear_Charge_End(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
