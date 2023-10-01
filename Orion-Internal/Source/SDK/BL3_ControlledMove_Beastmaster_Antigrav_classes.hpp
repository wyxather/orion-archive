#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Beastmaster_Antigrav_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C
// 0x000C (0x0AF0 - 0x0AE4)
class UControlledMove_Beastmaster_Antigrav_C : public UControlledMove_Maya_PhaseLock_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Beastmaster_Antigrav.ControlledMove_Beastmaster_Antigrav_C");
		return ptr;
	}


	void OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator);
	void SpawnLoot();
	void ExecuteUbergraph_ControlledMove_Beastmaster_Antigrav(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
