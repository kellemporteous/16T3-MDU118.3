#include "stdafx.h"
#include "Player.h"


Player::Player():
	GameEntity()
{
	type = egetPlayer;
	location = Vector2i(1500, 1500);
	name = "Player1";
	rotation = 0.0f;
	xScale = 0.2f;
	yScale = 0.2f;
	imageName = "Player";
	health = 100;
	damage = 25;
	atkRange = 1;
	moveSpeed = 10;
}


Player::~Player()
{
}

Player& Player::playerInstance()
{
	static Player instance;

	return instance;
}


void Player::Render_Internal(Gdiplus::Graphics& canvas, const CRect& clientRect)
{
	ImageWrapper* imageplayer = GameFrameworkInstance.GetLoadedImage("Player");
	GameFrameworkInstance.DrawImage(canvas, location, imageplayer);
}

void Player::SaveAsText_Internal(std::ostream& outputStream)
{
	outputStream << "," << health;
	outputStream << "," << damage;
	outputStream << "," << atkRange;
	outputStream << "," << moveSpeed;
}
void Player::LoadFromText_Internal(std::istream& inputStream)
{
	char dummyChar;
	inputStream >> dummyChar >> health;
	inputStream >> dummyChar >> damage;
	inputStream >> dummyChar >> atkRange;
	inputStream >> dummyChar >> moveSpeed;
}
