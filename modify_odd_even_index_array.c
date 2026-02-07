.
.
.
//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
//codes by shripad ->>

#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    printf("Array before change : [");
       for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }printf("]");
    for(int i=0;i<4;i++){
        if(i%2 !=0){
            arr[i]=arr[i]*2;
        }else{
              arr[i]=arr[i]+10;
        }
    }
    printf("\nArray after Change : [");
    for(int k=0;k<4;k++){
        printf("%d ",arr[k]);
    } printf("]");
    return 0;
}
