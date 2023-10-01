#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_EssenceGrasp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PhaseTrance_EssenceGrasp.Action_PhaseTrance_EssenceGrasp_C
// 0x0000 (0x0390 - 0x0390)
class UAction_PhaseTrance_EssenceGrasp_C : public UAction_PhaseTrance_Grasp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_EssenceGrasp.Action_PhaseTrance_EssenceGrasp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
