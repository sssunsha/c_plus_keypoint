#include "../include.h"

void class_template_setup();
void class_template_run();


// codes for demo of class template

template<typename T, typename Y>
class template_class{
public:
	template_class(T t, Y y);
	void show();
private:
	T _t;
	Y _y;
};
