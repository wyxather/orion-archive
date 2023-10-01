#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Beastmaster_Enrage_Var1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Beastmaster_Enrage_Var1.A_Beastmaster_Enrage_Var1_C
// 0x0000 (0x0290 - 0x0290)
class UA_Beastmaster_Enrage_Var1_C : public UA_Beastmaster_Enrage_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Beastmaster_Enrage_Var1.A_Beastmaster_Enrage_Var1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
