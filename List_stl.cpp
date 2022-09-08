/* A List is a bi-directional linear storage of elements.
Few key features as to why a list should be used is:- 
    1. It gives faster insertion and deletion operations.
    2. Its access to random elements is slow.

An array stores the elements in a contiguous manner in which inserting some element calls for a shift of other elements, which is time taking. But in a list, we can simply change the address the pointer is pointing to. */
#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1;   // list of zero element.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    cout<<endl;
    list1.pop_back();
    cout<<"After pop_back() list1 = ";
    display(list1);

    list<int> list2(3); // empty list of size 3.
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter=6;
    iter++;
    *iter=18;
    iter++;
    *iter=10;
    iter++;
    cout<<endl;
    display(list2);
    return 0;
}