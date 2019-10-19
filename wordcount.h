#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int WordCount() //单词统计函数
{
	FILE *fp;
	int w = 0;
	fp = fopen("input.txt", "r");//文件读取
	char ch;
	
	ch = fgetc(fp);
	while (ch != EOF)
	{	
		int first_count = 0,last_count=0;
		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
		{
			while ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
			{
				first_count++;
				ch = fgetc(fp);
			}
			while ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')||(ch>='0'&&ch<='9'))
			{
				last_count++;
				ch = fgetc(fp);
			}
			if ((first_count >= 5) || ((first_count >= 4) && (last_count >= 1)))
			{
				w++;
			}
			ch = fgetc(fp);
		}
		else
		{
			ch = fgetc(fp);
		}
	}
	fclose(fp);
	return w;
	//fp = fopen("output.txt", "w");
//	fprintf(fp, "words:%d", w);
		//fclose(fp);
}
