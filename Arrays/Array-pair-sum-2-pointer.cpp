#include<stdc++.h>
using namespace std;

int main() {
	int n;
	int a[10000];
	cin>>n;
	for(int itr=0;itr<n;itr++){
		cin>>a[itr];
	}
	int s;
	cin>>s;
	sort(a,a+n);
	int i=0;
	int j=sizeof(a)/sizeof(int) -1;
	while(i<j)
	{
		int csum = a[i]+a[j];
		if(csum>s)
		{
			j--;
		}
		else if(csum<s)
		{
			i++;
		}
		else if(csum==s)
		{
			cout<<a[i]<<" and "<<a[j];
			i++;
			j--;
		}
	}

	return 0;
}