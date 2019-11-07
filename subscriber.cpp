#include "subscriber.hpp"

Subscriber::Subscriber(string firstName, string lastName): firstName(firstName), lastName(lastName)
{

}

string Subscriber::getName()
{
   return firstName + " " + lastName;
}
