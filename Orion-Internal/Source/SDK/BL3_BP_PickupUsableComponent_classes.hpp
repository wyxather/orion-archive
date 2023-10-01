#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PickupUsableComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C
// 0x0000 (0x03B0 - 0x03B0)
class UBP_PickupUsableComponent_C : public UBP_UsableComponent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C");
		return ptr;
	}


	struct FText K2_GetOptionalErrorText();
	bool K2_CanBeUsed(struct FUsabilityQuery* Query);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
