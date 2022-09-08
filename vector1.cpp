// vector<int> vec1;      //zero length integer vector
// vector<char> vec2(4);  //4-element character vector
// vector<char> vec3(vec2);//4-element character vector from vec2
// vector<int> vec4(6,3); //6-element vector of 3s
#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Displaying vector "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
}
int main(){
    vector<int> vec1; // Zero length integer vector.
    display(vec1);
    vector<char> vec2(4); // 4 element character vector.
    display(vec2);
    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);
    vector <int> vec4(6,3); // 6 element vector of 3's
    display(vec4);
    return 0;
}