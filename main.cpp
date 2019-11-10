#include <iostream>
#include <map>
#include <algorithm>
#include <limits>
#include "raseedAccount.hpp"
#include "raseedDatabase.hpp"

using namespace std;

static int id = 0;

inline bool isValidName( std::string name )
{
   return ( std::all_of( name.begin(), name.end(),
                                [] ( char c ) { return ( std::isalpha( c ) ); } ) );
}
void addSubscriber();
void deposit();
int getId();
void displayStartMenu();
void displaySubscriberInfo();
void listSubscribers();

RaseedAccount account(1000);

void setUp()
{
   RaseedDatabase::setRaseedAccount(&account);
   Subscriber s2("Muaz", "Alghamdi");
   Subscriber s3("Basil", "Alghamdi");
   Subscriber s1("Jehad", "Alghamdi");
   RaseedDatabase::addSubscriber(getId(), s1);
   RaseedDatabase::addSubscriber(getId(), s2);
   RaseedDatabase::addSubscriber(getId(), s3);
}

int main()
{
   setUp();
   deposit();
   int option;
   do{
      displayStartMenu();
      cout << "Enter an option: ";
      cin >> option;
      cout << endl;
      if(cin.fail()){
         cout << "Wrong Selection! Try again" << endl;
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max());
      }else{
         switch(option){
            case 1:
               listSubscribers();
               break;
            case 2:
               displaySubscriberInfo();
               break;
            case 3:
               addSubscriber();
               break;
            default:
               break;
         }
      }

   }while(option != 0);

   cout << "Exitting ..." << endl;
   return 0;
}

void addSubscriber()
{
   string firstName, lastName;
   cout << "Enter subscriber first name: ";
   cin >> firstName;
   while(!isValidName(firstName)){
      cout << "Enter a valid name: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> firstName;
   }

   cout << "Enter subscriber last name: ";
   cin >> lastName;
   while(!isValidName(lastName)){
      cout << "Enter a valid name: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> lastName;
   }
   cout << endl;

   Subscriber s(firstName, lastName);
   RaseedDatabase::addSubscriber(getId(), s);
}

void deposit()
{
   int amount = 100;
   int id = 1;
   do{

   }while(amount <= 0);

   Subscriber* s = RaseedDatabase::getSubscriber(id);
   cout << "balance before deposit: " << s->getBalance() << endl;
   s->deposit(amount);
   cout << "balance after deposit: " << s->getBalance() << endl;

   RaseedAccount* account = RaseedDatabase::getRaseedAccount();
   cout << "balance before deposit: " << account->getBalance() << endl;
   account->deposit(amount);
   cout << "balance After deposit: " << account->getBalance() << endl;
}

int getId()
{
   return ++id;
}

void displayStartMenu()
{
   cout << "Start Menu" << endl;
   cout << "1 to list all subscribers" << endl;
   cout << "2 to display subscriber information" << endl;
   cout << "3 to add subscriber" << endl;
   cout << "0 to exit" << endl;
   cout << endl;
}

void displaySubscriberInfo()
{
   cout << "Subscriber Selection Menu" << endl;
   listSubscribers();
   cout << "Select subscriber: ";
   int id = 0;
   cin >> id;
   if(cin.fail()){
      cout << "Wrong Selection!" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max());
   }else{
      Subscriber* s = RaseedDatabase::getSubscriber(id);
      cout << "Subscriber Name: " << s->getName() << " Subscriber balance: " << s->getBalance() << endl;
      cout << endl;
   }
}

void listSubscribers()
{
   for(auto s: RaseedDatabase::getSubscribers()){
      cout << s.first << " " << s.second.getName() << endl;
   }
   cout << endl;
}
