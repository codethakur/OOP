#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
	
	string Company;
	int Age;
protected:
	string Name;
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
class Developer :public Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage)
		:Employee(name, company, age) {
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void fixBug() {
		std::cout << Name << " fix bug using " << FavProgrammingLanguage << std::endl;
	}
};
class Teacher : public Employee {
public:
	std::string Subject;

	void PrepareLesson() {
		std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
	}

	Teacher(const std::string& name, const std::string& company, int age, const std::string& subject)
		: Employee(name, company, age), Subject(subject) {}
};


int main() {
	//Employee employee1 = Employee("Kishan", "YT-KT", 25);//constructor invoked
	//employee1.introduceYourSelf();

	//Employee employee2 = Employee("Robert", "LinkedIn", 35);//constructor invoked;
	//employee2.introduceYourSelf();

	///*employe2.setAge(40);
	//std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;*/
	//employe2.setAge(15);
	//std::cout << employe2.getName() << " is now " << employe2.getAge() << " years old" << endl;
	 
	/*employee1.AskForPromotion();
	employee2.AskForPromotion();
	*/

	Developer D1 = Developer("Kishan", "YT-KT", 25, "C++");

	D1.fixBug();
	D1.fixBug();
	D1.fixBug();

	D1.AskForPromotion();//class Developer :public Employee {

	Teacher t1= Teacher("John", "School", 30, "Math");
	t1.PrepareLesson();


	system("pause>0");
}