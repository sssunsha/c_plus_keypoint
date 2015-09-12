/*

 模板是C++支持参数化多态的工具，使用模板可以使用户为类或者函数声明一种一般模式，使得类中的某些数据成员或者成员函数的参数、返回值取得任意类型。

　　模板是一种对类型进行参数化的工具；

　　通常有两种形式：函数模板和类模板；

　　函数模板针对仅参数类型不同的函数；

　　类模板针对仅数据成员和成员函数类型不同的类。

　　使用模板的目的就是能够让程序员编写与类型无关的代码。比如编写了一个交换两个整型int 类型的swap函数，这个函数就只能实现int 型，
对double，字符这些类型无法实现，要实现这些类型的交换就要重新编写另一个swap函数。使用模板的目的就是要让这程序的实现与类型无关，
比如一个swap模板函数，即可以实现int 型，又可以实现double型的交换。模板可以应用于函数和类。下面分别介绍。

函数模板功能非常强大，但是有时候可能会陷入困境，加入待比较的函数模板没有提供正确的操作符，则程序不会对此进行编译。
为了避免这种错误，可以使用函数模板和同名的非模板函数重载，这就是函数定制。函数模板与同名的非模板函数重载必须遵守以下规定：

寻找一个参数完全匹配的函数，如有，则调用它

如果失败，寻找一个函数模板，使其实例化，产生一个匹配的模板函数，若有，则调用它

如果失败，再试低一级的对函数重载的方法，例如通过类型转换可产生的参数匹配等，若找到匹配的函数，调用它

如果失败，则证明这是一个错误的调用


 */


#include "function_template.h"
#include <string>

using namespace std;

void function_template_setup()
{
	cout << endl;
	cout << "welcome to the demo for function template" << endl;
	cout << endl;
}
void function_template_run()
{
	int i_a, i_b, i_c;
	i_a = 100;
	i_b = 20;
	i_c = 10;

	cout << "the min for int of " << i_a << " , " << i_b << " , " << i_c << " . ---> " << min(i_a, i_b, i_c) << endl;

	double d_a, d_b, d_c;
	d_a = 0.01;
	d_b = -20.0;
	d_c = 2.2;

	cout << "the min for double of " << d_a << " , " << d_b << " , " << d_c << " . ---> " << min(d_a, d_b, d_c) << endl;

	string s_a, s_b, s_c;
	s_a = "abc";
	s_b = "123";
	s_c = "iuyi";

	cout << "the min for string of " << s_a << " , " << s_b << " , " << s_c << " . ---> " << min(s_a, s_b, s_c) << endl;

	NODE n_a, n_b, n_c;
	n_a.value = 200;
	n_b.value =20;
	n_c.value = 100;

	cout << "the min for struct node of " << n_a.value << " , " << n_b.value << " , " << n_c.value << " . ---> " << min(n_a, n_b, n_c) << endl;

}

// demo codes for function template

int min(NODE a, NODE b, NODE c){
	if(a.value < b.value)
	{
		if(a.value < c.value)
		{
			return a.value;
		}
		else
		{
			return c.value;
		}
	}
	else
	{
		if(b.value < c.value)
		{
			return b.value;
		}
		else
		{
			return c.value;
		}
	}
}

template <typename T> T min(T a, T b, T c){
	if(a < b)
	{
		if(a < c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b < c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

