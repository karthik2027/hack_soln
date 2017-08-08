#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n; 
    scanf("%d", &n);
    int *grade = malloc(sizeof(int) * n);
    for(int i=0;i<n; i++){
       scanf("%d",&grade[i]);
    } 
    for(int i=0;i<n;i++)
    {
        if(grade[i]>=0 && grade[i]<=37)
        {}
            
         if(grade[i]>=38 && grade[i]<=100)
         {
             if(grade[i]%5==3)
             grade[i]=grade[i]+2;
             if(grade[i]%5==4)
                 grade[i]=grade[i]+1;
         }
    }
    for(int j=0;j<n;j++)
        printf("%d\n",grade[j]);
}

