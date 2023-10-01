#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_SpawnPoint_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C
// 0x0008 (0x03B0 - 0x03A8)
class AInteractive_ZoneDoor_SpawnPoint_Intro_C : public AInteractive_ZoneDoor_SpawnPoint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C");
		return ptr;
	}


	void OnPreSpawn(class AActor** Actor);
	void ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Intro(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
