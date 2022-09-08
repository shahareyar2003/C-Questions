#include<stdio.h>
int main(){
    int a[5],low,high,mid,item;
    int f=0;
    printf("Input array elements\n");
    for (int i = 0; i < 5; i++)
    
        scanf("%d",&a[i]);
    
    printf("Entered the item to be searched\n");
    scanf("%d",&item);
    for(low=0,high=4;low<=high;){
        mid=(low+high)/2;
        if(a[mid]==item){
            f=1;
            break;
        }
        else if(a[mid]<item)
            low=mid+1;
        
        else
            high=mid-1;
        

    }
    if(f==1)
        printf("%d item found at index %d.",item,mid);
    
    else
        printf("Not found");
    
    return 0;
}