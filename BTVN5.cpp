#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int A[30],B[31];
	int n,k,vt,x;
	cout<<"-----CAC PHAN TU CUA MANG BAN DAU -----"<<endl;
	for(int i=0;i<30;i++)
	{
	 A[i]=rand()%100;
	 cout<<A[i]<<"\t";
	}
	cout<<endl;	
	cout<< " sap xep mang theo thu tu tang dan la :"<<endl;
	for(int i=0;i<30;i++)
		{
			x=A[i];
			vt=i;
			while(vt>0&&x<A[vt-1])
				{
					A[vt]=A[vt-1];
			        vt--;
			    }
	        A[vt]=x;
         }
    for(int i=0;i<30;i++) cout<< A[i]<<"\t";
    cout<<endl;;	
	cout<<" gia tri can chen vao mang la : ";
	cin>>n;
	cout<<"\n";
	cout<<" vi tri can chen vao mang la :";
	cin>>k;
	cout<<" mang sau khi chen la "<<endl;
	for(int i=0;i<k;i++)
	{
		B[i]=A[i];
	}
	B[k]=n;
	for(int i=k+1;i<30;i++)	
	{
		for(int j=i;j<31;j++)
		{
			B[j]=A[i];
		}
	}
	for(int i=0;i<31;i++) cout<<B[i]<<"\t";
	cout<<endl;	
	cout<< " sap xep mang theo thu tu tang dan la :"<<endl;
	for(int i=0;i<31;i++)
		{
			x=B[i];
			vt=i;
			while(vt>0&&x<B[vt-1])
				{
					B[vt]=B[vt-1];
			        vt--;
			    }
	        B[vt]=x;
         }
    for(int i=0;i<31;i++) cout<< B[i]<<"\t";
    cout<<endl;;
	return 0;
	}
	
		
	
