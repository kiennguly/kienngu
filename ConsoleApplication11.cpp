#include<iostream>
#include<cstdlib>
using namespace std;
class Student {
private:
	int id;
	string name;
	int age;
	string address;
	int score;
public:
	Student(){}
	Student(int id, string name, int age, string address, int score) {
		this->id = id;
		this->name = name;
		this->address = address;
		this->setScore(score);
	}
	int getId() {
		return id;
		}
	void setId(int id) {
		this->id = id;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getAddress() {
		return address;
	}
	void setAdress(string address) {
		this->address = address;
	}
	int getScore() {
		return score;
	}
	void setScore(int score) {
		if (score < 0) {
			this->score = 0;
		}
		if (score > 10) {
			this->score = 10;
		}
		else {
			this->score = score;
		}
	}




};


int main() {
	int id;
	cout << "nhap mssv di cu: ";
	cin >> id;
	cout << "nhap cai ten nhan vao: ";
	string name;
	cin >> name;
	cout << "may bao nhieu tuoi r: ";
	int age;
	cin >> age;
	cout << "xin ho cai dia chi: ";
	string address;
	cin >> address;
	
	int d = rand() % 10 + 1;
	
	Student s(id, name, age, address, d);
	//cout << s.getId() << endl;;
	//cout << s.getName() << endl;;
	//cout << s.getAge() << endl;;
	//cout << s.getAddress() << endl;;
	cout << "day la so diem ung voi do ngu cua may: " << s.getScore() << endl;;
	//s.setScore(-7);
	//cout << s.getScore() << endl;;
	//s.setScore(15);
	//cout << s.getScore() << endl;;
	return 0;
}