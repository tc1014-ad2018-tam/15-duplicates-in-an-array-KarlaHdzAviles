/*This program is to help the user find out how many elements of his array are repeated and duplicate.
 * 
 * 
 * Author:Karla Alexandra Hernandez Aviles
 * E-mail:A01411843@itesm.mx
 * Date:15/08/2018
 * */

//Variables that are used in this program
#include <stdio.h>
#include <stdlib.h>

// Declare Function to compare
int Comp(const void *a, const void *k) {
    return (*(int *) a - *(int *) k);
}

int main() {
    // Declaration of variables
    int count;
    int n;
    int duplicate = 0;

    // In this part we ask for the number of values that the user would like
    printf("Welcome user,this program will help you. How many numbers would you like? : ");
    scanf("%d", &n);

    // In this part we declare the variable for the value of numbers that the user wants
    int numbers[n];

    for(int k = 0; k < n; k++){
        printf("%d:", k+1);
        scanf("%d", &numbers[k]);
    }

    // In this part we declare the function sorting for the duplicate in an array
    qsort(numbers, n, sizeof(int), Comp);

    for(int a = 0; a < n; a+=count+1){
        count = 0;
        for(int c = a + 1; c < n; c++){
            if(numbers[a] == numbers[c]){
                count++;
            }
        }
        if(count > 0){
            duplicate++;
        }
    }

    //in this part, we bring to the user the result of the numbers that are repeated
    printf("The amount of duplicate/repeated values is: %d.", duplicate);

    return 0;
}