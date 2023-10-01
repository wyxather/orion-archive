#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Tink_SG_FireStaggerBack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Tink_SG_FireStaggerBack.A_Tink_SG_FireStaggerBack_C
// 0x0008 (0x0220 - 0x0218)
class UA_Tink_SG_FireStaggerBack_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Tink_SG_FireStaggerBack.A_Tink_SG_FireStaggerBack_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_A_Tink_SG_FireStaggerBack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
