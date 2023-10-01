// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Cinematic_Actor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cinematic_Actor.BP_Cinematic_Actor_C.Set Static Mesh 
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent**   MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematic_Actor_C::Set_Static_Mesh_(class UStaticMesh** StaticMesh, class UStaticMeshComponent** MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cinematic_Actor.BP_Cinematic_Actor_C.Set Static Mesh ");

	ABP_Cinematic_Actor_C_Set_Static_Mesh__Params params;
	params.StaticMesh = StaticMesh;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Cinematic_Actor.BP_Cinematic_Actor_C.Set Skeletal Mesh 
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          SkelMesh                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent** MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cinematic_Actor_C::Set_Skeletal_Mesh_(class USkeletalMesh** SkelMesh, class USkeletalMeshComponent** MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cinematic_Actor.BP_Cinematic_Actor_C.Set Skeletal Mesh ");

	ABP_Cinematic_Actor_C_Set_Skeletal_Mesh__Params params;
	params.SkelMesh = SkelMesh;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
