#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i;
    for(i=0;i<100;i++)//GENERATES RANDOM
    {
        a[i]= 0 + (int) (rand()/ (double) (RAND_MAX +1)*(1+1));
    }



//DISPLAYING EDGES

for(i=0;i<100;i++)
    {
        if(a[i]<a[i+1])
       printf("||THE WAVE IS RISING||CLOCK CYCLE %d||\n",i+1);
       else if(a[i]>a[i+1])
       printf("||THE WAVE IS FALLING||CLOCK CYCLE %d||\n",i+1);
       else
       printf("||THE WAVE IS STABLE||CLOCK CYCLE %d||\n",i+1);
    }

    for(i=0;i<100;i++) //to plot the wave
    {
        if(a[i]==1)
       printf("| |");
       else if(a[i]==0)
       printf( "__" );

    }


    return 0;
    //Hello from the other side xD
    //OK
}
// a
