#include <stdio.h>
const int SIZE = 10;
/*
**Requires**: input to be a 1D array of integers
**Effects**: outputs the the value at each index
*/
void printArray(int in[])
{
    printf("Index Value\n");
    for(int i = 0; i < SIZE; i++){
        printf("    %d     %d\n",i ,in[i]);
    }
}
// function to print stars(for local use only)
void printStars(int in)
{
    for (int i = 0; i < in; i++){
        printf("*");
    }
}
/*
**Requires**: input to be a 1D array of integers
**Effects**: outputs the reccurence of every integer in the array and stars 
*/
void arrayHistogram(int in[])
{
    int temp[] = {1,2,3};
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(int i = 0; i < SIZE; i++){
        if(in[i] == 1){
            count1++;
        }
        else if(in[i] == 2){
            count2++;
        }
        else{
            count3++;
        }
    }
    int counters[] = {count1, count2, count3};
    printf("Value Frenquency Histogram\n");
    for(int i = 0; i < 3; i++){
        printf("    %d          %d", temp[i], counters[i]);
        for(int j = 0 ; j< SIZE - counters[i]; j++){
            printf(" ");
        }
        printStars(counters[i]);
        printf("\n");
    }
}
/*
**Requires**: both indeces to be greater than or euqla to 0
**Effects**: replaces both indeces in teh array
*/
void swapValues(int in[], int index1, int index2){

    int temp = in[index1];// storing first indext in a temp variable
    in[index1] = in[index2];// swapping indeces
    in[index2] = temp;
}

/*
**Requires**: a 1D array of integers
**Effects**: sorts the array using the logic of bubble sort
*/
int bubbleSort(int in[]){
    for(int i =0; i < SIZE ; i++){
        for(int j = i+1; j < SIZE; j++){
            if(in[i] > in[j]){
                swapValues(in, i, j);
            }
        }
    }
}
/*
**Requires**: a 1D array of integers
**Effects**: outputs the value stored at the middle of the array
*/
int median(int array[]){
    return array[SIZE/2];
}

/*
**Requires**: a 1D array of integers and its size
**Effects**: outputs 1 if the array is sorted and 0 if not
*/
int isSorted(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1 ; j < size; j++){
            if(array[i]>array[j]){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int array[]={1,1,3,1,2,2,1,3,1,2};
    // arrayHistogram(array);
    // printArray(array);
    // printStars(5);
    // swapValues(array, 0, 2);


    //Testing bubbleSort and isSorted
    // printf("%d",isSorted(array, 10));
    // printf("\n");
    // bubbleSort(array);
    // printArray(array);
    // printf("%d",isSorted(array, 10));
}