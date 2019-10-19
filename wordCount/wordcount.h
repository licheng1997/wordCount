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
void WordCount() //单词统计函数
{
	FILE *fp;
	int w = 0;
fp=fopen("input.txt","r");
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

	fprintf("words：%d\n", w);
	freopen("output.txt", "w", stdout);
	fclose(fp);
}
