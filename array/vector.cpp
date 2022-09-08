/*  include the header file <vector>.
And the syntax we use to define a vector is:
vector<data_type> vector_name;


vector<int> vec1;      //zero length integer vector
vector<char> vec2(4);  //4-element character vector
vector<char> vec3(vec2);//4-element character vector from vec2
vector<int> vec4(6,3); //6-element vector of 3  */
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of vector:-";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element to add in this vector:-";
        cin>>element;
        vec1.push_back(element);
    }
    cout<<"Vector initially:"<<endl;
    display(vec1);

    vec1.pop_back();
    cout<<endl<<"Vector after pop_back():"<<endl;
    display(vec1);

    cout<<endl<<"Vector after insert():"<<endl;
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,10);
    // vec1.insert(iter+1,20);
    vec1.insert(iter+1,3,20);

    display(vec1);


    return 0;
}