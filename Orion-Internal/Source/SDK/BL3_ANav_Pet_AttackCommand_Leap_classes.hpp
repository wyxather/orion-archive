#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Pet_AttackCommand_Leap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C
// 0x0010 (0x02F8 - 0x02E8)
class UANav_Pet_AttackCommand_Leap_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      NewPet;                                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_Pet_AttackCommand_Leap.ANav_Pet_AttackCommand_Leap_C");
		return ptr;
	}


	void Notify_Landed();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_ANav_Pet_AttackCommand_Leap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
