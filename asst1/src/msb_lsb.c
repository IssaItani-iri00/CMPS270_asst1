#include <stdio.h>
/*
**Requires**: input to be strictly greater than 0
**Effects**: returns the position(index) of the least significant bit
*/
int lsb(int in)
{
    if(in == 0){
        return 0;
    }
    else{
        int index = 0;
        while(1){
            if(in & 1 == 1){// checking if the least significant bit is 1
             return index;
            }
            else{
            index++;
            in /= 2;// shifting the binary number to the right
            }
        }
    }
}
/*
**Requires**: input to be strictly greater than 0
**Effects**: returns the position(index) of the most significant bit
*/
int msb(int in)
{
    
    int temp = 1;
    int index =0;
    while(1){ // finding the highest number(power of 2) which is less than the input
        if(temp >= in){
            break;
        }
        else{
            temp *= 2;
            index++;
        }
    }
    if(index < 2){
        return index;
    }
    return index - 1;
}

int main()
{
    int in = 9;
    printf("Enter a positive number:");
    scanf("%d", &in);
    int dis = msb(in) - lsb(in);
    printf("%d",dis);

}