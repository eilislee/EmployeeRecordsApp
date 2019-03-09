#pragma once
#include "Employee.h"
#include <vector>
#include <iostream>

namespace EmployeeRecordsApp {
	const int kFirstEmployee = 100;
	
	class Database {
	public: 
		Employee& addEmployee(const std::string& firstName, const std::string& lastName);
		Employee& getEmployee(int employeeNumber);
		Employee& getEmployee(const std::string& firstName, const std::string& lastName);

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

	private: 
		std::vector<Employee> mEmployees;
		int mNextEmployeeNumber = kFirstEmployee;
	};
}
