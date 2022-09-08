#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,element;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>element;
        v.push_back(element);
    }
    int x,a,b;
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+2);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}