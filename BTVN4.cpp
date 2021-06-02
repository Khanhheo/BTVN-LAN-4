#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int mang[20],max,vt,min;
//	tao gia tri cho mang;
	cout<<"---CAC PHAN TU CUA MANG ---"<<endl;
	for(int i=0;i<20;i++)
	{
	    mang[i]=rand()%100;
		cout<<mang[i]<<"\t";
	}
	cout<<endl;
// tim gia tri max va vi tri;
    max=mang[0];
	for(int i=1;i<20;i++)
	{
		if(mang[i]>max)
		{
		max=mang[i];
		}
	}
	cout<<" cac vi tri co gia tri max : ";
	for(int i=0;i<20;i++)
	{
		if(mang[i]==max)
		{
			cout<<i<<"\t";
		}	
	}
	cout<<"\n";
	cout<<" gia tri lon nhat la : "<<max<<endl;
//	tim gia tri nho nhat va vi tri;
    min=mang[0];
	for(int i=1;i<20;i++)
	{
		if(mang[i]<min)
		{
		min=mang[i];
		}
	}
	cout<<" cac vi tri co gia tri min  : ";
	for(int i=0;i<20;i++)
	{
		if(mang[i]==min)
		{
			cout<<i<<"\t";
		}	
	}
	cout<<"\n";
	cout<<" gia tri nho nhat la : "<<min<<endl; 
	return 0;
	}			
		
		
	
