#pragma once
#include <vector>
#include <iostream>

class Figures
{
private :
	int numberOfSides;
	float height;
	std::vector<float> sides;
public:
	
	Figures(int numberOfSides, int height)
	{
		this->height = height;
		this->numberOfSides = numberOfSides;
	}

	Figures(int numberOfSides , std::vector<float> sides,int height)
	{
		this->numberOfSides = numberOfSides;
		if (!SetSides(sides))
		{
			throw std::runtime_error("Eroored sides");
		}
		this->sides = sides;
		this->height = height;
	}

	std::vector<float> GetSides() { return  sides; }
	bool SetHeight(float height)
	{
		if (height > 0)
		{
			this->height = height;
			return true;
		}
	}
	bool SetHeight(float height)
	{
		if (height > 0)
		{
			this->height = height;
			return true;
		}
	}
	bool SetSides(std::vector<float> sides)
	{ 
		if (sides.size() == numberOfSides)
		{
			for (std::vector<float>::iterator it = sides.begin(); it != sides.end(); it++)
			{
				if ((*it) <= 0)
					return false;
			}
			this->sides = sides;
			return true;
		}
		return false;
	}
	bool AddSide(float side)
	{
		if (sides.size() <= numberOfSides && side > 0)
		{
			this->sides.push_back(side);
			return true;
		}
		return false;
	}
	virtual  float AreaSize() = 0;
	virtual float CircuitSize() = 0;
	void Information()
	{
		for (std::vector<float>::iterator it = sides.begin(); it != sides.end(); it++)
		{
			std::cout << "Bok :" << (*it);
		}
		std::cout << "Pole powierzchni" << AreaSize();
		std::cout << "Obwód " << CircuitSize();
	}
};

