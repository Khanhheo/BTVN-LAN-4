#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int so[20],chan[20],le[20];
	int j,k,x,vt,vt1,vt2,maxchan,maxle;
//	tao mang;
	cout<<" --------CAC PHAN TU CUA MANG ------- "<<endl;
	for(int i=0;i<20;i++)
	{
		so[i]= rand()%100;
		cout<<so[i]<<"\t";
	}
	cout<<"\n";
//	tim so chan, le lon nhat va vi tri;
	for(int i=0;i<20;i++)
	{
		if(so[i]%2==0)
		{
			for(int j=i;j<20;j++)
			{
				if(so[j]%2==0&&so[j]>maxchan)
				{
					maxchan=so[j];
					vt1=j;
				}
			}
	    }
	    else
	    {
	
			for(int j=i;j<20;j++)
			{
				if(so[j]%2!=0&&so[j]>maxle)
				{
					maxle=so[j];
					vt2=j;
			    }
			}
		}
	}   	
	cout<<" phan tu chan lon nhat la : "<<maxchan<<"; VT: "<<vt1<<endl;
	cout<<" phan tu le lon nhat la : "<<maxle<<"; VT: "<<vt2<<endl;						
//tao mang chan, mang le;	
    for(int i=0;i<20;i++)
	{
		if(so[i]%2==0)
		{
			chan[j]=so[i];
			j++;
	    }
		else   
		{
			le[k]=so[i];
			k++;
		}
	}
//	sap xep mang chan
	cout<< " sap xep so chan theo thu tu tang dan la :"<<endl;
	for(int a =0;a<j;a++)
	{
		x=chan[a];
		vt=a;
		while(vt>0&&x<chan[vt-1])
		{
			chan[vt]=chan[vt-1];
		    vt--;
	    }
	    chan[vt]=x;
    }
    for(int i=0;i<j;i++) cout<< chan[i]<<"\t";
    cout<<" so phan tu chan la : "<<j;
    cout<<endl;
    cout<<" sap xep so chan theo thu tu giam dan la :"<<endl;
	for(int a =0;a<j;a++)
	{
		x=chan[a];
		vt=a;
		while(vt>0&&x>chan[vt-1])
		{
			chan[vt]=chan[vt-1];
			vt--;
		}
	    chan[vt]=x;
    }
    for(int i=0;i<j;i++) cout<< chan[i]<<"\t";
    cout<<endl;
// sap xep mang le       
    cout<< " sap xep so le theo thu tu tang dan la :"<<endl;
	for(int b=0;b<k;b++)
		{
			x=le[b];
			vt=b;
			while(vt>0&&x<le[vt-1])
				{
					le[vt]=le[vt-1];
			        vt--;
			    }
	        le[vt]=x;
         }
    for(int i=0;i<k;i++) cout<< le[i]<<"\t";
    cout<<endl;
    cout<<" sap xep so le theo thu tu giam dan la :"<<endl;
	for(int b =0;b<k;b++)
		{
			x=le[b];
			vt=b;
			while(vt>0&&x>le[vt-1])
				{
					le[vt]=le[vt-1];
			        vt--;
			    }
	        le[vt]=x;
        }
    for(int i=0;i<k;i++) cout<< le[i]<<"\t";  
	return 0;
	}
	
	
		
		

