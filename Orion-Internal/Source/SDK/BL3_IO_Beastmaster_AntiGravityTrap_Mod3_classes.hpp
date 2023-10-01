#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Beastmaster_AntiGravityTrap_Mod3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C
// 0x0020 (0x07C8 - 0x07A8)
class AIO_Beastmaster_AntiGravityTrap_Mod3_C : public AIO_Beastmaster_AntiGravityTrap_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A8(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       TrapDuration;                                             // 0x07B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetTrapEndCondition();
	void ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
