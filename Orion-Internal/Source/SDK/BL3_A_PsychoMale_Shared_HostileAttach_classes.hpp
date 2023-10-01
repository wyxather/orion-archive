#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_HostileAttach_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C
// 0x0008 (0x0618 - 0x0610)
class UA_PsychoMale_Shared_HostileAttach_C : public UOakAction_HostileAttach
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_Shared_HostileAttach.A_PsychoMale_Shared_HostileAttach_C");
		return ptr;
	}


	void MeleeStrike();
	void OnGrip();
	void ExecuteUbergraph_A_PsychoMale_Shared_HostileAttach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
