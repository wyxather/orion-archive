#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Engineer_Ward13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Engineer_Ward13.Character_Engineer_Ward13_C
// 0x0020 (0x0D20 - 0x0D00)
class ACharacter_Engineer_Ward13_C : public ACharacter_Crafter_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        POIObject_Wrench;                                         // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       Armor_SkeletalMesh_Preload;                               // 0x0D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Engineer_Ward13.Character_Engineer_Ward13_C");
		return ptr;
	}


	void UnhidePOIObject();
	void HidePOIObject();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Character_Engineer_Ward13(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
