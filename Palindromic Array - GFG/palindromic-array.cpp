//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int palin(string s){
        int len=s.size();
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-i-1]){
                return 0;
            }
        }
        return 1;
    }
    int PalinArray(int a[], int n)
    {
        int res=0;
    	for(int i=0;i<n;i++){
    	    string s=to_string(a[i]);
    	    int t=palin(s);
    	    if(t==0){
    	        return 0;
    	    }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends