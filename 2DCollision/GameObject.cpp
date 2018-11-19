#include <GameObject.h>
#include <Debug.h>

GameObject::GameObject() { }

GameObject::GameObject(const AnimatedSprite& as) : m_animated_sprite(as) { }

GameObject::~GameObject() { }