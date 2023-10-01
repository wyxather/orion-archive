#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Dahl_Signage_Bay24_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Dahl_Signage_Bay24.BP_Dahl_Signage_Bay24_C
// 0x0000 (0x04DF - 0x04DF)
class ABP_Dahl_Signage_Bay24_C : public ABP_DecalActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Dahl_Signage_Bay24.BP_Dahl_Signage_Bay24_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
