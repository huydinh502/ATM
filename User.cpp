#include "User.h"
    bool User::Login(string id, string pass)
    {
        m_node = m_list.checkLogin(id, pass);
        if(m_node == NULL) return false;

        return true;
    }

    void User::CreatAccount(string id, string pass)
    {
        m_list.AddList(id,pass,0.0);

    }

    void User::Deposit (double money)
    {
        m_node->acc.addMoney(money);
    }

    void User::Withdraw(double money)
    {
         m_node->acc.subMoney(money);

    }