#include <stdio.h>

/*
**Requires**: both inputs to be positive.
**Effects**: prints out the hamming distance between the inputs
*/
int hammingDistance(int in1, int in2){
    int xor = in1 ^ in2; // finding the difference between the inputs
    int counter = 0;
    while(xor > 0){
        if(xor & 1 == 1){ // checking if the last digit in the number is 1 or 0
            counter++;
        }
        xor /= 2; // removing the last digit from the number by shifitng it to the right
    }
    return counter;
    
}

int main(){
    int in1 ;
    int in2 ;
    while(1){
        printf("\n");
        printf("Please enter two positive integers, and a negative one to exit:");
        scanf("%d",&in1);
        
        if(in1 < 0){
            break;
        }
        scanf("%d",&in2);
        
        if(in2 < 0){
            break;
        }
        printf("%d",hammingDistance(in1, in2));
    }
    // printf("%d",hammingDistance(in1, in2));
}
