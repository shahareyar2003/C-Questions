#include<iostream>
using namespace std;
class Shopitem{
    int id;
    float price;
    public:
        void SetData(int a,float b){
            id=a;
            price=b;
        }
        void getData(){
            cout<<"Code of this item = "<<id<<endl;
            cout<<"Price of this item = "<<price<<endl;
        }
};
int main(){
    int size=3;
    Shopitem *ptr=new Shopitem[size];
    Shopitem *ptrTemp=ptr;
    int p,i;
    float q;
    for (i=0;i<size;i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->SetData(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}