#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Enter word: ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if (s.at(i)=='a' ||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='I'||s.at(i)=='O'||s.at(i)=='U'){
            count+=1;
        }
    }
    cout<<"Total number of vowels in string "<<s<<" is "<<count<<endl;
    return 0;
}