#include "BankAccount.h"

BankAccount::BankAccount(long newID)
{
    this->ID = newID;
    this->balance = 0;
}
void BankAccount::withdraw(double amount)
{
    if(NO_MONEY_LEFT)
        return;
    else{
        this->balance -= amount;
    }
}
void BankAccount::deposit(double amount)
{
    this->balance += amount;
}
