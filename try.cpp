#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,arr[N];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    // cout<<arr[N];
    for(int j=0;j<N;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
