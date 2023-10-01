#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_Maya_PhaseLock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ControlledMove_Maya_PhaseLock.ControlledMove_Maya_PhaseLock_C
// 0x0000 (0x0AE4 - 0x0AE4)
class UControlledMove_Maya_PhaseLock_C : public UControlledMove_PhaseLock_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Maya_PhaseLock.ControlledMove_Maya_PhaseLock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
