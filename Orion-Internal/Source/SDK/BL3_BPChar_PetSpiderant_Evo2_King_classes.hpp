#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PetSpiderant_Evo2_King_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C
// 0x0010 (0x2640 - 0x2630)
class ABPChar_PetSpiderant_Evo2_King_C : public ABPChar_PetSpiderant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2630(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Beastmaster_PetSpiderant_Ambient_Acid;                 // 0x2638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetSpiderant_Evo2_King.BPChar_PetSpiderant_Evo2_King_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_PetSpiderant_Evo2_King(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
