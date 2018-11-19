#ifndef PLAYER_FSM_H
#define PLAYER_FSM_H

class PlayerFSM
{

	// Please review very good article on Stackoverflow
	// which covers some solutions to circular dependacies
	// https://stackoverflow.com/questions/625799/resolve-build-errors-due-to-circular-dependency-amongst-classes

private:
	class State* m_current; // note order of m_current is 
							// prior to setCurrent
	class State* m_previous;
public:
	PlayerFSM();
	~PlayerFSM();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();
	
	void idle();
	void jumping();
	void climbing();

// Try uncommenting and comment the declaration above
//private:
//	class State* m_current;
};

#endif // !PLAYER_FSM_H
