#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Multispawn_Waypoint_SpawnPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C
// 0x0020 (0x03A0 - 0x0380)
class AMultispawn_Waypoint_SpawnPoint_C : public ASpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Multispawn_Waypoint_C*                   OwnerRef;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    EventPossessedBy;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnPostSpawn(class AActor** Actor);
	void PossessedBy(class AController** NewController);
	void StartPreSpawn(class AActor** Actor);
	void ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint(int* EntryPoint);
	void EventPossessedBy__DelegateSignature(class AController** NewController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
