#include <iostream>
using namespace std;

class Employe {
private:
	string Name;
	string Company;
	int Age;
public:
	
	void setName(string name){ //setter
		Name = name;
	}
	string getName() { //getter
		return Name;
	}

	void setComapny(string company) { //setter
		Company = company;
	}
	string getComapny() { //getter
		return Company;
	}

	void setAge(int age) {  //setter
		if(age>=18) 
		Age = age;
	}
	int getAge() {  //getter
		return Age;
	}
	

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

	/*employe2.setAge(40);
	std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;*/
	employe2.setAge(15);
	std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;

	system("pause>0");
}