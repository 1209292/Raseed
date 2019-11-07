#include <iostream>
#include <map>
#include "raseedAccount.hpp"
#include "raseedDatabase.hpp"

using namespace std;

void deposit();

RaseedAccount account(1000);
Subscriber s1("Jehad", "Alghamdi");
Subscriber s2("Muaz", "Alghamdi");
Subscriber s3("Basil", "Alghamdi");

int main()
{
//   RaseedAccount account(1000);
   RaseedDatabase::setRaseedAccount(&account);
//   Subscriber s1("Jehad", "Alghamdi");
//   Subscriber s2("Muaz", "Alghamdi");
//   Subscriber s3("Basil", "Alghamdi");
   RaseedDatabase::addSubscriber(1, &s1);
   RaseedDatabase::addSubscriber(2, &s2);
   RaseedDatabase::addSubscriber(3, &s3);
   return 0;
}

void deposit()
{
   int amount = 0;

}
