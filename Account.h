//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#ifndef ERPSYSTEM_ACCOUNT_H
#define ERPSYSTEM_ACCOUNT_H

#include <string>

class Account {
public:
    Account(short* tmpnb,int tmpmoney, std::string tmpowner);

private:
    short* uniqueNumber;
    int money;
    std::string owner;
};



#endif //ERPSYSTEM_ACCOUNT_H
