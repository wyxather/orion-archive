#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Turret_PatMk3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C
// 0x0010 (0x241D - 0x240D)
class ABPChar_Turret_PatMk3_C : public ABPChar_TedioreTurret_SMG_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x240D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2410(0x0008) (Transient, DuplicateTransient)
	int                                                ShotCounter;                                              // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LegendaryTurret;                                          // 0x241C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Fired(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPChar_Turret_PatMk3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
