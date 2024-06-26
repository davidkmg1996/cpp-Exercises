#pragma once


//Exercise 3.11
class Employee {

public:
	explicit Employee(std::string fName, float salary) : name{ fName } {

		if (salary < 0) {
			salary = 0;
		} else {
			iSalary = salary;
		}

	}

	void setName(std::string fName) {
		name = fName;
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

	float getSalary() {
		return iSalary;
	}


private:
	std::string name;
	float iSalary{ 0};
	class emp;

};