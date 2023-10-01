#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Customizable_Create_Character_Male_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Customizable_Create_Character_Male.Customizable_Create_Character_Male_C
// 0x0016 (0x0B70 - 0x0B5A)
class ACustomizable_Create_Character_Male_C : public ACustomizable_Create_Character_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B5A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Visual_FacialHair;                                        // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Customizable_Create_Character_Male.Customizable_Create_Character_Male_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Customizable_Create_Character_Male(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
