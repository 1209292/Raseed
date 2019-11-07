#include "raseedDatabase.hpp"

map<int, Subscriber*> RaseedDatabase::subscribers = {};
RaseedAccount* RaseedDatabase::account = nullptr;

Subscriber* RaseedDatabase::getSubscriber(int id)
{
   return RaseedDatabase::subscribers[id];
}

void RaseedDatabase::addSubscriber(int id, Subscriber* subscriber)
{
   RaseedDatabase::subscribers.insert({id, subscriber});
}

RaseedAccount* RaseedDatabase::getRaseedAccount()
{
   return RaseedDatabase::account;
}

void RaseedDatabase::setRaseedAccount(RaseedAccount* account)
{
   RaseedDatabase::account = account;
}
