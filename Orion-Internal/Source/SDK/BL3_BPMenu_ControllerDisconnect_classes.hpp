#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_ControllerDisconnect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_ControllerDisconnect.BPMenu_ControllerDisconnect_C
// 0x0000 (0x0530 - 0x0530)
class UBPMenu_ControllerDisconnect_C : public UGFxControllerDisconnectMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_ControllerDisconnect.BPMenu_ControllerDisconnect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
