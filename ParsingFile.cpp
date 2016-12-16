//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#include "ParsingFile.h"

using namespace std;

//Для перегрузки использовать
void ParsingFile::Read() {
    struct tm* timeinfo;
    char a[11];
    int n;
    ifstream fin("input.txt");
    fin>>n;
    for(int i=1;i<n+1;i++)
    {

    }
    fin.close();

}
