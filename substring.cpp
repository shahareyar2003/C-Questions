#include<iostream>
using namespace std;
void printsub(string str,string current="",int idx=0){
    if(idx==str.length()){      //  str.length()=3
        cout<<current<<" ";     //  
        return ;
    }
    printsub(str,current,idx+1);
    printsub(str,current+str[idx],idx+1);
}
int main(){
    string str="abc";
    // cout<<str.length()<<endl;  --->  3
    printsub(str,"",0);
    return 0;
}