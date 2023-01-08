#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);
long parse_long(char*);


#include <stdio.h>

int main(){
    int i, j, n,k, count =0;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i< n;i++)
        for(j=0;j< 2 ;j++)
        scanf("%d",&a[i][j]);
       for(i=0;i< n;i++)
           for(k=i+1;k < n;k++)
            for(j=0;j< 2 ;j++){
                               if(a[k][j]/a[i][j] == a[k][j+1]/a[i][j+1] )    count++;
                printf( "%d" "=" "%d" "\n"  , a[k][j]/a[i][j] ,a[k][j+1]/ a[i][j+1]);
                   
                }
    printf("%d", count);
    return 0;
}  



