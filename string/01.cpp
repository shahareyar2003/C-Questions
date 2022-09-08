#include<iostream>
using namespace std;
int main(){
    char name[]={'A','n','j','u','m','\0'};
    /*
    '\0' is called null character and it is the only way the functions that work with string can know where the string ends.
    */
    char a[]="Shahareyar";
    int i=0,j=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    while(a[j]!='\0'){
        printf("%c",a[j]);
        j++;
    }
    return 0;
}