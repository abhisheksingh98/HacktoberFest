#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char s[1000];
	cin.getline(s,1000);
	int l=strlen(s);
	int f[26]={0};
	for(int i=0;i<l;i++)
	{
		f[s[i]-'a']++;
	}
	int max=0;
	int maxindex;
	for(int i=0;i<26;i++)
	{
		if(f[i]>=max)
		{
			max=f[i];
			maxindex=i;
		}
	}

	char b=maxindex+'a';
	cout<<b;
	return 0;
}
