#pragma once
#include "GameEntity.h"

class Floor:
	public GameEntity
{
public:
	Floor();
	~Floor();

protected:
	virtual void Render_Internal(Gdiplus::Graphics& canvas, const CRect& clientRect);
};

