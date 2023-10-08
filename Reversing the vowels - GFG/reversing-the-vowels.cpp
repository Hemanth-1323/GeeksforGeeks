//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            string res="";
            for(int i=0;s[i]!='\0';i++){
                if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                    res+=s[i];
                }
            }
            int l=res.length();
            for(int i=0;i<l/2;i++){
                char temp;
                temp=res[i];
                res[i]=res[l-i-1];
                res[l-i-1]=temp;
            }
            int j=0;
            for(int i=0;s[i]!='\0';i++){
                if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                    s[i]=res[j];
                    j++;
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends