#pragma once
#include "Figury.h"
class Square :Figures
{
private:
	bool IsSameSide(std::vector<float> sides)
	{
		float side = *sides.begin();
		for (std::vector<float>::iterator it = sides.begin(); it != sides.end(); it++)
			if (side != *it)
				return false;
		return true;
	}
public:
	const int NUMBER_OF_SIDES = 4;
	Square(float side) :Figures(NUMBER_OF_SIDES, side)
	{
		std::vector<float> tmp;
		for (int i = 0; i < NUMBER_OF_SIDES; i++)
		{
			tmp.push_back(side);
		}
	}
	virtual  float AreaSize()
	{
		std::vector<float> sides = Figures::GetSides();
		return *sides.begin() * (*sides.begin());
	}

	bool SetSides(std::vector<float> sides)
	{
		if (Figures::SetSides(sides))
		{
			if (IsSameSide(sides))
			{
				return true;
			}
		}
		return false;
	}
	virtual float CircuitSize()
	{
		std::vector<float> sides = Figures::GetSides();
		float circuit = 0;
		if (sides.size() == NUMBER_OF_SIDES)
			for (std::vector<float>::iterator it = sides.begin(); it != sides.end(); it++)
			{
				circuit += (*it);
			}
		else
		{
			circuit = *sides.begin() * 4;
		}
		return circuit;
	}
};

