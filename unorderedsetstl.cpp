/*
    Applications:
    We can use anywhere when we need following operations (or a subset of following operation quickly)
        1.search
        2.delete
        3.insert
*/
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);

    // print element of set
    cout<<"All elements are print in any order."<<endl;
    for(int x:s)
        cout<<x<<" ";
    cout<<endl;
    for(auto it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // to get size of set.
    cout<<"initial size is: ";
    cout<<s.size()<<" ";

    // remove all element from set.
    s.clear();
    cout<<endl;
    cout<<"After clear size is: ";
    cout<<s.size()<<" ";
    cout<<endl;
    cout<<endl;

    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);

    // Finding element in set
    cout<<"Finding element in unordered set: ";
    if(s.find(50)==s.end()){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found";
    }

    cout<<endl;
    cout<<*(s.find(50));
    cout<<endl;

    // returns 1 if element found otherwise 0
    if(s.count(50)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    cout<<endl;
    cout<<(s.count(50));    
    cout<<endl;
    cout<<(s.count(5));

    cout<<endl;
    // erase selected elements in set.
    cout<<s.size()<<endl;
    s.erase(50);
    cout<<s.size()<<endl;
    auto it=s.find(60);
    s.erase(it);
    cout<<s.size()<<endl;

    cout<<endl<<"New set ";
    unordered_set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    for(int x1:s1){
        cout<<x1<<" ";
    }
    cout<<endl;
    cout<<"Before erasing elements size = ";
    cout<<s1.size();
    s1.erase(s1.begin(),s1.end());
    cout<<endl<<"After erasing elements size = ";
    cout<<s1.size();
    return 0;
}