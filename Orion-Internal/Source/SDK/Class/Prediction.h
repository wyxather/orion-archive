#pragma once

#include "Class.h"

class Entity;
class MoveData;
class MoveHelper;
class UserCmd;

class Prediction { // CCSPrediction
public:
	INCONSTRUCTIBLE(Prediction);

	enum __vftable
	{
		// class IPrediction
		_DTOR,
		Init,
		Shutdown,
		Update,
		PreEntityPacketReceived,
		PostEntityPacketReceived,
		PostNetworkDataReceived,
		OnReceivedUncompressedPacket,
		GetViewOrigin,
		SetViewOrigin,
		GetViewAngles,
		SetViewAngles,
		GetLocalViewAngles,
		SetLocalViewAngles,
		InPrediction,
		IsFirstTimePredicted,
		GetLastAcknowledgedCommandNumber,
		GetIncomingPacketNumber,
		CheckMovingGround,
		RunCommand,
		SetupMove = 20,
		FinishMove,
		__vftable
	};

	VIRTUAL_METHOD(__vftable::SetupMove, setupMove, __stdcall, void, (Entity* local, UserCmd* cmd, MoveHelper* helper, MoveData* data), (this, local, cmd, helper, data));
	VIRTUAL_METHOD(__vftable::FinishMove, finishMove, __stdcall, void, (Entity* local, UserCmd* cmd, MoveData* data), (this, local, cmd, data));
};