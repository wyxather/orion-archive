#pragma once

#include "Class.h"

class UserCmd;

class GlobalVars
{
public:
	INCONSTRUCTIBLE(GlobalVars);

	static void serverTime(const UserCmd& cmd) noexcept;
	[[nodiscard]] float serverTime() const noexcept;

	// Absolute time (per frame still - Use Plat_FloatTime() for a high precision real time 
	// perf clock, but not that it doesn't obey host_timescale/host_framerate).
	float realTime; //0x0000
	// Absolute frame counter - continues to increase even if game is paused.
	int32_t frameCount; //0x0004
	// Non-paused frametime
	float absoluteFrameTime; //0x0008
	float absoluteFrameStartTimeStdDev; //0x000C
	// Current time 
	//
	// On the client, this (along with tickcount) takes a different meaning based on what
	// piece of code you're in:
	// 
	//   - While receiving network packets (like in PreDataUpdate/PostDataUpdate and proxies),
	//     this is set to the SERVER TICKCOUNT for that packet. There is no interval between
	//     the server ticks.
	//     [server_current_Tick * tick_interval]
	//
	//   - While rendering, this is the exact client clock 
	//     [client_current_tick * tick_interval + interpolation_amount]
	//
	//   - During prediction, this is based on the client's current tick:
	//     [client_current_tick * tick_interval]
	float currentTime; //0x0010
	// Time spent on last server or client frame (has nothing to do with think intervals)
	float frameTime; //0x0014
	// current maxplayers setting
	int32_t maxClients; //0x0018
	// Simulation ticks - does not increase when game is paused
	int32_t tickCount; //0x001C
	// Simulation tick interval
	float intervalPerTick; //0x0020
	// interpolation amount ( client-only ) based on fraction of next tick which has elapsed
	float interpolationAmount; //0x0024
	int32_t simTicksThisFrame; //0x0028
	int32_t networkProtocol; //0x002C
	// current saverestore data
	char(*saveData)[4]; //0x0030
	// Set to true in client code.
	bool isClient; //0x0034
	// true if we are a remote clinet (needs prediction & interpolation - server not on this machine) as opposed to split-screen or local
	bool isRemoteClient; //0x0035
	char pad_0036[2]; //0x0036
	// 100 (i.e., tickcount is rounded down to this base and then the "delta" from this base is networked
	int32_t timestampNetworkingBase; //0x0038
	// 32 (entindex() % nTimestampRandomizeWindow ) is subtracted from gpGlobals->tickcount to set the networking basis, prevents
   // all of the entities from forcing a new PackedEntity on the same tick (i.e., prevents them from getting lockstepped on this)
	int32_t timestampRandomizeWindow; //0x003C

}; //Size: 0x0040
static_assert(sizeof(GlobalVars) == 0x40);