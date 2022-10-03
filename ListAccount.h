#ifndef LISTACCOUNT_H_INCLUDED
#define LISTACCOUNT_H_INCLUDED

#include"Account.h"
#include<string>
using namespace std;

struct Node //ok
{
    Account acc;
    Node* next;
};

class ListAccount
{
    Node* m_head;
    Node* m_tail;
public:
    Node* getHead(){return m_head;}
    ListAccount();

    void AddList(string id, string pass, double money);

    Node* checkLogin(string id, string pass);

};
#endif // LISTACCOUNT_H_INCLUDED