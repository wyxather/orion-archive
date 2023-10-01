#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ATL_Emissive_Common_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ATL_Emissive_Common.BP_ATL_Emissive_Common_C
// 0x0000 (0x0098 - 0x0098)
class UBP_ATL_Emissive_Common_C : public UBP_ATL_Emissive_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ATL_Emissive_Common.BP_ATL_Emissive_Common_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
