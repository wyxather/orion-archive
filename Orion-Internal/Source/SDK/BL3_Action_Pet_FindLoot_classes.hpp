#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_FindLoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Pet_FindLoot.Action_Pet_FindLoot_C
// 0x0008 (0x0220 - 0x0218)
class UAction_Pet_FindLoot_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_FindLoot.Action_Pet_FindLoot_C");
		return ptr;
	}


	void Notify_FoundLoot();
	void ExecuteUbergraph_Action_Pet_FindLoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
