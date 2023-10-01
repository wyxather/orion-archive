#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_PetSpiderant_Burrow_Exit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C
// 0x0010 (0x0248 - 0x0238)
class UARand_PetSpiderant_Burrow_Exit_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Beastmaster_C*                   EventHubOwner;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_PetSpiderant_Burrow_Exit.ARand_PetSpiderant_Burrow_Exit_C");
		return ptr;
	}


	void Notify_BurrowExit();
	void ExecuteUbergraph_ARand_PetSpiderant_Burrow_Exit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
