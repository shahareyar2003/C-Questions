#include<iostream>
#include<vector>
using namespace std;

// vector as a argument.
void inpout(vector<int> &vect){
    vect.push_back(10);
    for (int i = 0; i < vect.size(); i++) 
        cout << vect[i] << " ";
}
// 
vector <int> multiplybyfour(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++) 
        arr[i]=arr[i]*4;
    return arr;
}
int main(){
    vector <int> v1;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(8);
    inpout(v1);
    cout<<"\nVector return type function call\n";
    vector<int> res=multiplybyfour(v1);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}