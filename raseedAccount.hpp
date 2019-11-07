#ifndef RASEEDACCOUNT_HPP
#define RASEEDACCOUNT_HPP


class RaseedAccount
{
   public:
      RaseedAccount(int balance);
      void deposit(int amount);
      int getBalance();
   private:
      int balance;
};

#endif // RASEEDACCOUNT_HPP
