#include <iostream>
#include <string>
#include "Account.h"


using namespace std;

int main() {

	Account account1{ "Jane Green" , 500};
	Account account2{ "John Blue" , 30};

	cout << "account1 name is: " << account1.getName() << endl;
	cout << "account2 name is: " << account2.getName() << endl;

	cout << "balance of account1 is " << account1.getBalance() << endl;
	cout << "balance of account2 is " << account2.getBalance() << endl;

	cout << "Enter a deposit amount for account1 ";
	int depositAmount;
	cin >> depositAmount;
	cout << "Depositing " << depositAmount << " into account1 with balance " << account1.getBalance();
	account1.deposit(depositAmount);

	cout << "\nBalance of account1 is now " << account1.getBalance() << endl;

	cout << "Please enter an amount to withdrawal from account1\n";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "Withdrawaling " << withdrawAmount << " from account1\n";
	account1.withdraw(withdrawAmount);
	cout << "The account balance of account1 is now " << account1.getBalance();
	



	return 0;
	
}