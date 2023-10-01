#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_IronCub_Stomp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_IronCub_Stomp.A_IronCub_Stomp_C
// 0x000C (0x0224 - 0x0218)
class UA_IronCub_Stomp_C : public UA_IronBear_Stomp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	float                                              ImpactDamageOverride;                                     // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_IronCub_Stomp.A_IronCub_Stomp_C");
		return ptr;
	}


	void AN_StompDamage();
	void AN_StompKnockback();
	void ExecuteUbergraph_A_IronCub_Stomp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
