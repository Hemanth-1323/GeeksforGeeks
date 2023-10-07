//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    if(x[0]=='\0'){
        return 0;
    }
    for(int i=0;s[i]!='\0';i++){
        bool istrue=true;
        for(int j=0;j<x[j]!='\0';j++){
            if(s[i+j]=='\0'){
                return -1;
            }
            if(s[i+j]!=x[j]){
                istrue=false;
                break;
            }
            
        }
        if(istrue){
            return i;
        }
    }
    return -1;
}



