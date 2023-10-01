#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_TinkBadass_ThrowGrenadeRandom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C
// 0x0008 (0x0258 - 0x0250)
class UA_TinkBadass_ThrowGrenadeRandom_C : public UARandom_Tink_ThrowGrenade_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_TinkBadass_ThrowGrenadeRandom.A_TinkBadass_ThrowGrenadeRandom_C");
		return ptr;
	}


	void Throw();
	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_TinkBadass_ThrowGrenadeRandom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
