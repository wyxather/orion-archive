#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACharge_PetSkag_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C
// 0x0008 (0x0148 - 0x0140)
class UACharge_PetSkag_Charge_C : public UGbxAction_AICharge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_PetSkag_Charge.ACharge_PetSkag_Charge_C");
		return ptr;
	}


	void Notify_Melee();
	void ExecuteUbergraph_ACharge_PetSkag_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
