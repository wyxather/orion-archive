#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Skag_Shared_LeapAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_Skag_Shared_LeapAttack.ANav_Skag_Shared_LeapAttack_C
// 0x00B9 (0x03A1 - 0x02E8)
class UANav_Skag_Shared_LeapAttack_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UClass*>             ElementToDamageTypeMap;                                   // 0x02F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      SkagDamageType;                                           // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EOakElementalType, class UParticleSystem*>    ElementToScreenParticleLeap;                              // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EOakElementalType                                  myElement;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_Skag_Shared_LeapAttack.ANav_Skag_Shared_LeapAttack_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_Bite();
	void ExecuteUbergraph_ANav_Skag_Shared_LeapAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
