#include "inheritance.h"

void inheritance_setup()
{
	cout << endl;
	cout << "welcome to the demo for C++ inheritance ..."<< endl;
	cout << endl;
}

void inheritance_run()
{
	inheritance_test();
}

// test class

class A {
public:
	virtual void a() = 0;
	virtual void b() {cout << "A -- > b"<< endl;}
	virtual void c(int i) { cout << "A --> c " << i << endl;};
	void d(int i) { cout << "A --> d " << i << endl;}
	void e(int i) { cout << "A --> e " << i << endl;}
	virtual ~A(){}
};

class AA : public A{
public:
	void a() { cout << "AA --> a" << endl;}
	virtual void c(double i) { cout << "AA --> c " << i << endl;};
	void d(double i) { cout << "AA --> d " << i << endl;}
	void f(int i) { cout << "AA --> f " << i << endl;}
};


void inheritance_test(){

	A* a = new AA();

	a->b();

	a->a();

	int i = 111;
	a->c(i);

	a->d(i);

	double d = 1.11;

	a->c(d);

	a->d(d);



	cout << "---------------------------------"<< endl;

	AA* aa = new AA();

	aa->b();

	aa->a();

	aa->d(i);

	aa->c(i);

	aa->d(d);

	aa->c(d);

	aa->e(i);

	cout << " ---------------------------------- "<< endl;
	A* _a = aa;

	_a->a();

	_a->b();

	_a->e(i);


	delete a;
	a = NULL;

	delete aa;
	aa = NULL;


}
