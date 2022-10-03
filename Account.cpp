#include"Account.h"

 void Account::InitAccount(string id , string pass, double money)
    {
        m_id = id;
        m_pass = pass;
        m_money = money;
    }
     void Account::addMoney(double money)
    {
        m_money += money;
    }
    void Account::subMoney(double money)
    {
        m_money -= money;
    }