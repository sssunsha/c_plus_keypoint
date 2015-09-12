#include "../include.h"

void function_template_setup();
void function_template_run();


// demo codes for function template

typedef struct node{
	int value;
} NODE;


// 模版函数声明
template <typename T> T min(T a, T b, T c);

// 模版函数对应的重载函数
int min(NODE a, NODE b, NODE c);
