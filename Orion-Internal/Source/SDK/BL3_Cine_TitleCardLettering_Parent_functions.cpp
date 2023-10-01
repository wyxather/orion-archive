// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Cine_TitleCardLettering_Parent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.CinematicStream
// (Public, BlueprintCallable, BlueprintEvent)

void ACine_TitleCardLettering_Parent_C::CinematicStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.CinematicStream");

	ACine_TitleCardLettering_Parent_C_CinematicStream_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACine_TitleCardLettering_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.UserConstructionScript");

	ACine_TitleCardLettering_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.StreamMe
// (BlueprintCallable, BlueprintEvent)

void ACine_TitleCardLettering_Parent_C::StreamMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.StreamMe");

	ACine_TitleCardLettering_Parent_C_StreamMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACine_TitleCardLettering_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.ReceiveBeginPlay");

	ACine_TitleCardLettering_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.ExecuteUbergraph_Cine_TitleCardLettering_Parent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACine_TitleCardLettering_Parent_C::ExecuteUbergraph_Cine_TitleCardLettering_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cine_TitleCardLettering_Parent.Cine_TitleCardLettering_Parent_C.ExecuteUbergraph_Cine_TitleCardLettering_Parent");

	ACine_TitleCardLettering_Parent_C_ExecuteUbergraph_Cine_TitleCardLettering_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
