#ifndef GC_PVE_DESTROY_OBJECT_HPP
#define GC_PVE_DESTROY_OBJECT_HPP

#include "game_net_event.hpp"

class GCPvEDestroyObject : public GameNetEvent
{
	typedef NetEvent Parent;
public:
	GCPvEDestroyObject() : GameNetEvent{ GC_PVE_DESTROY_OBJECT, NetEvent::GuaranteeType::GuaranteedOrdered, NetEvent::DirAny } {};

	U32 playerId;

	void pack(EventConnection* conn, BitStream* bstream) 
	{
		bstream->write(playerId);
	};
	void unpack(EventConnection* conn, BitStream* bstream) {};
	void process(EventConnection* ps) {};

	TNL_DECLARE_CLASS(GCPvEDestroyObject);
};

#endif // !GC_ARRANGED_ACCEPT_HPP