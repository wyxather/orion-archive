#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADodge_Spiderant_Grenade_Moving_BL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADodge_Spiderant_Grenade_Moving_BL.ADodge_Spiderant_Grenade_Moving_BL_C
// 0x0000 (0x0218 - 0x0218)
class UADodge_Spiderant_Grenade_Moving_BL_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ADodge_Spiderant_Grenade_Moving_BL.ADodge_Spiderant_Grenade_Moving_BL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
