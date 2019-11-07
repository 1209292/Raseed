
#ifndef RASEED_DATABASE_HPP
#define RASEED_DATABASE_HPP

#include <map>
#include "subscriber.hpp"
#include "raseedAccount.hpp"

class RaseedDatabase
{  
   public:
      static std::map<int, Subscriber*> subscribers;
      static RaseedAccount* account;
      static Subscriber* getSubscriber(int id);
      static void addSubscriber(int id, Subscriber* subscriber);
      static RaseedAccount* getRaseedAccount();
      static void setRaseedAccount(RaseedAccount* account);
};

#endif // RASEED_DATABASE_HPP
