#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
		string a,b,d,e;
		char c1, c2;					//c for clockwise, d for anticlockwise
		cin>>b;
		cin>>a;
		int l=b.size();
		c1=b[l-2];c2=b[l-1];
		string temp;
		temp=c1;
		d=temp;
		temp=c2;
		d+=temp;
		d+=b;

		//Rotatated. 2 garbage values present.
		d.erase(l,2);
		
		
		e=b;
		for(int i=0;i<l-2;i++)
		{
			e[i]=b[i+2];
		}
		
		e[l-2]=b[0];
		e[l-1]=b[1];
		/*cout<<a.size();
		cout<<d.size();
		cout<<b<<" "<<a<<" "<<d<<" "<<e<<endl;*/
		if(a==d || a==e)
		cout<<"1";
		else
		cout<<"0";
		
		cout<<endl;
		
		t--;
	}
	return 0;
}
