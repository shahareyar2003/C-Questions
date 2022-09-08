#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reverse_word(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while (s[i]!=' '&& i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
void reverse(string s){
    stack<char>s1;
    for(int i=0; i<s.length();i++){
        s1.push(s[i]);
    }
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
}
int main(){
    string s="I am Khan";
    reverse_word(s);
    cout<<endl;
    string a="rameshwar";
    reverse(a);

    return 0;
}