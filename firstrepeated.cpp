// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    int l=s.size();
    string y;
    for(int i=0;i<l;i++){
        for (int j=(i+1);j<l;j++){
            if(s[i]==s[j])
            {
                y=s[i];
                break;
            }
            
        }
    }
                return y;
}
