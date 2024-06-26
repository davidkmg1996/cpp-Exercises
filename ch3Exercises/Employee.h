#pragma once


//Exercise 3.11
class Employee {

public:
	explicit Employee(std::string fName, std::string lName, float salary) : name{ fName } {

		if (salary < 0) {
			salary = 0;
		}
		else {
			iSalary = salary;
		}

		lname = lName;

	}

	void setName(std::string fName) {
		name = fName;
	}

	void setLast(std::string lName) {
		lname = lName;
	}
		
	void setSalary(float salary) {
		if (salary < 0) {
			salary = 0;
		}
		else {
			iSalary = salary;
		}
	}


	std::string getName() {
		return name;
	}

	std::string getLast() {
		return lname;
	}

	float getSalary() {
		return iSalary;
	}


private:
	std::string name;
	std::string lname;
	float iSalary{ 0};
	class emp;

};