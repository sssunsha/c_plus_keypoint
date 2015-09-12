#include "container.h"




void container_setup()
{
	cout << endl;
	cout << "welcome to the demo for STL container"<< endl;
	cout << endl;
}

void container_run()
{
	vector_demo(); // 向量
	array_demo();	// 数组
	list_demo(); // 列表
	map_demo();	// 映射
	queue_demo(); // 队列
	deque_demo(); // 双端队列
	set_demo(); //集合
	stack_demo(); // 栈

}


// codes for demo of STL container

// TODO: 觉得不是太难所以没有做，可以在需要的时候参考STL文档

void vector_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL vector] demo"<< endl;

	// create a vector with 5 int number
	cout << "creat a vector with 5 int number:"<< endl;
	vector<int>* v = new vector<int>;

	for(int i = 0, j = 100; i < 5; i++, j++)
	{
		v->push_back(j);
	}

	// print out all the vector data
	vector_showall(v);

	// remove one 3rd data in the vector
	cout << "remove the 3rd data in the vector:"<< endl;
	v->erase(v->begin()+2);
	vector_showall(v);

	// insert the 3rd data
	cout << "insert the 3rd data in the vector with [200]:"<< endl;
	v->insert(v->begin()+2, 200);
	vector_showall(v);

	// clean the vector
	cout << "clean the vector:"<< endl;
	v->clear();
	vector_showall(v);

	delete v;
	v = NULL;
	cout << endl;

}

void vector_showall(vector<int>* v)
{
	cout << "vector --> ";
	for(vector<int>::iterator it = v->begin(); it != v->end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}


void array_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL array] demo"<< endl;

	cout <<"create an array with 5 int number:"<< endl;



}


void list_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL list] demo"<< endl;

	cout << "create a list with 5 int number:"<< endl;
	list<int>* l = new list<int>;

	for(int i = 0, j = 200; i < 5; i++, j+=5)
	{
		l->push_front(j);
	}
	list_showall(l);

	cout << "remove the 3rd data of the list"<< endl;
	list<int>::iterator it = l->begin();
	it++;
	it++;
	l->erase(it);
	list_showall(l);

	cout << "insert the 3rd data into the list with [111]"<< endl;
	it = l->begin();
	it++;
	it++;
	l->insert(it, 111);
	list_showall(l);

	cout << "clean all the data of the list"<< endl;
	l->clear();
	list_showall(l);

	delete l;
	l = NULL;
}

void list_showall(list<int>* l)
{
	cout << "list --> ";
	for(list<int>::iterator it = l->begin(); it != l->end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}


void map_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL map] demo"<< endl;

	cout << "create a map with five key-value:"<< endl;
	map<int, char>* m = new map<int, char>;

	char j = 'a';
	for(int i = 0 ; i < 5; i++,j++)
	{
		m->insert(pair<int,char>(i, j));
	}
	map_showall(m);

	cout << "change the 3rd value with char W："<< endl;
	m->at(2) = 'W';
	map_showall(m);

	cout << "remove the 3rd key-value : " << endl;
	map<int, char>::iterator it = m->begin();
	it++, it++;
	m->erase(it);
	map_showall(m);

	cout << "insert a new key-value into the map [100:z] :" << endl;
	it = m->begin();
	it++, it++;
	m->insert(it, pair<int,char>(100, 'z'));
	map_showall(m);

	delete m;
	m = NULL;
}

void map_showall(map<int, char>* m)
{
	cout << "map --> ";
	for(map<int, char>::iterator it = m->begin(); it != m->end(); it++)
	{
		cout<< " [ " << it->first << " : "<< it->second << " ] ";
	}

	cout << endl;
}


void queue_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL queue] demo"<< endl;

}


void deque_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL deque] demo"<< endl;

}


void set_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL set] demo"<< endl;

}


void stack_demo()
{
	cout << endl;
	cout << "=========================================================================="<< endl;
	cout << "start [STL stack] demo"<< endl;

}

