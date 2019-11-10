#include "subscriber.hpp"

Subscriber::Subscriber(string firstName, string lastName): firstName(firstName), lastName(lastName)
{
   balance = 0;
}

string Subscriber::getName()
{
   return firstName + " " + lastName;
}

int Subscriber::getBalance()
{
   return balance;
}

void Subscriber::deposit(int amount)
{
   balance += amount;
}
