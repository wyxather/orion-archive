#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DistributedDIalog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DistributedDIalog.BP_DistributedDialog_C
// 0x0031 (0x0569 - 0x0538)
class ABP_DistributedDialog_C : public AWwiseAmbientSound
{
public:
	class UTextRenderComponent*                        Text;                                                     // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDialogNameTag*>                      NameTags;                                                 // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       DisplayText;                                              // 0x0550(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_First;                                                 // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DistributedDIalog.BP_DistributedDialog_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
