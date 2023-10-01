#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenuStandIn_TyphonLog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPMenuStandIn_TyphonLog.BPMenuStandIn_TyphonLog_C
// 0x0008 (0x0468 - 0x0460)
class ABPMenuStandIn_TyphonLog_C : public AGenericStandInActor
{
public:
	class UStaticMeshComponent*                        SM_FX_TyphonLogo_Inner_Combined;                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPMenuStandIn_TyphonLog.BPMenuStandIn_TyphonLog_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
