#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SmartObject_TannisKeyTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C
// 0x0050 (0x04B8 - 0x0468)
class ASmartObject_TannisKeyTable_C : public ASmartObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Ep03_VaultMap;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_FX_VaultMapHolo_TravelPaths_Sockets;                   // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Vault_Key;                                             // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            LookAtSocket;                                             // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Panel_Metal_Hull_Square;                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         AIUseSlot;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_MetalCrate_Short_v2;                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    HideKey;                                                  // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmartObject_TannisKeyTable.SmartObject_TannisKeyTable_C");
		return ptr;
	}


	void UserConstructionScript();
	void TurnOnKey();
	void HideKey_Event();
	void ExecuteUbergraph_SmartObject_TannisKeyTable(int EntryPoint);
	void HideKey__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
