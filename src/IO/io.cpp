#include "io.h"
#include <fstream>
#include <string>
using namespace std;

void io_setup()
{
	cout << endl;
	cout << "welcome to the demo for I/O operation ..."<< endl;
	cout << endl;
}

void io_run()
{
	create_file();
	write_file();
	read_file();
	clean_file();
}


// codes for demo for input and outpu file operation
const char* FILE_NAME = "/home/CORPUSERS/xp018026/workspace/sony/eclipse/c_plus_keypoint/io_test.txt";
const int MAX_LEN = 256;

void create_file()
{
	cout << endl;
	cout << "start to create a test file"<< endl;
	// first open a file, !!! if this file is not exist, fopen will create it
	ofstream fout;
	fout.open(FILE_NAME, ofstream::app | ofstream::out | ofstream::in);
	fout.close();
}

void read_file()
{
	cout << endl;
	cout << "start to read the content from the test file"<< endl;
	// first open the file
	ifstream fin;
	fin.open(FILE_NAME, ifstream::in | ifstream::out | ifstream::app);
	char output_str[MAX_LEN];
	fin >> output_str;
	cout << output_str << endl;
	fin.close();
}

void write_file()
{
	cout << endl;
	cout << "start to write something into the test file"<< endl;
	//first open the file
	ofstream fout;
	fout.open(FILE_NAME, ofstream::app | ofstream::out);
	cout << "please input something into the test file : ";
	char input_str[MAX_LEN];

	scanf("%s", input_str);
	cout << endl;
	fout << input_str;
	fout.close();

}

void clean_file(){
	cout << endl;
	cout << "start to clean the file" << endl;
	ofstream fout;
	fout.open(FILE_NAME, ofstream::out | ofstream::trunc);
	// ofstream::trunc Any contents that existed in the file before it is open are discarded.

	// only open the file but not write into and the mode is trunc, so the file content will be clean
	fout.close();

}
