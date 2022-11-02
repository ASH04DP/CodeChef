#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
    {
        int a, ta, b, tb;
        scanf("%d%d",&a,&b);
        ta= a*2;
        tb=b*5;
        if(ta>tb)
        {
            printf("\nChocolate");
        }
        else if(tb>ta)
        {
            printf("\nCandy");
        }
        else if(ta==tb)
        {
            printf("\nEither");
        }
    }
	return 0;
}

