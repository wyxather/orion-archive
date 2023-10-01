#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagSpit_Backup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C
// 0x0008 (0x07E0 - 0x07D8)
class AProj_SkagSpit_Backup_C : public AProj_SkagSpit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C");
		return ptr;
	}


	void UserConstructionScript();
	void GbxAsyncRequest_Miss_C8453E1249B64FF3DDA2A7BD878B7E64(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_C8453E1249B64FF3DDA2A7BD878B7E64(const struct FHitResult& Result);
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnExplode();
	void ExecuteUbergraph_Proj_SkagSpit_Backup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
