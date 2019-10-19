#include<iostream>
#include<cstring>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

string word[1000000];//存词组的数组 
string word1[1000000];//最后排完序的数组 
int fre[1000000]={1};//词频 
int m=1;
int n=10;//默认值 

void coutwords()//统计词组 
{
	for(int i=0;i<1000000;i++)
     {
	     transform(word[i].begin(),word[i].end(),word[i].begin(),::tolower);//字母转小写		
	 }
	
     for(int i=0,j=0;i<1000000;)
     {
		int l=sizeof(word[i]);
        if(l>3)//元素合法性判断 
          {
				string a;
				int len=a.length();
		
              if(a[0]>=97&&a[0]<=122)
              {
                word[i]=word1[j];
                i++,j++;
              } 
              else i++;	
			}
             
     }
}
   

void sizeword()//去除重复元素记录频数 
{
	 for(int i=0;i<1000000;i++)
         for(int j=0;j<1000000;j++)
		 {
		     if(word1[i]==word1[j])
			 {
			    word1[j]="NULL";
				fre[i]++;	
			 }		
		 }	 
}
	
    

void sortwords()//排序
{
	for(int i=0;i<1000000;i++)                      //按词频排序 
	  for(int j=0;j<999999;j++)
	  {
	   if(fre[j]<fre[j+1])
	   {
		string a[0];
		int k;
		k=fre[j],a[0]=word1[j];
		fre[j]=fre[j+1],word1[j]=word1[j+1];
		fre[j+1]=k,word1[j+1]=a[0];	
		}		
	  
       else if(fre[j]==fre[j+1])    //词频相同按字典序排序 
       {
		if(word1[j]>word1[j+1])
        {
			string a[0]=word1[j];
			word1[j]=word1[j+1];
			word1[j+1]=a[0];
		}	
	   }
	  }
}

void out()
{
	if(n!=0)
	{
		for(int j=0;j<n;)
		{
			if(m!=0)
		   {
			 for(int i=0;i<m;i++)
	       {
	            printf("%s",&word1[i]);		
	       }	
	      
			for(int i=0;i<m;i++)
	       {
	             printf("%d",&fre[i]);		
	       }	
	         printf("%n");
	         j++;
		   }
		}
	}
	else
	{
		for(int i=0;i<10;i++)
		{
			 printf("%s",&word1[i]);
			}
		}
}
