//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isGoodString(string s);
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	       string s;
	       cin>>s;
	       cout<<isGoodString(s)<<endl;
	    }
}	    
	    
// } Driver Code Ends

string isGoodString(string s)
{
    
    //iterating over the string till the second last character.
    for(int i = 0 ;i<s.length() - 1;i++)
    {
        // checking if the difference between the current character and the next character is 1 or not,
        // while providing special care for 'a' and 'z'.
        if(abs(s[i] - s[i + 1]) == 1 || (s[i]=='a' && s[i + 1]=='z') ||  (s[i] =='z' && s[i + 1]=='a') )
            continue;
        else
            {
                //if the difference is not 1 and it's not a special case, return "NO".
                return "NO";
            }
    }

    //if all adjacent characters have a difference of 1 or are a special case, return "YES"
    return "YES";    
}