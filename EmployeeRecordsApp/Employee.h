#pragma once
#include <string>

namespace EmployeeRecordsApp {
	class Employee {
	public:
		Employee() = default; // Default constructor but we can overload it
		Employee(const std::string& firstName, const std::string& lastName); // This constructor takes the first & last name. 
		// Const means there is no intention to change. It will be read only and the values will never be changed.
		// string& is a reference to the firstName and lastName values. String is a pointer... address operator.

		int getSalary() const; // int is the return type. getSalary() is the name of the method and will not take any parameters.
		// if we include const, it means we are actually giving a salary back to someone... a constant... read only.
		void setSalary(int newSalary); // setSalary will take in newSalary. When using integers, no need to include "&" because they are value types

		int getEmployeeNumber() const;
		void setEmployeeNumber(int employeeNumber);

		bool isHired() const; // tells us if hired or not

		const std::string& getFirstName() const; // Return a string back as a read only. Referencing a constant.
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		void hire();
		void fire();
		void promote(int raiseAmount = 100);
		void demote(int demeritAmount = 100);
		void display() const;

	private: 
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNumber = -1;
		int mSalary = 30000;
		bool mHired = false;
	};
}