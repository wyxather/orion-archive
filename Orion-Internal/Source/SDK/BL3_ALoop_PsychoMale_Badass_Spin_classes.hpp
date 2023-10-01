#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALoop_PsychoMale_Badass_Spin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C
// 0x0020 (0x03D8 - 0x03B8)
class UALoop_PsychoMale_Badass_Spin_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    MySwirlFX;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MyTrailFX;                                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      MySelf;                                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALoop_PsychoMale_Badass_Spin.ALoop_PsychoMale_Badass_Spin_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void OnStop(class AActor** Actor);
	void Notify_SpinDamage();
	void ExecuteUbergraph_ALoop_PsychoMale_Badass_Spin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
