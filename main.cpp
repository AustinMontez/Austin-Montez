#include "Input_Validation_Extended.h"
#include "Ship_Game.h"
#include "Tic_tac_toe.h"
using namespace std;

void showMenu();

int main()
{
  int userOption = 0;

  do
  {
    showMenu();

    userOption = validateInt(userOption);
    if(userOption == 1)
    {
      playShip();
    }

    else if(userOption == 2)
    {
      ticTac();
    }
    else if(userOption ==4)
    {
      cout << "\033[2J\033[1;1H";
    }

    else
    {
      cout << "Invalid input, try again d00000d." << endl;
    }
  }while(userOption != 3);
  {
    cout << "C ya!" << endl;
  }
}
void showMenu()
{
  cout << "\nMENU" << endl;
  cout << "------------" << endl;
  cout << "1: Ship Game" << endl;
  cout << "2: Tic Tac Toe" << endl;
  cout << "3: Exit"  << endl;
  cout << "4: Clear Screen" << endl;
}