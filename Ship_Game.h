/*
    Sinking Ship Grame source: 
	http://pastebin.com/atfSSUef
	
	//Expanded by Dr. Tyson McMillan on 4-5-2014,10-24-2015
	//Expanded by: Rabia Ahmad_Austin Montez_Rafael Martinez
	//Date 10-17-19
	//Big Show Hint on Line 104
	
	Objective:
	1) Make this game more fun, visual (color), and validate input of the two integers. 
	2) In a mult-line comment below the program, state how this program works. 
	3) Expand upon the ways that you improved the grame. 
	4 How does the 10 by 10 matrix work
	5) How does one attack a ship in the 10 by 10 matrix? That is what characters represent what? 
*/
#ifndef SHIP_GAME_H
#define SHIP_GAME_H

#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>  
//#include "Input_Validation_Extended.h"
using namespace std;

const int rows = 10;
const int elements = 10;



int maxships = 10;

int matrix[rows][elements];

void Clear()
{
  
	for(int i=0; i < rows; i++)
	{
		for(int j=0; j < elements; j++)
		{
			matrix[i][j] = 0;

		}
	}
}

void Show()
{
  
	for(int i=0; i < rows; i++)
	{
		for(int j=0; j < elements; j++)
		{
			cout <<  matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int NumberOfShips()
{
	int c = 0;

	for(int i=0; i < rows; i++)
	{
		for(int j=0; j < elements; j++)
		{
			if(matrix[i][j] == 1)
				c++;
		}
	}

	return c;
}

void SetShips()
{
	int s = 0;
	while(s < maxships)
	{
		int x = rand() % rows;
		int y = rand() % elements;
		if(matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 1;
		}
	}
}

bool Attack(int x,int y)
{
	if(matrix[x][y] == 1)
	{
		matrix[x][y] = 2;
		return true;
	}
	return false;
}

void playShip()
{
  string color = "\x1b[" + to_string(32) + ";1m";
  string color2 = "\x1b[" + to_string(101) + ";1m";
  string reset = "\x1b[0m";
	srand(time(NULL));
	Clear();
  SetShips();
	int pos1,pos2;
	char prompt;
	while(1)
	{
		//Show the Board
		//Show(); 
		
		cout << color << "Please input location (x [space] y): " << reset; 
		//cin >> pos1 >> pos2;
    pos1 = validateInt(pos1);
    pos2 = validateInt(pos2);
		
		if(Attack(pos1,pos2))
			cout << color2 << "You got me! :)" << reset << endl;
		else
			cout << "Sorry no ship at that position!" << endl;
		cout << "Number of ships left: " << NumberOfShips() << endl;
		cout << "Do you want to surrender (y/n)? "; 
    prompt = validateChar(prompt);
		if(prompt == 'y')
			break;
	}
	cout << "Game over!" << endl;
	Show();

	}
#endif
// The program takes the unput from the user to attack or miss ships set at random at the start of the program.  The board sets the ships at random after each surrender not every hit or miss.  When the board was revealed we noticed that there were the number "2" was present, we were led to believe that the hit was true so it increased the value of the ship to two. 0 is where the ships (1) are not located.  Void clear is setting up the matrix and void show is showing the actual board after it has been set up. To win the game you must guess the correct integers that correspond to the battleships on the board. 