#include <stdio.h>
#include <iostream>
#include <string>
#include "credit-card-info.hpp"

int main()
{

    CreditCardInfo cardInfo;
    std::cout << cardInfo.getCardInfo() << std::endl;
    getchar();
    return 0;
}
