#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricWire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_ElectricWire.IO_ElectricWire_C.Init_WireScale
struct AIO_ElectricWire_C_Init_WireScale_Params
{
};

// Function IO_ElectricWire.IO_ElectricWire_C.Debug_ShowSplinePoints
struct AIO_ElectricWire_C_Debug_ShowSplinePoints_Params
{
};

// Function IO_ElectricWire.IO_ElectricWire_C.Init_GenerateWireSegments
struct AIO_ElectricWire_C_Init_GenerateWireSegments_Params
{
};

// Function IO_ElectricWire.IO_ElectricWire_C.UserConstructionScript
struct AIO_ElectricWire_C_UserConstructionScript_Params
{
};

// Function IO_ElectricWire.IO_ElectricWire_C.BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline
struct AIO_ElectricWire_C_BndEvt__ElementalInteraction_K2Node_ComponentBoundEvent_4_ElementalInteractionStartedEvent__DelegateSignature_IO_Combat_ElectricWireSpline_Params
{
	class UElementalInteractionData*                   State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInitialState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_2
struct AIO_ElectricWire_C___UserState_ElectricState_2_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricWire.IO_ElectricWire_C.__UserState_ElectricState_1
struct AIO_ElectricWire_C___UserState_ElectricState_1_Params
{
	bool                                               bFromLoad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_ElectricWire.IO_ElectricWire_C.ExecuteUbergraph_IO_ElectricWire
struct AIO_ElectricWire_C_ExecuteUbergraph_IO_ElectricWire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
