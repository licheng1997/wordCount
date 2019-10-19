#include<iostream>
#include<cstring>
#include<cstdio>
#include<fstream>
using namespace std;
void count_line()
{
	string s;
	ifstream infile;
	ofstream outfile;
	infile.open("intput.txt");
	outfile.open("output.txt");
	while(!infile.eof())
	{
		infile.get(p);
		s.push_back(p);
	}
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='\n')
		{
			count++;
			while(s[++i]=='\n'&&i<s.length());
		}
	}
	if(s[s.length()-1]!='\n')
	count++;
	outfile<<line:<<count<<endl;
}
