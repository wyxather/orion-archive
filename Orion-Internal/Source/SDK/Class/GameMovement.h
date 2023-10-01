#pragma once

#include "Class.h"

class Entity;
class MoveData;

class GameMovement // IGameMovement
{
public:
	INCONSTRUCTIBLE(GameMovement);

	enum __vftable
	{
		// class IGameMovement
		_DTOR,
		ProcessMovement,
		Reset,
		StartTrackPredictionErrors,
		FinishTrackPredictionErrors,
		DiffPrint,
		GetPlayerMins,
		GetPlayerMaxs,
		GetPlayerViewOffset,
		IsMovingPlayerStuck,
		GetMovingPlayer,
		UnblockPusher,
		SetupMovementBounds,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::ProcessMovement, processMovement, __stdcall, void, (Entity* local, MoveData* data), (this, local, data));
	VIRTUAL_METHOD(__vftable::StartTrackPredictionErrors, startTrackPredictionErrors, __stdcall, void, (Entity* local), (this, local));
	VIRTUAL_METHOD(__vftable::FinishTrackPredictionErrors, finishTrackPredictionErrors, __stdcall, void, (Entity* local), (this, local));
};