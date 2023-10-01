#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_ForceGrasp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_PhaseLock_ForceGrasp.ControlledMove_PhaseLock_ForceGrasp_C
// 0x0000 (0x0B60 - 0x0B60)
class UControlledMove_PhaseLock_ForceGrasp_C : public UControlledMove_PhaseLock_WebGrasp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_ForceGrasp.ControlledMove_PhaseLock_ForceGrasp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
