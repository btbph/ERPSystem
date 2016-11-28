//
// Created by Mikhail Ulyanov on 28.11.2016.
//

#ifndef ERPSYSTEM_BANKDOCUMENT_H
#define ERPSYSTEM_BANKDOCUMENT_H

enum Moving{
    INCOME,
    WITHDRAW
};

class BankDocument {

private:
    Moving type;
    const int number;
    const money;
};


#endif //ERPSYSTEM_BANKDOCUMENT_H
