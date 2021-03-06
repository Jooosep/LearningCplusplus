// TestGame.cpp : Defines the entry point for the console application.
//
#pragma once
#include <SFML/graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <Gui.hpp>
#include "Menu.hpp"
#include "Theme.hpp"
#include <fstream>
#include "SHA256hash.h"
#include "stdafx.h"
#include "Box2d/Box2D.h"
	
int login();
int registration();
int aggregation();
int lightningSimulation();

int main()
{
	lightningSimulation();

	while (true)
	{
		int res = login();
		if (res == 0)
		{
			if (registration() == 2)
			{
				return 3;
			}
			int res2 = login();
			if (res2 == 1)
			{
				aggregation();
				lightningSimulation();
			}
			else if (res2 == 2)
			{
				return 3;
			}
			else
			{
				if (registration() == 2)
				{
					return 3;
				}
			}
		}
		else if (res == 1)
		{
			aggregation();
			lightningSimulation();
		}
		else if (res == 2)
		{
			return 3;
		}
	}
}


