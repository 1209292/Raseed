#include "raseedAccount.hpp"

RaseedAccount::RaseedAccount(int balance): balance(balance)
{

}

void RaseedAccount::deposit(int amount)
{
   balance += amount;
}

int RaseedAccount::getBalance()
{
   return balance;
}
