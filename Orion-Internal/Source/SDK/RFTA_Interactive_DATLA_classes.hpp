#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_DATLA.Interactive_DATLA_C
// 0x001C (0x04C0 - 0x04A4)
class AInteractive_DATLA_C : public ABP_Computer_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AInteractive_DragonCrystal_C*                Dragon_Crystal;                                           // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInteractive_DATLA_KeyBox_C*                 Key_Box;                                                  // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_DATLA.Interactive_DATLA_C");
		return ptr;
	}


	void IsLocked(bool* Out);
	void Initialize_Crystal();
	void IsInitialized(bool* Bool);
	void ReceiveBeginPlay();
	void ActivateCrystal();
	void ExecuteUbergraph_Interactive_DATLA(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
