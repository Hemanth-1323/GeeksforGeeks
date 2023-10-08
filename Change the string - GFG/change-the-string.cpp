//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        if(s[0]>='a' && s[0]<='z'){
            for(int i=1;s[i]!='\0';i++){
                if(s[i]>='a' && s[i]<='z'){
                    
                }
                else{
                    s[i]+=32;
                }
            }
        }
        else{
            for(int i=1;s[i]!='\0';i++){
                if(s[i]>='A' && s[i]<='Z'){
                    
                }
                else{
                    s[i]-=32;
                }
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends