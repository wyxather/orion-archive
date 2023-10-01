#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Root_Cloud_DOT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C
// 0x0033 (0x0320 - 0x02ED)
class UAction_Root_Cloud_DOT_C : public UAction_DOT_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Count;                                                    // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOverride;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                      Action;                                                   // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               RequiresLineOfSight;                                      // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	struct FVector                                     CloudOrigin;                                              // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ApplyTimeDilation;                                        // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              TimeDilation;                                             // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C");
		return ptr;
	}


	void CheckTag(bool* Out);
	void IsHostile(bool* Out);
	void IsPlayer(bool* Out);
	void IsBoss(bool* Out);
	void CanDoDamage(bool* Out);
	void Release();
	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Root_Cloud_DOT(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
