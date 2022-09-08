#include<iostream>

using namespace std;

int fibnocii(int num){
    if (num<2){
        return num;
    }
    return fibnocii(num-2)+fibnocii(num-1);
}
int main(){
    int n;
    cout<<"Enter the length of fibnoccii series: ";
    cin>>n;
    cout<<"At index "<<n<<" number is "<<fibnocii(n);
    return 0;
}