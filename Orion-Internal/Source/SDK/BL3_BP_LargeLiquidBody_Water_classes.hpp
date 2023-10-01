#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LargeLiquidBody_Water_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeLiquidBody_Water.BP_LargeLiquidBody_Water_C
// 0x0000 (0x0558 - 0x0558)
class ABP_LargeLiquidBody_Water_C : public ALargeLiquidBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeLiquidBody_Water.BP_LargeLiquidBody_Water_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
