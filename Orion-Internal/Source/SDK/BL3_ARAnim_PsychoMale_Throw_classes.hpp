#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PsychoMale_Throw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C
// 0x0010 (0x0248 - 0x0238)
class UARAnim_PsychoMale_Throw_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_PsychoMale_Throw.ARAnim_PsychoMale_Throw_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Throw();
	void GetNewAxe();
	void ExecuteUbergraph_ARAnim_PsychoMale_Throw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
