#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_DATLA_KeyBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C
// 0x0017 (0x04C8 - 0x04B1)
class AInteractive_DATLA_KeyBox_C : public AInteractive_KeyBox_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedActorComponent*                        NamedActor;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_DATLA_KeyBox.Interactive_DATLA_KeyBox_C");
		return ptr;
	}


	bool CanUseItem(class APlayerControllerGunfire** PlayerController, class UClass** ItemClass);
	void Set_DATLA(class AInteractive_DATLA_C** DATLA);
	void KeyLightEvents();
	void Setup_ItemSocket();
	void IsLocked(bool* LockVar);
	void ReceiveBeginPlay();
	void On_Key_Used();
	void ExecuteUbergraph_Interactive_DATLA_KeyBox(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
