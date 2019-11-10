#ifndef SUBSCRIBER_HPP
#define SUBSCRIBER_HPP

#include <string>
#include <iostream>
#include "subscriberWallet.hpp"

using namespace std;

class Subscriber
{
   public:
      Subscriber(string firstName, string lastName);
      string getName();
      int getBalance();
      void deposit(int amount);
   private:
      string firstName;
      string lastName;
      int balance;
      SubscriberWallet wallet;
};

#endif // SUBSCRIBER_HPP
