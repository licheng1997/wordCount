#include<iostream>
#include<cstring>
#include<cstdio>
#include<fstream>
using namespace std;
int count_line()
{
	string s;
	ifstream infile;
	ofstream outfile;
	infile.open("input.txt");
	outfile.open("output.txt");
	char p;
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
//	outfile<<"lines:"<<count<<endl;
return count;
}
