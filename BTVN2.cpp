#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int mang[20],chinhphuong[20],dem;
	cout<<" ------CAC PHAN TU CUA MANG ----"<<endl;
	for(int i=0;i<20;i++)
	{
		mang[i]=rand()%100;
		cout<<mang[i]<<"\t";
	}
	cout<<endl;
	cout<<" cac so chinh phuong trong mang :"<<endl;
	for( int i=0;i<20;i++)
	{
		for(int j=0;j<=mang[i]/2;j++)
		{
			if(j==sqrt(mang[i]))
			{
				cout<<mang[i]<<"\t";
				dem++;
			}
		}
	}
	cout<<"trong mang co : "<<dem<<" so chinh phuong";

	return 0;
}			
			
	      
	
			
		
	
		
	
