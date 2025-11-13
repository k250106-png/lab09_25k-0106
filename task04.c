#include<stdio.h>
int passByValue(int n){
    n = n + 1 ;
}
int passByReference(int* n){
    *n = *n + 1 ;
}

int main(){
    int n = 80;
    
    printf("Before updateValue: %d\n", n);
    passByValue(n);
    printf("After updateValue: %d  (no change)\n", n);

    printf("\nBefore updateReference: %d\n", n);
    passByReference(&n);
    printf("After updateReference: %d  (updated successfully)\n", n);
    return 0;
}