//codes by shripad ->>
#include <stdio.h>

int main(){
    int arr[3];
    for(int i = 0; i < 3; i++){
        printf("\nEnter the %dst element for Array : ", i + 1);
        scanf("%d", &arr[i]);
    }
printf("The final Array is : ");
        printf("\n| ");
    for(int i = 0; i < 3; i++){
        printf("%d | ",arr[i]);
    }
    return 0;
}
