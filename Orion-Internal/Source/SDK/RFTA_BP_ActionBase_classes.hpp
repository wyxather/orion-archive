#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_ActionBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C
// 0x0000 (0x0228 - 0x0228)
class UBP_ActionBase_C : public UActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C");
		return ptr;
	}


	void SetAggroGroup(class ACharacterGunfire** Character);
	void SpawnActor(class UClass** Class, struct FTransform* InTransform);
	class ACharacterGunfire* SpawnCharacter(class UClass** Character, struct FTransform* Transform, struct FName* SpawnState, class AActor** Owner, class AActor** Target, float* Threat, bool* RandomizeHeading);
	void ScatterHorizontal(struct FVector* Location, float* RadiusMin, float* RadiusMax, float* HeadingMax, struct FVector* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
