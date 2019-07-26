#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,digits_in_binary=0, set_bits=0;
	cin>>n;
	digits_in_binary=log2(n)+1;
	
	for(int i=0;i<digits_in_binary;i++)
	{
		set_bits+= (n+1)/((int)pow(2,i+1)) * pow(2,i);		//For complete repetitive blocks
		set_bits+= ((n+1)%((int)pow(2,i+1)) > pow(2,i)) ? ((n+1)%((int)pow(2,i+1)) - pow(2,i)) : 0 ;		//For fractional part
	}
	
	cout<<"Number of set bits are "<<set_bits;
	
	return 0;
}
