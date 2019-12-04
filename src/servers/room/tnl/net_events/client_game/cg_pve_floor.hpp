#ifndef CG_PVE_FLOOR_H
#define CG_PVE_FLOOR_H

#include "game_net_event.hpp"
class CGPvEFloor : public GameNetEvent
{
	typedef NetEvent Parent;
public:

	CGPvEFloor() : GameNetEvent{ CG_PVE_FLOOR, NetEvent::GuaranteeType::GuaranteedOrdered, NetEvent::DirAny } {};

	U8 flag;

	void pack(EventConnection* conn, BitStream* bstream) {};
	void unpack(EventConnection* conn, BitStream* bstream)
	{
		bstream->read(&flag);
	};
	void process(EventConnection* ps) 
	{
		NET_POST_EVENT(ps);
	};

	TNL_DECLARE_CLASS(CGPvEFloor);
};
#endif