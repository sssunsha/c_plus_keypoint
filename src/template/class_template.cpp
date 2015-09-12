#include "class_template.h"
using namespace std;

void class_template_setup()
{
	cout << endl;
	cout << "welcome to the demo for class template"<< endl;
	cout << endl;

}
void class_template_run()
{
	cout << "create a template class with string and int, and show" << endl;
	template_class<string, int>* t1 = new template_class<string, int>("hello", 123);
	t1->show();
	cout << "create a template class with double and long and show" << endl;
	long l = 111;
	double d = 1.234;
	template_class<long, double>* t2 = new template_class<long, double>(l,d);
	t2->show();

	delete t1;
	t1 = NULL;
	delete t2;
	t2 = NULL;

}

// codes for demo of class template
template<typename T, typename Y>
template_class<T, Y>::template_class(T t, Y y){
	this->_t = t;
	this->_y = y;
}

template<typename T, typename Y> void template_class<T, Y>::show(){
	cout << endl;
	cout << "show --> " << this->_t << this->_y << endl;
	cout << endl;
}
