#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_EnforcerShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AllowButtStagger
struct UBPI_EnforcerShared_C_Enforcer_AllowButtStagger_Params
{
	bool                                               AllowButtStagger;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown
struct UBPI_EnforcerShared_C_Enforcer_AnointedJoe_ShieldDown_Params
{
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI
struct UBPI_EnforcerShared_C_Enforcer_AnointedJoe_SpawnAI_Params
{
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_TransformToGun
struct UBPI_EnforcerShared_C_Enforcer_TransformToGun_Params
{
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_Anointed_Death
struct UBPI_EnforcerShared_C_Enforcer_Anointed_Death_Params
{
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_ForcedDirectionalStagger
struct UBPI_EnforcerShared_C_Enforcer_ForcedDirectionalStagger_Params
{
	struct FDamageReactionEventSummary                 DamageSummary;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_EnforcerShared.BPI_EnforcerShared_C.Enforcer_GetType
struct UBPI_EnforcerShared_C_Enforcer_GetType_Params
{
	TEnumAsByte<Enum_EnforcerVariants>                 EnforcerType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
