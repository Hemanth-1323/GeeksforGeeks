//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    string ans="";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            ans+=(char)('z'-(s[i]-'a'));
        }
        if(s[i]>='A' && s[i]<='Z'){
            ans+=(char)('Z'-(s[i]-'A'));
        }
    }
    return ans;
}