// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ZoneMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_ZoneMap.BPI_ZoneMap_C.Activate POI
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_ZoneMap_C::Activate_POI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ZoneMap.BPI_ZoneMap_C.Activate POI");

	UBPI_ZoneMap_C_Activate_POI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_ZoneMap.BPI_ZoneMap_C.End Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_ZoneMap_C::End_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ZoneMap.BPI_ZoneMap_C.End Zone Map Cursor Over");

	UBPI_ZoneMap_C_End_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_ZoneMap.BPI_ZoneMap_C.Begin Zone Map Cursor Over
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_ZoneMap_C::Begin_Zone_Map_Cursor_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ZoneMap.BPI_ZoneMap_C.Begin Zone Map Cursor Over");

	UBPI_ZoneMap_C_Begin_Zone_Map_Cursor_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
