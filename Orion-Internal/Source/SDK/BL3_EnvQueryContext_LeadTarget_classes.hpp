#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_EnvQueryContext_LeadTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EnvQueryContext_LeadTarget.EnvQueryContext_LeadTarget_C
// 0x0000 (0x0038 - 0x0038)
class UEnvQueryContext_LeadTarget_C : public UEnvQueryContext_EnvQueryParam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnvQueryContext_LeadTarget.EnvQueryContext_LeadTarget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
