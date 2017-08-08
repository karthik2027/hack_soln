#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,j;
    scanf("%d",&n);
    int space=n;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<space;j++)
        {
            printf(" ");
        }
        space--;
        for(j=1;j<=i;j++)
        {
        printf("#");
       
           
    }
        printf("\n");
    }
    
    return 0;
}

