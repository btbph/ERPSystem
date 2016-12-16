//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#ifndef ERPSYSTEM_DOCUMENT_H
#define ERPSYSTEM_DOCUMENT_H


#include "Account.h"


class Account;

struct Table{
    std::string nameOfGood;
    double amount;
    double sumTable;
};

enum TypeOfMovement{
    TYPEOFMOVEMENT_INCOME,
    TYPEOFMOVEMENT_WITHDRAW
};

enum TypeOfDocument{
    TYPEOFDOCUMENT_BANK,
    TYPEOFDOCUMENT_WAREHOUSE
};

class Document {
public:

    void setTypeOfMovement(TypeOfMovement tmpmv);
    void setId (int tmpid);
    //void setDate;




protected:
    TypeOfMovement movement;
    int id;
    std::string date;
    Account* account;
    double sum;
    TypeOfDocument type;
};

class BankDocument: public Document{

};


class WarehouseDocument: public Document{
private:
    Table* table;
};


#endif //ERPSYSTEM_DOCUMENT_H
