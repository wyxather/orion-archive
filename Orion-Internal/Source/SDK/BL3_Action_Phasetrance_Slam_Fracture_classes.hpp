#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_Slam_Fracture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C
// 0x000F (0x02C8 - 0x02B9)
class UAction_Phasetrance_Slam_Fracture_C : public UAction_Phasetrance_Common_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_Slam_Fracture.Action_Phasetrance_Slam_Fracture_C");
		return ptr;
	}


	void AN_CreateCastProjectile();
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnBeginBringUpWeapon(class AActor** Actor);
	void AN_PerformSlamFractureRumble();
	void AN_PerformSlamFractureCS_Start();
	void AN_PerformSlamFractureCS_Quake();
	void AN_PerformSlamFractureFB_Server();
	void ExecuteUbergraph_Action_Phasetrance_Slam_Fracture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
