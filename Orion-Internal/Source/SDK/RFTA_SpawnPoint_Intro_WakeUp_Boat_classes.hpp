#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_SpawnPoint_Intro_WakeUp_Boat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnPoint_Intro_WakeUp_Boat.SpawnPoint_Intro_WakeUp_Boat_C
// 0x0010 (0x03B1 - 0x03A1)
class ASpawnPoint_Intro_WakeUp_Boat_C : public AInteractive_DragonCrystal_SpawnPoint_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Has_PreSpawned;                                           // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPoint_Intro_WakeUp_Boat.SpawnPoint_Intro_WakeUp_Boat_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnPreSpawn(class AActor** Actor);
	void ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Boat(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
