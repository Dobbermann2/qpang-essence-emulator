#ifndef GC_PVE_DIE_NPC_HPP
#define GC_PVE_DIE_NPC_HPP

#include "game_net_event.hpp"


class GCPvEDieNpc : public GameNetEvent
{
	typedef NetEvent Parent;
public:
	GCPvEDieNpc() : GameNetEvent{ GC_PVE_DIE_NPC, NetEvent::GuaranteeType::GuaranteedOrdered, NetEvent::DirAny } {};;

	U32 NPCId;

	void pack(EventConnection* conn, BitStream* bstream) 
	{
		bstream->write(NPCId);
	};
	void unpack(EventConnection* conn, BitStream* bstream) {};
	void process(EventConnection* ps) {};

	TNL_DECLARE_CLASS(GCPvEDieNpc);
};

#endif // !GC_ARRANGED_ACCEPT_HPP