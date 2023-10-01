#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_EnforcerShield_GrenadeThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C
// 0x0010 (0x0248 - 0x0238)
class UARAnim_EnforcerShield_GrenadeThrow_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_EnforcerShield_GrenadeThrow.ARAnim_EnforcerShield_GrenadeThrow_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Grenade_Begin();
	void Grenade_End();
	void Grenade_Abort();
	void ExecuteUbergraph_ARAnim_EnforcerShield_GrenadeThrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
