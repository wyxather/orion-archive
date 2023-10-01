#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VivoxCore.DeviceType
enum class EDeviceType : uint8_t
{
	NullDevice                     = 0,
	SpecificDevice                 = 1,
	DefaultSystemDevice            = 2,
	DefaultCommunicationDevice     = 3,
	DeviceType_MAX                 = 4
};


// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8_t
{
	InverseByDistance              = 0,
	LinearByDistance               = 1,
	ExponentialByDistance          = 2,
	EAudioFadeModel_MAX            = 3
};


// Enum VivoxCore.ChannelType
enum class EChannelType : uint8_t
{
	NonPositional                  = 0,
	Positional                     = 1,
	Echo                           = 2,
	ChannelType_MAX                = 3
};


// Enum VivoxCore.ConnectionState
enum class EConnectionState : uint8_t
{
	Disconnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Disconnecting                  = 3,
	ConnectionState_MAX            = 4
};


// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class EParticipantSpeakingUpdateRate : uint8_t
{
	StateChange                    = 0,
	Never                          = 1,
	Update1Hz                      = 2,
	Update5Hz                      = 3,
	Update10Hz                     = 4,
	ParticipantSpeakingUpdateRate_MAX = 5
};


// Enum VivoxCore.TransmissionMode
enum class ETransmissionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	All                            = 2,
	TransmissionMode_MAX           = 3
};


// Enum VivoxCore.SubscriptionReply
enum class ESubscriptionReply : uint8_t
{
	Allow                          = 0,
	Block                          = 1,
	SubscriptionReply_MAX          = 2
};


// Enum VivoxCore.SubscriptionMode
enum class ESubscriptionMode : uint8_t
{
	Accept                         = 0,
	Block                          = 1,
	Defer                          = 2,
	SubscriptionMode_MAX           = 3
};


// Enum VivoxCore.LoginState
enum class ELoginState : uint8_t
{
	LoggedOut                      = 0,
	LoggingIn                      = 1,
	LoggedIn                       = 2,
	LoggingOut                     = 3,
	LoginState_MAX                 = 4
};


// Enum VivoxCore.TTSMessageState
enum class ETTSMessageState : uint8_t
{
	Playing                        = 0,
	Enqueued                       = 1,
	TTSMessageState_MAX            = 2
};


// Enum VivoxCore.TTSDestination
enum class ETTSDestination : uint8_t
{
	Default                        = 0,
	RemoteTransmission             = 1,
	LocalPlayback                  = 2,
	RemoteTransmissionWithLocalPlayback = 3,
	QueuedRemoteTransmission       = 4,
	QueuedLocalPlayback            = 5,
	QueuedRemoteTransmissionWithLocalPlayback = 6,
	ScreenReader                   = 7,
	TTSDestination_MAX             = 8
};


// Enum VivoxCore.PresenceStatus
enum class EPresenceStatus : uint8_t
{
	Unavailable                    = 0,
	Available                      = 1,
	Chat                           = 2,
	DoNotDisturb                   = 3,
	Away                           = 4,
	ExtendedAway                   = 5,
	PresenceStatus_MAX             = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
