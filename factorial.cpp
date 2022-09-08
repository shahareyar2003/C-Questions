// #include<iostream>
// using namespace std;
// int main(){
//     int num,fact=1;
//     cout<<"Enter the number: ";
//     cin>>num;
//     while (num>0){
//         fact=fact*num;
//         num=num-1;
//     }
//     cout<<"Factorial is "<<fact;

// }
#include<iostream>
using namespace std;
int main(){
    int num=654, count=0;
    while(num>0){
        count++;
        num=num/10;
    } 
    cout<<count;  
    return 0;
}