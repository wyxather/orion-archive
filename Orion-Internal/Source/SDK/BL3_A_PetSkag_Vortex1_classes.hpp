#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_Vortex1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetSkag_Vortex1.A_PetSkag_Vortex1_C
// 0x0008 (0x0230 - 0x0228)
class UA_PetSkag_Vortex1_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSkag_Vortex1.A_PetSkag_Vortex1_C");
		return ptr;
	}


	void Notify_AttackCommand();
	void ExecuteUbergraph_A_PetSkag_Vortex1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
