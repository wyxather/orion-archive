#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_PlayerShared_Skills_Confuse_FixedVersion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C
// 0x0018 (0x0180 - 0x0168)
class UCE_PlayerShared_Skills_Confuse_FixedVersion_C : public UCE_PlayerShared_Skills_Confuse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              AllChildActors;                                           // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_PlayerShared_Skills_Confuse_FixedVersion.CE_PlayerShared_Skills_Confuse_FixedVersion_C");
		return ptr;
	}


	void On_Confuse_Target_death(class AActor** DamageReceiver, class AActor** DamageCauser);
	void ExecuteUbergraph_CE_PlayerShared_Skills_Confuse_FixedVersion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
