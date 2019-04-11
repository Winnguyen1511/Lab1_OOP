#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

#define     NO_MONEY_LEFT   balance<=0
class BankAccount
{
private:
    long ID;
    double  balance;
public:
    BankAccount(long);
    void deposit(double);
    void withdraw(double);
};

#endif // BANKACCOUNT_H_INCLUDED
