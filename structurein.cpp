#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    struct Student{
      int age;
      string n1;
      string n2;
      int stand;  
    };
    
    struct Student h;
    cin>>h.age;
    cin>>h.n1;
    cin>>h.n2;
    cin>>h.stand;
    
    cout<<h.age<<" "<<h.n1<<" "<<h.n2<<" "<<h.stand; 
    return 0;
}
