#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPHeatComponent_CoV_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPHeatComponent_CoV.BPHeatComponent_CoV_C
// 0x0010 (0x02A0 - 0x0290)
class UBPHeatComponent_CoV_C : public UWeaponCOVHeatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class ABPWeap_COV_BaseWeapon_C*                    COVBaseWeapon;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPHeatComponent_CoV.BPHeatComponent_CoV_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnStartOverheat();
	void ExecuteUbergraph_BPHeatComponent_CoV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
