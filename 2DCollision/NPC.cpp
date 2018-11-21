#include <iostream>
#include <NPC.h>
#include <Idle.h>
#include <Debug.h>

NPC::NPC() : GameObject()
{
	m_player_fsm.setCurrent(new Idle());
	m_player_fsm.setPrevious(new Idle());
}

NPC::NPC(const AnimatedSprite& s) : GameObject(s)
{
	m_player_fsm.setCurrent(new Idle());
	m_player_fsm.setPrevious(new Idle());
}

NPC::~NPC()
{
}

AnimatedSprite& NPC::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void NPC::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::CollisionDetect::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_player_fsm.idle();
		break;
	case Input::CollisionDetect::UP:
		//std::cout << "Player Up" << std::endl;
		m_player_fsm.climbing();
		break;
	case Input::CollisionDetect::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_player_fsm.jumping();
		break;
	case Input::CollisionDetect::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_player_fsm.jumping();
		break;
	default:
		break;
	}
}

void NPC::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}