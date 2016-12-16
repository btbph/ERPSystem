//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#ifndef ERPSYSTEM_PARSINGFILE_H
#define ERPSYSTEM_PARSINGFILE_H

#include <fstream>
#include <iostream>
#include "Document.h"

class Document;

class ParsingFile {
public:
    void Read();
    void Write();
};


#endif //ERPSYSTEM_PARSINGFILE_H
