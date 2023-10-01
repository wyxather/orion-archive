#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PO_Can_Soda_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PO_Can_Soda_V2.PO_Can_Soda_V2_C
// 0x0000 (0x0488 - 0x0488)
class APO_Can_Soda_V2_C : public ABP_LightDestructible_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PO_Can_Soda_V2.PO_Can_Soda_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
