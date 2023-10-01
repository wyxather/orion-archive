#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial.Tutorial_C
// 0x0031 (0x0061 - 0x0030)
class UTutorial_C : public UPrimaryDataAsset
{
public:
	TArray<struct FTutorialPage>                       Pages;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PersistenceKey;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionList*                              Conditions;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              Tutorials;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Left;                                                     // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial.Tutorial_C");
		return ptr;
	}


	void WriteKey(class AActor** Actor);
	void HasKey(class AActor** Actor, bool* Out);
	void Validate(class AActor** Actor, bool* Out);
	void Show(class APawn** Player, class AActor** Context, bool* ForceShow, bool* Shown);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
