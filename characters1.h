#include <iostream> 
#include <fstream> 
using namespace std; 
int characters() 
{   
	fstream infile;
	ofstream outfile;
	infile.open("input.txt"); 
	outfile.open("output.txt");
	char ch; 
	int counter = 0; 
	while (infile && infile.get(ch)) 
	{ 
		counter++; 
	} 
	//outfile<< "characters:" << counter << endl; 
	return counter;
}

