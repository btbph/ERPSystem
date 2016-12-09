//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#ifndef ERPSYSTEM_MODEL_H
#define ERPSYSTEM_MODEL_H


#include "Account.h"
#include "Document.h"
#include <set>
#include <memory>
#include <iterator>

class Account;
class Document;

namespace std {

    class Model {
    public:
        set<unique_ptr<Document>> arrayOfDocumets;

    };
}
#endif //ERPSYSTEM_MODEL_H
