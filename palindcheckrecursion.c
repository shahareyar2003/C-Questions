/*1) If there is only one character in string return true.
2) Else compare first and last characters and recur for remaining substring.*/
#include<stdio.h>
#include<stdbool.h>

bool isPalind(char str[],int s,int e){
    if(s==e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    if (s < e + 1){
        return isPalind(str, s + 1, e - 1);
    }
    return true;
}
int main(){
    char str[]="MalayalaM";
    bool x=isPalind(str,0,3);
    if(x==true){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome nmber");
    }
    return 0;
}