#include "../include.h"
using namespace std;

void oo_setup();
void oo_run();

typedef struct oo_node {
	int data1;
	int data2;
} OONODE;


class OO
{
public:
	void operator = (OONODE a);
};


