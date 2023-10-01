#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_WashingMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C
// 0x0008 (0x01C8 - 0x01C0)
class UASpawn_Tink_WashingMachine_C : public UGbxAction_SpawnAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_Tink_WashingMachine.ASpawn_Tink_WashingMachine_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_Attack();
	void ExecuteUbergraph_ASpawn_Tink_WashingMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
