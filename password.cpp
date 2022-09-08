#include<iostream>

using namespace std;
int main(){
    string s1,s2;
    s1="Khan@123";
    int y=3;
    cout<<"Enter password"<<endl;
    cin>>s2;
    for (int i=0;i<10;i++){
        if(s1==s2){
            cout<<"Login Successful"<<endl;
            break;
        }
        else{
            if (i==2){
                cout<<"Account is Locked!"<<endl;
                break;
            }
            else{
                cout<<"Wrong password"<<endl;
                y=y-1;
                cout<<"Number of attempt left "<<y<<endl;
                cout<<"Enter password"<<endl;
                cin>>s2;
                continue;
            }
        }
    }
    return 0;

}