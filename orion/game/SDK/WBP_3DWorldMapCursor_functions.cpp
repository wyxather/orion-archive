#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_3DWorldMapCursor.WBP_3DWorldMapCursor_C
// (None)

class UClass* UWBP_3DWorldMapCursor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_3DWorldMapCursor_C");

	return Clss;
}


// WBP_3DWorldMapCursor_C WBP_3DWorldMapCursor.Default__WBP_3DWorldMapCursor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_3DWorldMapCursor_C* UWBP_3DWorldMapCursor_C::GetDefaultObj()
{
	static class UWBP_3DWorldMapCursor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_3DWorldMapCursor_C*>(UWBP_3DWorldMapCursor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_3DWorldMapCursor.WBP_3DWorldMapCursor_C.MoveSursorToCenter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWBP_3DWorldMapCursor_C::MoveSursorToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_3DWorldMapCursor_C", "MoveSursorToCenter");

	Params::UWBP_3DWorldMapCursor_C_MoveSursorToCenter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


