//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int>hash(26,0);
        for(auto i:str){
            hash[i-'a']++;
        }
        int max=0;
        char ch;
        for(int i=0;i<26;i++){
            if(hash[i]>max){
                max=hash[i];
                ch=i+'a';
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends