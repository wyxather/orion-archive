#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Bubble_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Bubble.Projectile_Bubble_C
// 0x0066 (0x07F0 - 0x078A)
class AProjectile_Bubble_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_BubbleBlaster_Proj;                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pattern4_NewTrack_0_917E912A45312630914DA49CB16FF351;     // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pattern4__Direction_917E912A45312630914DA49CB16FF351;     // 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pattern4;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pattern3_NewTrack_0_6FFF888F4CF7B9842964E7853200DA3D;     // 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pattern3__Direction_6FFF888F4CF7B9842964E7853200DA3D;     // 0x07B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pattern3;                                                 // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GravityScale_NewTrack_0_30FEE2454B3C85D7F663B4BDBB46EF8E; // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GravityScale__Direction_30FEE2454B3C85D7F663B4BDBB46EF8E; // 0x07C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GravityScale;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pattern2_NewTrack_0_32AA288C4B68540B5D4911A940102E19;     // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pattern2__Direction_32AA288C4B68540B5D4911A940102E19;     // 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pattern2;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Pattern1_NewTrack_0_9DE1BEE541C665244522D8A3FE3A792A;     // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Pattern1__Direction_9DE1BEE541C665244522D8A3FE3A792A;     // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Pattern1;                                                 // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Bubble.Projectile_Bubble_C");
		return ptr;
	}


	void UserConstructionScript();
	void Pattern1__FinishedFunc();
	void Pattern1__UpdateFunc();
	void Pattern2__FinishedFunc();
	void Pattern2__UpdateFunc();
	void GravityScale__FinishedFunc();
	void GravityScale__UpdateFunc();
	void Pattern3__FinishedFunc();
	void Pattern3__UpdateFunc();
	void Pattern4__FinishedFunc();
	void Pattern4__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Projectile_Bubble(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
