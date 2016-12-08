//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#ifndef ERPSYSTEM_DOCUMENT_H
#define ERPSYSTEM_DOCUMENT_H


#include "Account.h"

class Account;

enum TypeOfMovement{
    TYPEOFMOVEMENY_INCOME,
    TYPEOFMOVEMENY_WITHDRAW
};

class Document {
protected:
    TypeOfMovement movement;
    int id;
    std::string date;
    std::string contragent;
    double sum;
};

class BankDocument: public Document{
private:
    Account* account;
};


class WarehouseDocument: public Document{

};
#endif //ERPSYSTEM_DOCUMENT_H
