#include <stdio.h>
int countnumber(int a) {
    int count;
    while(a != 0) {
        a = a / 10;
        count++;
    }
    return count;
}
void swap(int digits, int arr[], int input) {
    int thirdvariable = arr[0];
    arr[0] = arr[digits - 1];
    arr[digits - 1] = thirdvariable;
    printf("Reverse of %d is : ",input);
    for(int i = 0; i <= digits - 1; i++) {
        printf("%d",arr[i]);
    }
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    /* Here i am transferring input from user given in varialbe n to an array named arr,
       such that each digit of the number is added in each index of array.
        If I take input from user directly in an array, user have to add spaces between each digits,
        so to solve this, first I have taken input in variable then transferred to array */
    int x = countnumber(n);
    int arr[x];
    int input = n;
    for(int i = x - 1; i >= 0; i--) {
        int lastdigit = n % 10;
        arr[i] = lastdigit;
        n = n / 10;
    }
    swap(x,arr,input);
    return 0;
}
