#include "FileIO.h"

ListAccount FileIO::readFile()
    {
        ifstream inf("database.txt");
        string id, pass, m;
        ListAccount list;
        while(inf >> id >> pass >> m)
        {
            list.AddList(id, pass, stod(m));
        }

        inf.close();
        return list;
    }

      void FileIO::writeFile(ListAccount list)
    {
        ofstream outf("database.txt");
        if (list.getHead() != NULL)
        {
            Node* node = list.getHead();
            while (node != NULL)
            {
                outf << node->acc.getId()<<' '<<node->acc.getPass()<<' '<<node->acc.getMoney()<<'\n';
                node = node->next; // Chuyển sang node tiếp theo
            }
        }
        outf.close();
    }