//codes by shripad ->>
//Reversing of an user input array

#include <stdio.h>

void reverse(int arr[],int n){
    int i = 0;
    int j = n - 1;  
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    printf("Enter the no. of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements for the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is : [");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("]");
    reverse(arr,n);
    printf("\nThe reversed array is : [");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("]");
    return 0;
}
