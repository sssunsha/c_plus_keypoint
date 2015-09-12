#include "include.h"

#include "./template/class_template.h"
#include "./template/function_template.h"

#include "./container/container.h"

#include "./class/inheritance.h"

#include "./operator_overload/oo.h"

#include "./IO/io.h"

#include "./thread/thread.h"

using namespace std;

void show_menu();

int main(){

	cout << "-----------------------------------------------------------"<< endl;
	cout << "-----------------------------------------------------------"<< endl;
	cout << "Welcome to the C++ key point project" << endl;
	cout << "-----------------------------------------------------------"<< endl;
	cout << "-----------------------------------------------------------"<< endl;

	show_menu();
	return 0;
}

void show_menu(){
	int index = 0;
	do{
		setup:
		cout << endl;
		cout << "please choose with the demo menu" << endl;
		cout << "function template (模版函数) ----------------------------- 1" << endl;
		cout << "class template (模版类) ---------------------------------- 2" << endl;
		cout << "STL container (STL 容器) --------------------------------- 3" << endl;
		cout << "inheritance (继承) --------------------------------------- 4" << endl;
		cout << "operator overload (操作符重载) -------未完成--------------- 5" << endl;
		cout << "I/O input/output (输入输出) ------------------------------- 6" << endl;
		cout << "multi-thread (多线程) -------------有bug------------------- 7" << endl;
		cout << endl;
		cin >> index;
		switch(index)
		{
		case 0:
			break;
		case 1:
			cout << "start the demo for function template "<< endl;
			function_template_setup();
			function_template_run();
			break;
		case 2:
			cout << "start the demo for class template "<< endl;
			class_template_setup();
			class_template_run();
			break;
		case 3:
			cout << "start the demo for STL container "<< endl;
			container_setup();
			container_run();
			break;
		case 4:
			cout << "start the demo for C++ inheritance "<< endl;
			inheritance_setup();
			inheritance_run();
			break;
		case 5:
			cout << "start the demo for operator overload "<< endl;
			oo_setup();
			oo_run();
			break;
		case 6:
			cout << "start the demo for I/O "<< endl;
			io_setup();
			io_run();
			break;
		case 7:
			cout << "start the demo for multi-thread "<< endl;
			thread_setup();
			thread_run();
			break;


		default:
			cout << "the input is incorrect, please choose again"<< endl;
			goto setup;
			break;
		}
	}while(index != 0);
}
