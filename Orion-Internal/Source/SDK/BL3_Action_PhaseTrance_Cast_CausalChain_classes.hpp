#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_CausalChain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Cast_CausalChain.Action_PhaseTrance_Cast_CausalChain_C
// 0x00B8 (0x03A8 - 0x02F0)
class UAction_PhaseTrance_Cast_CausalChain_C : public UAction_PhaseTrance_Cast_Base_C
{
public:
	struct FEnvQueryParams                             HomingTargetsSearch;                                      // 0x02F0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Cast_CausalChain.Action_PhaseTrance_Cast_CausalChain_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
