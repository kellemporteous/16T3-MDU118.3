#pragma once
#include "GameEntity.h"

class HealthPickUp:
	public GameEntity
{
public:
	HealthPickUp();
	~HealthPickUp();

	int addHealth;
	int pickUpRange;

protected:
	virtual void SaveAsText_Internal(std::ostream& outputStream);
	virtual void LoadFromText_Internal(std::istream& inputStream);

	virtual void Render_Internal(Gdiplus::Graphics& canvas, const CRect& clientRect);
};

