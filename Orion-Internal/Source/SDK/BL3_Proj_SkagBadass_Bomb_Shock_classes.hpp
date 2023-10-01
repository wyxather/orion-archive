#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagBadass_Bomb_Shock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SkagBadass_Bomb_Shock.Proj_SkagBadass_Bomb_Shock_C
// 0x0010 (0x0788 - 0x0778)
class AProj_SkagBadass_Bomb_Shock_C : public AProj_SkagBadass_Bomb_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio_1;                                             // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SkagBadass_Bomb_Shock.Proj_SkagBadass_Bomb_Shock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_SkagBadass_Bomb_Shock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
