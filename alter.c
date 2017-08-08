#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int alternatingCharacters(char* s){int i,c=0;
    int l=strlen(s);
    for(i=0;i<l;i++) 
    {
        if(s[i]==s[i+1])
            c=c+1;
    }
    return c;
    // Complete this function
} 

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = alternatingCharacters(s);
        printf("%d\n", result);
    }
    return 0;
}

