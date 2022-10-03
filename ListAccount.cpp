#include"ListAccount.h"

  ListAccount::ListAccount() // khoi tao List tai khoan lan dau
    {
        m_head=NULL;
        m_tail=NULL;
    }
    void ListAccount::AddList(string id, string pass, double money)
    {
        Node* node = new Node; // vung nho dong
        node->acc.InitAccount(id, pass, money);
        node->next = NULL;

        if (m_head == NULL)
        {
            m_head = node;
            m_tail = node;
        }
        else
        {
            node->next = m_head;
            m_head = node;
        }
    }


    Node* ListAccount::checkLogin(string id, string pass)
    {
            Node* node = m_head;
            while (node != NULL && !(node->acc.getId()==id && node->acc.getPass()==pass))
            {
                node = node->next;
            }
            if (node != NULL)
                return node;
            return NULL;
    }