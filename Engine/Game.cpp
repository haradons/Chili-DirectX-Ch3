/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	int x = 400;
	int y = 300;
	int r = 255;
	int g = 255;
	int b = 255;

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		if (wnd.kbd.KeyIsPressed(VK_LEFT))
		{
			x = x - 200;
		}
		else if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		{
			x = x + 200;
		}
		y = y - 150;
	}
	else if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		if (wnd.kbd.KeyIsPressed(VK_LEFT))
		{
			x = x - 200;
		}
		else if (wnd.kbd.KeyIsPressed(VK_RIGHT))
		{
			x = x + 200;
		}
		y = y + 150;
	}
	else if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		x = x - 200;
	}
	else if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		x = x + 200;
	}

	if (wnd.kbd.KeyIsPressed('1'))
	{
		b = b - 255;
		g = g - 255;
	}
	if (wnd.kbd.KeyIsPressed('2'))
	{
		r = r - 255;
		g = g - 255;
	}
	if (wnd.kbd.KeyIsPressed('3'))
	{
		r = r - 255;
		b = b - 255;
	}
	if (wnd.kbd.KeyIsPressed('4'))
	{
		b = b - 255;
	}
	if (wnd.kbd.KeyIsPressed('5'))
	{
		g = g - 255;
	}
	if (wnd.kbd.KeyIsPressed('6'))
	{
		r = r - 255;

	}
	if (wnd.kbd.KeyIsPressed('7'))
	{
		r = r - 61;
		b = b - 122;
		g = g - 183;
	}
	if (wnd.kbd.KeyIsPressed('8'))
	{
		r = r - 122;
		b = b - 183;
		g = g - 61;
	}
	if (wnd.kbd.KeyIsPressed('9'))
	{
		r = r - 183;
		b = b - 61;
		g = g - 122;
	}
	if (wnd.kbd.KeyIsPressed('0'))
	{
		r = r - 122;
		b = b - 61;
		g = g - 183;
	}

	if (wnd.kbd.KeyIsPressed(VK_CONTROL))
	{
		gfx.PutPixel(-3 + x, 3 + y, r, g, b);
		gfx.PutPixel(-4 + x, 4 + y, r, g, b);
		gfx.PutPixel(-5 + x, 5 + y, r, g, b);
		gfx.PutPixel(3 + x, -3 + y, r, g, b);
		gfx.PutPixel(4 + x, -4 + y, r, g, b);
		gfx.PutPixel(5 + x, -5 + y, r, g, b);
		gfx.PutPixel(-3 + x, -3 + y, r, g, b);
		gfx.PutPixel(-4 + x, -4 + y, r, g, b);
		gfx.PutPixel(-5 + x, -5 + y, r, g, b);
		gfx.PutPixel(3 + x, 3 + y, r, g, b);
		gfx.PutPixel(4 + x, 4 + y, r, g, b);
		gfx.PutPixel(5 + x, 5 + y, r, g, b);
	}
	else
	{
		gfx.PutPixel(-3 + x, y, r, g, b);
		gfx.PutPixel(-4 + x, y, r, g, b);
		gfx.PutPixel(-5 + x, y, r, g, b);
		gfx.PutPixel(3 + x, y, r, g, b);
		gfx.PutPixel(4 + x, y, r, g, b);
		gfx.PutPixel(5 + x, y, r, g, b);
		gfx.PutPixel(x, -3 + y, r, g, b);
		gfx.PutPixel(x, -4 + y, r, g, b);
		gfx.PutPixel(x, -5 + y, r, g, b);
		gfx.PutPixel(x, 3 + y, r, g, b);
		gfx.PutPixel(x, 4 + y, r, g, b);
		gfx.PutPixel(x, 5 + y, r, g, b);
	}
}
