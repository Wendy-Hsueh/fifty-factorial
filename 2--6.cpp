#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	while(true){
		int n=50;
		cout << "½Ð¿é±ý­pºâ¤§¶¥¼h¡G" ;
		cin >> n;
		cout << n << "!=";
		
		int a[101]={0};  
		a[0]=1;
		
		for(int j=1; j<=n; j++)
		{
			for(int i=0; i<=100; i++)  
			{a[i]*=j;}
			
			for(int i=0; i<=100; i++) 
			{
				if(a[i]>=10)
				{
					int temp=a[i];
					a[i]=a[i]%10;
					a[i+1] += (temp/10);
				}
			} 
		}
	
		for(int i=100; i>=0; i--)
		{
			if(a[i]!=0)
			{
				for(int j=i; j>=0; j--)
					cout << a[j];
				cout << endl;
				break;
			}
		}
	} 
	
	return 0;
} 
