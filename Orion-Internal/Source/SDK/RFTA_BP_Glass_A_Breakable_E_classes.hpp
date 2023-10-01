#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Glass_A_Breakable_E_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Glass_A_Breakable_E.BP_Glass_A_Breakable_E_C
// 0x0008 (0x0570 - 0x0568)
class ABP_Glass_A_Breakable_E_C : public ABP_Glass_A_Breakable_D_C
{
public:
	class UParticleSystemComponent*                    P_Destruction_Window_Glass;                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Glass_A_Breakable_E.BP_Glass_A_Breakable_E_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
