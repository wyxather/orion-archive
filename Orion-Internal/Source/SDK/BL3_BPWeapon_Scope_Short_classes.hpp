#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_Scope_Short_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapon_Scope_Short.BPWeapon_Scope_Short_C
// 0x0008 (0x03F8 - 0x03F0)
class UBPWeapon_Scope_Short_C : public UWeaponScopeComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_Scope_Short.BPWeapon_Scope_Short_C");
		return ptr;
	}


	void ExecuteUbergraph_BPWeapon_Scope_Short(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
