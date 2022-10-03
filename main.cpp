#include <iostream>
#include <stdlib.h> //exit(0)
#include <string> //string and getline
#include <string.h> //string and getline
#include <fstream>
#include <sstream> //convert string to number (int, float, double, vv..)

#include "Account.h" //class Account
#include "View.h" //class view
#include "ListAccount.h" // class ListAccount
#include "FileIO.h" //class FileIO
#include "User.h"
using namespace std;

int main()
{
    View view1;
    User user1; // trong user co listaccout (danh sach cac tai khoan)
    FileIO f;
    user1.setList(f.readFile()); // doc file txt va luu vao list trong user1

    string id, pass;
    double money;
    char userInput;


    view1.welcome();

    while(1)
    {
        view1.printIntroMenu();
        cin >> userInput;

        switch(userInput)
        {
        case 'l':
            system("cls");
            cout << "Please enter your user id: ";
            cin >> id;
            cout << "Please enter your password: ";
            cin >> pass;
            system("cls");

            if(user1.Login(id, pass))
            {
                cout <<"\t\tAccess Granted!\n\n";
                while(1)
                {
                    view1.printMainMenu();
                    cin >> userInput;
                    switch(userInput)
                    {
                    case 'd':
                        cout << "Amount of deposit: $";
                        cin >> money;
                        user1.Deposit(money);

                        cout<<'\n';
                        break;
                    case 'w':
                        cout << "Amount of withdrawal: $";
                        cin >> money;
                        user1.Withdraw(money);

                        cout<<'\n';
                        break;
                    case 'r':
                        cout << "Your balance is $"<< user1.getAccount()->acc.getMoney()<<"\n\n";
                        break;
                    case 'q':
                        f.writeFile(user1.getList());
                        cout << "Thanks for stopping by!\n";
                        exit(0);
                    break;
                    }
                }

            }

            cout <<"\n\n******** LOGIN FAILED! ********\n\n";

            break;
        case 'c':
            system("cls");
            cout << "Please enter your user name: ";
            cin >> id;

            cout << "Please enter your password: ";
            cin >> pass;

            system("cls");

            user1.CreatAccount(id, pass);
            cout <<"\t\tThank You! Your account has been created!\n\n";
            break;
        case 'q':
            f.writeFile(user1.getList());
            cout << "Thanks for stopping by!\n";
            exit(0);
        }
    }
    return 0;
}