class CreditCardInfo 
{
    public:
    CreditCardInfo();
    ~CreditCardInfo();

    void setCardInfo(unsigned);
    unsigned getCardInfo();
    
    private:
    unsigned _cardInfo;

};