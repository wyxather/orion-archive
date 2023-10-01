#pragma once

enum class MoveType
{
	NONE,		// Freezes the entity, outside sources can't move it.
	ISOMETRIC,	// For players in TF2 commander view etc. Do not use this for normal players!
	WALK,		// Default player (client) move type.
	STEP,		// NPC movement
	FLY,		// Fly with no gravity.
	FLYGRAVITY,	// Fly with gravity.
	VPHYSICS,	// Physics movetype (prop models etc.)
	PUSH,		// No clip to world, but pushes and crushes things.
	NOCLIP,		// Noclip, behaves exactly the same as console command.
	LADDER,		// For players, when moving on a ladder.
	OBSERVER,	// Spectator movetype. DO NOT use this to make player spectate.
	CUSTOM		// Custom movetype, can be applied to the player to prevent the default movement code from running, while still calling the related hooks.
};