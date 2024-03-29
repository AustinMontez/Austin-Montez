
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <cstdlib>
//#include "Input_Validation_Extended.h"
using namespace std;
//http://www.cppforschool.com/project/tic-tac-toe-project.html
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
void ticTac();

void ticTac()
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string color2 = "\x1b[" + to_string(34) + ";1m";
  string reset = "\x1b[0m";
	int player = 1,i,choice;
	char mark;
	cout << "\033[2J\033[1;1H";
	do
	{
		board();
		player=(player%2)?1:2;
		cout << color << "Player " << player << ", enter a number:  " << reset;
    choice = validateInt(choice);
		//cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
      mark = validateChar(mark);
			//getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";
    mark = validateChar(mark);
	//getch();
	}
/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
	         square[4] != '4' && square[5] != '5' && square[6] != '6' &&
            square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
   string color = "\x1b[" + to_string(32) + ";1m";
   string color2 = "\x1b[" + to_string(34) + ";1m";
   string reset = "\x1b[0m";

	cout << "\033[2J\033[1;1H"; //system("cls");
	cout << color << "\n\n\tTic Tac Toe\n\n" << reset << endl;

	cout << "Player 1 (X)  -  Player 2 (O)" << endl; 
	cout << endl;
	cout << color2 << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << reset << endl;
  cout << endl;
}

#endif

/*******************************************************************
				END OF PROJECT
********************************************************************/
