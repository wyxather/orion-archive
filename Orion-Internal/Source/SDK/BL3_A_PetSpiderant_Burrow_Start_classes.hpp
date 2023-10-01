#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Burrow_Start_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C
// 0x0008 (0x0220 - 0x0218)
class UA_PetSpiderant_Burrow_Start_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C");
		return ptr;
	}


	void GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result);
	void TraceToGround();
	void OnBegin(class AActor** Actor);
	void Notify_SetBurrowStance();
	void ExecuteUbergraph_A_PetSpiderant_Burrow_Start(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
