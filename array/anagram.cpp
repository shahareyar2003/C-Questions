#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string a, string b){
        if(a.length()!=b.length()){
            return false;
        }
        else{
            for(int i=0;i<a.length();i++){
                if(isupper(a[i])){
                    a[i]=a[i]+32;
                }
                if(isupper(b[i])){
                    b[i]=b[i]+32;
                }
            }
            int f=0;
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            for(int i=0;i<a.length();i++){
                if(a[i]==b[i]){
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
            if(f==1){
                return true;
            }
            else{
                return false;
            }
        }
}
int main(){
    string a="hhghd";
    string b="hehghd";
    bool res=isAnagram(a,b);
    if(res==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}