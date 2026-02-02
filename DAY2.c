//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

//Input:
//- First line: integer n
//- Second line: n space-separated integers
//- Third line: integer pos (1-based position to delete)

//Output:
//- Print the updated array with (n-1) elements, space-separated

//Example:
//Input:
//5
//10 20 30 40 50
//2

//Output:
//10 30 40 50

//Explanation: Delete position 2 (element 20), remaining elements shift left

#include<stdio.h>

int main () {
    int i, n, pos;

    printf("enter the size of element: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("enter the %d element of array : ", i);
        scanf("%d", &arr[i]);
    }

    printf("enter the position at which element should be delete : "); 
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("The new array is : ");
    for(i = 0; i < n - 1; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
