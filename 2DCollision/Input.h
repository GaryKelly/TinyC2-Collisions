#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum CollisionDetect
	{
		AABBTOAABB,
		AABBTOCAPSULE,
		AABBTOPOLY,
		AABBTORAY,
		CIRCLETOAABB,
		CIRCLETOCIRCLE,
		CIRCLETORAY,
		CIRCLETOCAPSULE,
		CIRCLETOPOLY,
		RAYTOAABB,
		RAYTOCAPSULE,
		RAYTOCIRCLE,
		RAYTOPOLY
	};

	void setCurrent(CollisionDetect);
	CollisionDetect getCurrent();

private:
	CollisionDetect m_current;
};
#endif