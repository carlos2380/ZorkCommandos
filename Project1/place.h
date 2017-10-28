#ifndef __Place__
#define __Place__

#include "entity.h"
class Place :
	public Entity
{
public:
	Place();
	~Place();
	Place(const char* name, const char* description, const char* descriptionPlayer, int visibility, bool accessible);

	bool IsVisited();
	void SetVisited(bool visited);
	int GetVisibility();
	bool IsAccessible();
	void SetAccessible(bool accessible);
	string GetDesciptionPlayer();
private:
	bool visited;
	int visibility;
	bool accessible;
	//Description when player is in this place
	string descriptionPlayer;
};

#endif