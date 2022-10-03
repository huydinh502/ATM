#ifndef FILEIO_H_INCLUDED
#define FILEIO_H_INCLUDED
#include"ListAccount.h"
#include<string>
#include <fstream>

using namespace std;

class FileIO{

public:

    ListAccount readFile();
    void writeFile(ListAccount list);

};

#endif // FILEIO_H_INCLUDED