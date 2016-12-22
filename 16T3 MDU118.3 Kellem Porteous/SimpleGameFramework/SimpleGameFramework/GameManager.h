#pragma once

#include "GameFramework.h"
#include "GameEntity.h"
#include "Floor.h"

class GameManager
{
public:
	static GameManager& Instance();

	/** BeginPlay is called when the game first launches. It is only called once per launch. */
	void BeginPlay();

	/** EndPlay is called when the game is closing down. It is only called once and only on exit. */
	void EndPlay();

	/**
	 * Update is called every frame. Update is always called before render
	 *
	 * @param deltaTime The time in seconds since Update was last called.
	 */
	void Update(double deltaTime);

	/**
	 * Render is called every frame after Update is called. All drawing must happen in render.
	 *
	 * @param [in,out] canvas The canvas.
	 * @param clientRect	  The rectangle representing the drawable area.
	 */
	void Render(Gdiplus::Graphics& canvas, const CRect& clientRect);

public:
	int floorSize = 64;
	int gridSize = 117;
	int widthScreen = 800;
	int heightScreen = 600;

private:
	GameManager();
	~GameManager();

	//these are the lists that the classes are pushed back to
	std::vector<GameEntity*> objects;
	std::vector<GameEntity*> listObjects;
	std::vector<Floor*> floorObject;


};

/**
 * Retrieves the GameManagerInstance for the game.
 *
 * @return The game manager instance
 */
#define GameManagerInstance (GameManager::Instance())
