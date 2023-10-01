#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Husk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Husk.PD_Husk_C
// 0x0017 (0x0570 - 0x0559)
class APD_Husk_C : public ABP_LootableDestructible_C
{
public:
	TEnumAsByte<Enum_Husk>                             HuskMesh;                                                 // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x055A(0x0006) MISSED OFFSET
	TArray<class UDestructibleMesh*>                   RandomHusks;                                              // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Husk.PD_Husk_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
