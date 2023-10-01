#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C
// 0x000D (0x03D9 - 0x03CC)
class AInteractive_ZoneDoor_Intro_C : public AInteractive_ZoneDoor_Default_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<E_SpawnPoint_Intro>                    Wake_Up_State;                                            // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_ZoneDoor_Intro.Interactive_ZoneDoor_Intro_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Interactive_ZoneDoor_Intro(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
