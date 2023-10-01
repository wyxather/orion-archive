#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TimeOfDay_Pandora_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C
// 0x004C (0x0558 - 0x050C)
class ABP_TimeOfDay_Pandora_Base_C : public ABP_TimeOfDay_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Post_Vortex_Elpis_to_Pandora;                          // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Post_Vortex_Elpis_to_Nekro_Beam;                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Firehawk_Aurora;                                          // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Moon_Vortex_Phaselock_Beam;                            // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PhaseLockBeam;                                            // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<Enum_IO_EridiumVortex>                 MoonState;                                                // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	struct FVector                                     PhaseLockStart;                                           // 0x0544(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Elpis_DMI;                                                // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C");
		return ptr;
	}


	void GetWorldPhaseLockStart(struct FVector* World_Location);
	void Enable_Phase_Lock(bool Enabled);
	void SetMoonState(TEnumAsByte<Enum_IO_EridiumVortex> MoonState);
	void UserConstructionScript();
	void PostVortexMoon();
	void FireHawkMoon();
	void ExecuteUbergraph_BP_TimeOfDay_Pandora_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
