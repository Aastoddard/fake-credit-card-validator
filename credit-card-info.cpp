#include "credit-card-info.hpp"

CreditCardInfo::CreditCardInfo()
: _cardInfo("1111111111111111")
{
    
}

CreditCardInfo::~CreditCardInfo()
{

}

void CreditCardInfo::setCardInfo(long cardNum)
{

}

std::string CreditCardInfo::getCardInfo() const
{
    return _cardInfo;
}