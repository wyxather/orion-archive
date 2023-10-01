#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElevatorPole_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_ElevatorPole.IO_ElevatorPole_C
// 0x0008 (0x0730 - 0x0728)
class AIO_ElevatorPole_C : public ABP_IO_Switch_Parent_V1_C
{
public:
	class UStaticMeshComponent*                        SM_Button_Generic_Cylindrical_V1;                         // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_ElevatorPole.IO_ElevatorPole_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
