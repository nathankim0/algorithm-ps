#include <iostream>using namespace std;int main(){	int a[9],max=0,maxi;	for(int i=0;i<9;i++)	{		cin>>a[i];		if(a[i]>max)		{			max=a[i];			maxi=i;		}	}	cout<<max<<'\n'<<maxi+1;	}