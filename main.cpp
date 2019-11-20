//Unit 1 Assignment: Austin_Montez, Dr.T
//10-15-2019
#include "Physics_Calculator_Austin_Montez.h"

int main() 
{
  int option = 0;

  do
  {
    showMenu();
    cout << "\nPlease enter an option: ";
    option = validateInt(option);
    handleOption(option);
  }while(option != 7);
  cout << "\nGoodbye. " << endl;
  return 0;
}