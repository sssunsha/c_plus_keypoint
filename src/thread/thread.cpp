#include "thread.h"


const int MAX = 5;
const unsigned int timecost = 2;
thread::id thread_array[MAX];



void thread_setup()
{
	cout << endl;
	cout << "welcome to the demo for multi-thread "<< endl;
	cout << endl;
}

void thread_run()
{
	cout << "create 5 threads and insert into the thread list"<< endl;
	for(int i = 0; i < MAX; i++)
	{
		thread t(thread_function, i+1);
		thread_array[i] = t.get_id();

		t.join();
		cout << t.get_id() << " is finished" << endl;
	}

}

// codes for demo of multithread


void thread_function(int id)
{
	cout << "thread " << id << " is running " << endl;
	sleep(timecost);
}



