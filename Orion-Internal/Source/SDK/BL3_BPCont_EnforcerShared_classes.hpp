#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_EnforcerShared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_EnforcerShared.BPCont_EnforcerShared_C
// 0x0000 (0x0771 - 0x0771)
class ABPCont_EnforcerShared_C : public ABPCont_Enemy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_EnforcerShared.BPCont_EnforcerShared_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
