#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include"ListAccount.h"
class User
{
 ListAccount m_list;
  Node* m_node;
public:
    void setList(ListAccount value){m_list=value;}
    ListAccount getList(){return m_list;}

    Node* getAccount(){return m_node;} // dung de tinh toan tren

    bool Login(string id, string pass); //ok

    void CreatAccount(string id, string pass);


    void Deposit (double money);

    void Withdraw(double money);

};

#endif // USER_H_INCLUDED