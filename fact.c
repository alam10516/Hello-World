/*#include<stdio.h>
int fact(int);
int main()
{
int n,m;
gets(n);
m=fact(n);
puts(m);
return 0;
}
int fact(int n)
{
if(n==0)
return 1;
else 
return n*fact(n-1);
}*/





#include"stdio.h"

int main(int argc, char *argv[])

{ 

    int n,f=1,i;     

    n = atoi(argv[1]);    

    for( i = 1; i <=n ; ++i ) 

    {

        f = f*i;

    }

    printf("%d",f);     

    return 0;      

}
