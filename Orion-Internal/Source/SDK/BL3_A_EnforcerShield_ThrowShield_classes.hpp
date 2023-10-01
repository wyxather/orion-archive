#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_EnforcerShield_ThrowShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C
// 0x0008 (0x0220 - 0x0218)
class UA_EnforcerShield_ThrowShield_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_EnforcerShield_ThrowShield.A_EnforcerShield_ThrowShield_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void Notify_ShieldThrow();
	void Notify_TransformToGun();
	void ExecuteUbergraph_A_EnforcerShield_ThrowShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
