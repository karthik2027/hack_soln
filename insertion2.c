#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
int i,j,k,v; 
    for(i=1;i<=ar_size-1;i++) { 
        v = ar[i];
            j = i;
        while(ar[j-1]>v && j>=1) {
            ar[j] = ar[j-1];
            j--; 
        } 
        ar[j] = v;
        k = 0;
        while(k < ar_size)
                printf("%d\t", ar[k++]);
        printf("\n"); 
    }

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
