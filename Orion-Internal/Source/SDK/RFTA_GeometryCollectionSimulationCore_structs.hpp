#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2
};


// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2
};


// Enum GeometryCollectionSimulationCore.EObjectTypeEnum
enum class EObjectTypeEnum : uint8_t
{
	Chaos_Object_Dynamic           = 0,
	Chaos_Object_Kinematic         = 1,
	Chaos_Object_Sleeping          = 2,
	Chaos_Max                      = 3
};


// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Cube            = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_LevelSet        = 2,
	Chaos_Max                      = 3
};


// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
