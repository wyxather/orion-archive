#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Bleeding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DOT_Bleeding.Action_DOT_Bleeding_C
// 0x0013 (0x0300 - 0x02ED)
class UAction_DOT_Bleeding_C : public UAction_DOT_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DamageScalar;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthRegenMod;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Bleeding.Action_DOT_Bleeding_C");
		return ptr;
	}


	bool Get_Tag(struct FName* Tag);
	void GetDamageScalar(float* Out);
	void UpdateDamageScalar();
	void OnActionStart();
	void OnStateChange_Event_1(struct FName* StateName, struct FName* PreviousStateName);
	void OnComputeStats();
	void ExecuteUbergraph_Action_DOT_Bleeding(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
