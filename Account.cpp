//
// Created by Mikhail Ulyanov on 08.12.2016.
//

#include "Account.h"

Account::Account(short *tmpnb, int tmpmoney, std::string tmpowner) {
    money=tmpmoney;
    owner=tmpowner;
    uniqueNumber=tmpnb;
}
