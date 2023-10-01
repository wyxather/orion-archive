#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_KilledEnemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C
// 0x0008 (0x0240 - 0x0238)
class UAction_Pet_KilledEnemy_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_KilledEnemy.Action_Pet_KilledEnemy_C");
		return ptr;
	}


	void Notify_Response();
	void ExecuteUbergraph_Action_Pet_KilledEnemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
