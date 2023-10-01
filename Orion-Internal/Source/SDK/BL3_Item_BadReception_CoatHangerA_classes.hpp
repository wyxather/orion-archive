#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Item_BadReception_CoatHangerA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_BadReception_CoatHangerA.Item_BadReception_CoatHangerA_C
// 0x0008 (0x05C0 - 0x05B8)
class AItem_BadReception_CoatHangerA_C : public ABP_OakMissionItem_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_BadReception_CoatHangerA.Item_BadReception_CoatHangerA_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
