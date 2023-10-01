#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_GFxMissionLogMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_GFxMissionLogMenu.BPMenu_GFxMissionLogMenu_C
// 0x0000 (0x09C0 - 0x09C0)
class UBPMenu_GFxMissionLogMenu_C : public UGFxMissionLogMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_GFxMissionLogMenu.BPMenu_GFxMissionLogMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
