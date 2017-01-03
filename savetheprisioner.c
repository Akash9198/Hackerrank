#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int j,id,rm,n,m;
    int t,i;
    scanf("%d",&t);
        for(i=0;i<t;i++)
        {
        scanf("%ld %ld %ld",&n,&m,&id);
        rm=m%n;
        if(rm==0)
        {   if(id-1>=1)
            printf("%ld\n",id-1);
            else
            printf("%ld",n);
            continue;
        }
        j=id+rm-1;
        if(j>n)
            {
            j=j-n;
        }
        printf("%ld\n",j);
    }
    
    return 0;
}
