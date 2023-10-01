#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_Cast_Schism_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_Cast_Schism.Action_PhaseTrance_Cast_Schism_C
// 0x0000 (0x02F0 - 0x02F0)
class UAction_PhaseTrance_Cast_Schism_C : public UAction_PhaseTrance_Cast_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_Cast_Schism.Action_PhaseTrance_Cast_Schism_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
