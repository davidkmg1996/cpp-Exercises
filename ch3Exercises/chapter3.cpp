#include <iostream>
#include <string>
#include "Account.h"
#include "Employee.h"


using namespace std;

int main() {

	//3.9
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
	cout << "The account balance of account1 is now " << account1.getBalance() << "\n";

	//3.11
	Employee employee1{ "David", "Markowski", 50000.0};
	Employee employee2{ "Maria", "Maria", 70000.0};

	cout << employee1.getName() << " " << employee1.getLast() << "'s salary is " << employee1.getSalary() << " please enter a percent increase.\n";
	float setSalary;
	cin >> setSalary;
	setSalary = ((setSalary / 100) * employee1.getSalary()) + employee1.getSalary();
	employee1.setSalary(setSalary);

	cout << "David's new salary is " << employee1.getSalary() << "\n";
	cout << "Please enter a new first aame name for " << employee1.getName() << " " << employee1.getLast() << "\n";

	string newName;
	string lastName;
	cin >> newName;

	employee1.setName(newName);
	cout << "The employee's new first name is " << employee1.getName() << "\n";;

	cout << "Please enter a new last name for " << employee1.getName() << " " << employee1.getLast() << "\n";
	cin >> lastName;
	employee1.setLast(lastName);

	cout << "The employee's new last name is " << employee1.getLast() << "\n";
	cout << "The full name for the employee is now " << employee1.getName() << " " << employee1.getLast() << "\n";

	cout << employee2.getName() << " 's salary is " << employee2.getSalary() << " please enter a percent increase.\n";
	cin >> setSalary;
	setSalary = ((setSalary / 100) * employee2.getSalary()) + employee2.getSalary();
	employee2.setSalary(setSalary);

	cout << "Maria's new salary is " << employee2.getSalary() << "\n";
	cout << "Please enter a new first name for " << employee2.getName() << " " << employee2.getLast() << "\n";

	cin >> newName;

	employee2.setName(newName);
	cout << "The employee's new name is " << employee2.getName() << "\n";
	cout << "Please enter a new last name for " << employee2.getName() << " " << employee2.getLast() << "\n";
	cin >> lastName;
	employee2.setLast(lastName);
	cout << "The full name for the employee is now " << employee2.getName() << " " << employee2.getLast() << "\n";
	



	return 0;
	
}