#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include<ctype.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    int l=strlen(s);
    int i, c=1;
    for(i=0;i<l;i++)
    { 
        if(isupper(s[i]))
           c++;
    }
           printf("%d",c);
    return 0;
}

