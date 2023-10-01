#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetJabbermon_Leap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C
// 0x0008 (0x02F0 - 0x02E8)
class UANav_PetJabbermon_Leap_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_PetJabbermon_Leap.ANav_PetJabbermon_Leap_C");
		return ptr;
	}


	void Notify_Landed_Pet();
	void ExecuteUbergraph_ANav_PetJabbermon_Leap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
