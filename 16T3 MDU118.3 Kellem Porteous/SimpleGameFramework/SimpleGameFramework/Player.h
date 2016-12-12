#pragma once
#include "GameEntity.h"

class Player:
	public GameEntity
{
public:
	static Player& playerInstance();
	

	int health;
	int damage;
	int atkRange;
	int moveSpeed;

private:
	Player();
	virtual ~Player();

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);

	virtual void Render_Internal(Gdiplus::Graphics& canvas, const CRect& clientRect);

};
#define PlayerInstance (Player::playerInstance())

