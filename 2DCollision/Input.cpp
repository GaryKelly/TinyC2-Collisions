#include <Input.h>

Input::Input() 
{
	m_current = AABBTOAABB;
}
Input::~Input() {}

void Input::setCurrent(CollisionDetect a) {
	m_current = a;
}

Input::CollisionDetect Input::getCurrent() {
	return m_current;
}
