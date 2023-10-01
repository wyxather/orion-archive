#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenu_FrontEndMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenu_FrontEndMenu.BPMenu_FrontEndMenu_C
// 0x0000 (0x0730 - 0x0730)
class UBPMenu_FrontEndMenu_C : public UGFxFrontendMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenu_FrontEndMenu.BPMenu_FrontEndMenu_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
