#include<iostream>
using namespace std;
int main(){
    char name[]="Klinsman";
    char *ptr;
    ptr=name;       /*  Store base address of string  */
    // *ptr=name[0]
    // *(ptr+1)=name[1]
    while(*ptr!='\0'){
        cout<<*ptr;
        ptr++;
    }
    return 0;
}