#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DA_MissionUsable_Invisible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_MissionUsable_Invisible.DA_MissionUsable_Invisible_C
// 0x0010 (0x0040 - 0x0030)
class UDA_MissionUsable_Invisible_C : public UGbxDataAssetBlueprintable
{
public:
	class UWwiseEvent*                                 Audio;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX;                                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_MissionUsable_Invisible.DA_MissionUsable_Invisible_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
