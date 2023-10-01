#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_TauntTurretBuild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_Tink_TauntTurretBuild.ARandom_Tink_TauntTurretBuild_C
// 0x0008 (0x0250 - 0x0248)
class UARandom_Tink_TauntTurretBuild_C : public UARandom_Tink_Taunt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_Tink_TauntTurretBuild.ARandom_Tink_TauntTurretBuild_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_ARandom_Tink_TauntTurretBuild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
