//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    void rot(string &s){
        char temp=s[0];
        int le=s.length();
        for(int i=0;i<le-1;i++){
            s[i]=s[i+1];
        }
        s[le-1]=temp;
    }
    bool areRotations(string s1,string s2)
    {
        
        if(s1.length()!=s2.length()){
            return false;
        }
        for(int i=0;i<s1.length();i++){
            if(s1==s2){
                return true;
            }
            rot(s1);
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends