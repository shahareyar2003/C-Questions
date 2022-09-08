#include<iostream>

using namespace std;
int main(){

    // An array is a collection of items of similar type and stored in contiguous memory location
    
    int marks[]={50,66,99,75,40,87,12};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    // We can update the items of array
    marks[2]=90;

    for(int i=0;i<7;i++){
        cout<<"marks["<<i<<"] = "<<marks[i]<<endl;
    }
    return 0;
}