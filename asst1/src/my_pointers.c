#include <stdio.h>

int merge(char in1[], int in1Size, char in2[], int in2Size){
    int totalSize = in1Size * in2Size;
    int out[totalSize];
    int i = 0;
    int j = 0;
    int k = 0;
   while(1){
    if(in1[i] < in2[j]){
        out[k] = in1[i];
        i++;
        k++;
    }
    else if(in1[i] > in2[j]){
        out[k] = in2[j];
        j++;
        k++;
    }
   }
}

int main(){
    char array1[] = {"ab", "ac"};
    char array2[] = {"za", "zb", "zzzzc"};
    printf("%c",merge(array1, 2, array2, 3));
    return 0;
}