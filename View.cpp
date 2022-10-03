#include"View.h"

  void View::welcome()
    {
        cout << "\t\t\tHi! Welcome to Mr. Huy's ATM Machine!\n\n";
    }
  void View::printIntroMenu()
    {
      // WRITE CODE HERE
        cout << "\t\tPlease select an option from the menu below:\n\n";
        cout << "l -> Login\n";
        cout << "c -> Create New Account\n";
        cout << "q -> Quit\n\n";
        cout << ">";
    }
 void View::printMainMenu()
    {
        cout << "d -> Deposit Money\n";
        cout << "w -> Withdraw Money\n";
        cout << "r -> Request Balance\n";
        cout << "q -> Quit\n\n";
        cout << ">";
    }