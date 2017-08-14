#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "Vector3.h"

struct GameObject
{
	enum GAMEOBJECT_TYPE
	{
		GO_NONE = 0,
		GO_BALL,
		GO_CUBE,
		GO_SHIP,
		GO_ASTEROID,
		GO_BULLET,
		GO_ENEMY,
		GO_ENEMY_BULLET,
		GO_MISSILE,
		GO_POWERUP,
		GO_WALL,
		GO_PILLAR,

<<<<<<< HEAD
		//sp3 ^-^
		GO_TEST_ANIMATION,
=======
		//Game
		GO_BLOCK,

>>>>>>> f7cd84c1bcbea2eab787d5ef8ca8fb7ae830e12c
		GO_TOTAL, //must be last
	};


	enum BLOCK_TYPE
	{
		GO_GRASS,
		GO_GLASS,
		GO_WOOD,
		GO_METAL,
		GO_BTYPTOTAL,
	};

	BLOCK_TYPE Btype;

	GAMEOBJECT_TYPE type;
	Vector3 pos;
	Vector3 vel;
	Vector3 scale;
	Vector3 dir;
	float momentOfInertia;
	float angularVelocity;
	bool active;
	float mass;

	GameObject(GAMEOBJECT_TYPE typeValue = GO_BALL, BLOCK_TYPE Btyp = GO_GRASS);
	~GameObject();
};

#endif