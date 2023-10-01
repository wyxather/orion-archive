#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_EridiumVortex_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted_EridiumVortex.IO_MissionScripted_EridiumVortex_C
// 0x0078 (0x0738 - 0x06C0)
class AIO_MissionScripted_EridiumVortex_C : public AIO_MissionScripted_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender;                                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HologramStartWipe;                                        // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_IO_EridiumVortex>                 MoonState;                                                // 0x06D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	class ABP_TimeOfDay_Pandora_Base_C*                PandoraTimeOfDay;                                         // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsAudibleInConvoy;                                        // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInDesert;                                        // 0x06E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInDesertBoss;                                    // 0x06E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInDesertVault;                                   // 0x06E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInMine;                                          // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInMotorcade;                                     // 0x06E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInMotorcadeFestival;                             // 0x06E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAudibleInMotorcadeInterior;                             // 0x06E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Pandora;                                                  // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Phaselock_Night;                                          // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator15;                           // 0x0708(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator3;                            // 0x0710(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator16;                           // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator9;                            // 0x0720(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator17;                           // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_MoonState_NewEnumerator10;                           // 0x0730(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted_EridiumVortex.IO_MissionScripted_EridiumVortex_C");
		return ptr;
	}


	void UserConstructionScript();
	void __UserState_MoonState_1(bool bFromLoad);
	void __UserState_MoonState_3(bool bFromLoad);
	void __UserState_MoonState_5(bool bFromLoad);
	void __UserState_MoonState_7(bool bFromLoad);
	void ReceiveBeginPlay();
	void __UserState_MoonState_2(bool bFromLoad);
	void __UserState_MoonState_4(bool bFromLoad);
	void __UserState_MoonState_6(bool bFromLoad);
	void ExecuteUbergraph_IO_MissionScripted_EridiumVortex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
