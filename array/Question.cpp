// WAP to read the marks of 10 students in the range 0-100. Then make 10 groups: 0-10, 10-20, 20-30, etc. Count the number of values that falls in each group and display result.
#include<iostream>
using namespace std;
int main(){
    int marks[15],n,groups[15]={0};
    cout<<"Enter the marks of 10 students: "<<endl;
    for(int i=0;i<10;i++){
        cin>>marks[i];
        ++groups[marks[i]/10];
    }
    for(int j=0;j<10;j++){
        cout<<endl<<j<<"\t\t"<<groups[j];
    }
    return 0;
}
