#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_ChallengePOI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C
// 0x0010 (0x0620 - 0x0610)
class ABP_ZoneMap_ChallengePOI_C : public AOakZoneMapChallengeIcon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneMap_ChallengePOI.BP_ZoneMap_ChallengePOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activate_POI();
	void ReceiveBeginPlay();
	void Begin_Zone_Map_Cursor_Over();
	void End_Zone_Map_Cursor_Over();
	void K2_OnChallengeUpdated();
	void ExecuteUbergraph_BP_ZoneMap_ChallengePOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
