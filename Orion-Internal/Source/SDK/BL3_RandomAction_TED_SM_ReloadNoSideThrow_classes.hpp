#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RandomAction_TED_SM_ReloadNoSideThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RandomAction_TED_SM_ReloadNoSideThrow.RandomAction_TED_SM_ReloadNoSideThrow_C
// 0x0000 (0x0070 - 0x0070)
class URandomAction_TED_SM_ReloadNoSideThrow_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RandomAction_TED_SM_ReloadNoSideThrow.RandomAction_TED_SM_ReloadNoSideThrow_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
