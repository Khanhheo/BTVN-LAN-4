#include <iostream>
#include<math.h>
using namespace std;
int main()
{
//	Nhap mang ;
	int n,mang[n],dem;
	cout<<" nhap so phan tu cua mang : "<< endl;
    cin>> n;
    for(int i=0;i<n;i++)
    {
    	cout<<" phan tu thu "<<i<<" :";
    	cin>>mang[i];
    }
//    Kiem tra so nguyen to;
    cout<<" cac so nguyen to co trong mang la : "<<endl;
    for(int i=0;i<n;i++)
	{
       if(mang[i]>2)
	  {
	    int count = 0;
        for(int j = 2; j <= sqrt(mang[i]);j++)
	    {
        if(mang[i] % j == 0)
		{
            count++;
        }
        }
       if(count == 0)
       {
        cout << mang[i] << "\t";
        dem++;
       }
      }
    }
    cout<<endl;
    cout<<" trong mang co "<<dem<<" so nguyen to"<<endl;
	return 0;
} 	
    	
    
    

