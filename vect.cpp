#include<iostream>
#include<vector>
using namespace std;
// void reverseInGroups(vector<long long>& arr, int n, int k){
//         vector<int>res;
//         for(int i=k-1;i>=0;i--){
//             res.push_back(arr[i]);
//         }
//         for(int i=n-1;i>=k;i--){
//             res.push_back(arr[i]);
//         }
//         for(int i=0;i<n;i++){
//             cout<<res[i]<<" ";
//         }
// }
int main(){
    vector<long long>arr={1,2,3,4,5};
    vector<int>a={1,2,3,4,5};

    // .begin():- Return iterator to beginning
    vector<int> :: iterator iter = a.begin();

    // .end():- 
    vector<int> :: iterator it = a.end();
    for(iter;iter!=it;iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    return 0;
}