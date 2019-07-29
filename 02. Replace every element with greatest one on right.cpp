//An O(n) solution for replacing every element in the array with the greatest one on the right side

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	       
	    int cur_max=a[n-1];
	    a[n-1]=-1;
	    for(int i=n-2;i>=0;i--)
	    {
	        int e=a[i];
	        a[i]=cur_max;
	        cur_max=max(e,cur_max);
	    }
	    
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    cout<<endl;
	    t--;
	}
	return 0;
}
