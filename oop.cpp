#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
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
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}
	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << "  got promoted." << endl;
		else
			std::cout<<Name<<"  Sry! No Promotion for you."<<endl;
	}
};
int main() {
	Employee employee1 = Employee("Kishan", "YT-KT", 25);//constructor invoked
	employee1.introduceYourSelf();

	Employee employee2 = Employee("Robert", "LinkedIn", 35);//constructor invoked;
	employee2.introduceYourSelf();

	///*employe2.setAge(40);
	//std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;*/
	//employe2.setAge(15);
	//std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;

	employee1.AskForPromotion();
	employee2.AskForPromotion();

	system("pause>0");
}