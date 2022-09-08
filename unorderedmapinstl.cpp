#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m["wthree"]=40;
    
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    m.insert({"Courses",15});
    cout<<endl<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    // find element in map
    if(m.find("ide")!=m.end()){
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }
    cout<<endl;
    auto it=m.find("gfg");
    if(it!=m.end()){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    else{
        cout<<"item not found in  map."<<endl;
    }

    //print full map
    cout<<("key, value in map are: ")<<endl;
    for(auto t=m.begin();t!=m.end();t++){
        cout<<(t->first)<<"  "<<(t->second)<<endl;
    } 

    //count 
    cout<<m.count("gfg")<<endl;
    cout<<m.count("gf")<<endl;
    

    //size
    cout<<"Size of map "<<m.size()<<endl;

    // erase
    m.erase("gfg");
    cout<<"Size of map after erase "<<m.size()<<endl;

    return 0;
}
