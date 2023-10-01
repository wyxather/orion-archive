#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_Talk_GenVar3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Tannis_Talk_GenVar3.Action_Tannis_Talk_GenVar3_C
// 0x0000 (0x0218 - 0x0218)
class UAction_Tannis_Talk_GenVar3_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Tannis_Talk_GenVar3.Action_Tannis_Talk_GenVar3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
