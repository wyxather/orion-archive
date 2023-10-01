#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AA_Gunner_Cheer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_Gunner_Cheer.AA_Gunner_Cheer_C
// 0x0000 (0x0218 - 0x0218)
class UAA_Gunner_Cheer_C : public UOakAction_Emote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AA_Gunner_Cheer.AA_Gunner_Cheer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
