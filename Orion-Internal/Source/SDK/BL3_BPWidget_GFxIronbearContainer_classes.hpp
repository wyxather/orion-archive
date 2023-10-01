#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxIronbearContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxIronbearContainer.BPWidget_GFxIronbearContainer_C
// 0x0000 (0x0970 - 0x0970)
class UBPWidget_GFxIronbearContainer_C : public UGFxIronBearHUDWidgetContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxIronbearContainer.BPWidget_GFxIronbearContainer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
