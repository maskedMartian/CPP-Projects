#include <iostream>
#include <vector>
#include <string>
using namespace std;

class BankAccount {
    private:
		string owner;
		int balance;
    public:
		BankAccount(string owner)
		{
			this->owner = owner;
			this->balance = 0;
		}
		BankAccount(string owner, int balance)
		{
			this->owner = owner;
			if (balance < 1)
			{
				cout << "Error: Invalid balance value.\n";
			}
			else
			{
				this->balance = balance;
			}
		}
		void deposit(int amount)
		{
			if (amount < 1)
			{
				cout << "Error: Invalid deposit value.\n";
			}
			else
			{
				this->balance += amount;
			}
		}
		void withdrawl(int amount)
		{
			if (amount < 1)
			{
				cout << "Error: Invalid withdrawl value.\n";
			}
			else if (amount > this->balance)
			{
				cout << "Error: Withdrawl amount larger than balance.\n";
			}
			else
			{
				this->balance -= amount;
			}
		}
		string getOwner() const
		{
			return this->owner;
		}
		int getBalance() const
		{
			return this->balance;
		}
}; // end of BankAccount class

int main()
{
	BankAccount yourAccount("Bob");
	BankAccount myAccount("Travis", 1000);

	cout << yourAccount.getOwner() << "'s account has a balance of $" << yourAccount.getBalance() << "\n";
	cout << myAccount.getOwner() << "'s account has a balance of $" << myAccount.getBalance() << "\n";

	yourAccount.withdrawl(1000);
	yourAccount.deposit(50);
	myAccount.withdrawl(100);

	cout << yourAccount.getOwner() << "'s account has a balance of $" << yourAccount.getBalance() << "\n";
	cout << myAccount.getOwner() << "'s account has a balance of $" << myAccount.getBalance() << "\n";

	cin.get();

	return 0;
}
