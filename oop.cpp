#include <iostream>
using namespace std;

class Employe {
public:
	string Name;
	string Company;
	int Age;

	void introduceYourSelf() {
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Company: " << Company << std::endl;
		std::cout << "Age: " << Age << std::endl;
	}
	Employe(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
};
int main() {
	Employe employe1 = Employe("Kishan", "YT-KT", 25);//constructor invoked
	employe1.introduceYourSelf();

	Employe employe2 = Employe("Robert", "LinkedIn", 35);//constructor invoked;
	employe2.introduceYourSelf();

	system("pause>0");
}