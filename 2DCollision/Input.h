#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		UP,
		LEFT,
		RIGHT
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif