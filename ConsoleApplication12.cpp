#include<iostream>
using namespace std;
class Employee {
private:
	int id;
	string firstname;
	string lastname;
	int salary;
public:
	Employee(int id, string firstname, string lastname, int salary) {
		this->id = id;
		this->firstname = firstname;
		this->lastname = lastname;
		this->salary = salary;

	}
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	string getFirstname() {
		return firstname;
	}
	void setfirstname(string firstname) {
		this->firstname = firstname;
	}
	string getLastname() {
		return lastname;
	}
	void setId(string lastname) {
		this->lastname = lastname;

	}
	string getFullName() {
		return firstname + " " + lastname;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}








};

int main() {
	Employee e(1, "Kien", "Trung", 1000);
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}
