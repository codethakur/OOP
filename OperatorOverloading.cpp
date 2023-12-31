#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(int r, int i)
	{
		real = r;
		imag = i;
	}
	void print() {
		cout << real <<" " << imag << "i" << endl;
		return;
	}
	// Operator Overloading Syntex
	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}
};

int main()
{
	Complex c1(5, 6);
	Complex c2(1, 4);

	Complex c3(1, 1);

	Complex c4 = c1 + c2 + c3;
	
	c4.print();

	system("pause>0");
}
