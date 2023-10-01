#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Fire_Burst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C
// 0x0008 (0x0220 - 0x0218)
class UA_PetSpiderant_Fire_Burst_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Fire_Burst.A_PetSpiderant_Fire_Burst_C");
		return ptr;
	}


	void Notify_SkillUse();
	void ExecuteUbergraph_A_PetSpiderant_Fire_Burst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
