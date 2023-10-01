#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SongOfSwords_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C
// 0x0011 (0x02D4 - 0x02C3)
class UAction_Mod_SongOfSwords_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              SongOfSwords_ModDamageMod;                                // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C");
		return ptr;
	}


	bool Check_Is_Friendly_(class AActor** Cause);
	void OnPostComputeStats();
	void ExecuteUbergraph_Action_Mod_SongOfSwords(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
