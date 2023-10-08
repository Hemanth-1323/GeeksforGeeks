//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    int wrong=0;
    for(int i=1;s[i-1]!='\0';i++){
        if(i%2==0 && s[i-1]=='R'){
            wrong++;
        } 
        if(i&2!=0 && s[i-1]=='B'){
            wrong++;
        }
    }
    return wrong;
    
}
