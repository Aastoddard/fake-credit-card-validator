#pragma once
#include <string>
class CreditCardInfo 
{
    public:
    CreditCardInfo();
    ~CreditCardInfo();

    void setCardInfo(long);
    std::string getCardInfo() const;
    
    private:
    std::string _cardInfo;
};