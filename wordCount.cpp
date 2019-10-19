#include <iostream>
#include <fstream>
#include "characters1.h"
#include "wordcount.h"
#include "count_line.h"
using namespace std;
int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	int cnum,wnum,lnum;
	cnum=characters();
	wnum=WordCount();
	lnum=count_line();
	
	
	outfile.open(argv[4]);
	outfile<<"characters:"<<cnum<<endl;
	outfile<<"words:"<<wnum<<endl;
	outfile<<"lines:"<<lnum<<endl; 
	
 } 
