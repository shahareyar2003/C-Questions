// #include<stdio.h>
// void display(int,int);
// struct point{
//     int x;
//     int y;
// };
// int main(){
//     //struct point p1= {2,3};
//     struct point p1;
//     p1.x=5;
//     p1.y=6;
//     display(p1.x,p1.y);
// }
// void display(int a, int b){
//     printf("two point are %d %d",a,b);
// }
// #include<stdio.h>
// typedef struct points {
//     int x;
//     int y;
// }point;
// void display(point);
// int main(){
// point p1;
// p1.x=4;
// p1.y=4;

// display(p1);
// }
// void display(point p1){
//     printf("%d %d ",p1.x,p1.y);
// }
#include<stdio.h>
#include<stdlib.h>
typedef struct myarry {
    int total_size;
    int used_size;
    int* ptr;
}arry;
void createarry(arry *a, int ,int);
void show(arry *a);
int main(){
    struct myarry marks;
    createarry(&marks,100,20);
    show(&marks);
}
void createarry(arry*a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).ptr= (int *)malloc(tsize*sizeof(int));
}
void show(arry *a){
    for(int i=0;i<(*a).used_size;i++){
        printf("%d\n",a->ptr[i]);
    }
}
