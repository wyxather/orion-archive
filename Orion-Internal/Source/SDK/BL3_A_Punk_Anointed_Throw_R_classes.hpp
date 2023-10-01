#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Throw_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C
// 0x0018 (0x0230 - 0x0218)
class UA_Punk_Anointed_Throw_R_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AProj_PunkAnointed_EnergyBall_C*             NewVar_1;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Punk_Anointed_Throw_R.A_Punk_Anointed_Throw_R_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnAnimEnd(class AActor** Actor);
	void Throw();
	void ExecuteUbergraph_A_Punk_Anointed_Throw_R(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
