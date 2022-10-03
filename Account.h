#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include<string>
using namespace std;
class Account //ok
{
    string m_id;
    string m_pass;
    double m_money;
public:
    string getId(){return m_id;}
    string getPass(){return m_pass;}
    double getMoney(){return m_money;}

    void InitAccount(string id , string pass, double money);

    void addMoney(double money);

    void subMoney(double money);
};
#endif // ACCOUNT_H_INCLUDED