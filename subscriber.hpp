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
   private:
      string firstName;
      string lastName;
      SubscriberWallet wallet;
};

#endif // SUBSCRIBER_HPP
