#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if(z>=y)
        {
            printf("%d\n",x);
        }
        else if(y%z==0)
        {
            printf("%d\n",x*(y/z));
        }
        else
        {
            printf("%d\n",x*(y/z+1));
        }
    }
}
