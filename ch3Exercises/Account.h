#pragma once


class Account {

public:
	explicit Account(std::string accountName, int initialBalance) :
		name{ accountName } {

		if (initialBalance > 0) {
			balance = initialBalance;
		}

	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	//3.9
	void withdraw(int withdrawAmount) {
		
		if (withdrawAmount <= balance) {
			balance = balance - withdrawAmount;
			std::cout << withdrawAmount << " has been withdrawn\n";
		}
		else {
			std::cerr << "Withdrawal amount exceed account balance";
		}
	}

	int getBalance() const {
		return balance;
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}


private:
	std::string name;
	int balance{ 0 }; 


};