#include<stdio.h>
#include<math.h>
int main()
{
    int t, i, r, xc, yc, x, y,radius;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&xc,&yc,&r);
        scanf("%d%d",&x,&y);
        radius=sqrt((x-xc)*(x-xc)+(y-yc)*y-yc);
        if(radius>r)
            printf("The point is not inside the circle\n");
        else
            printf("The point is inside the circle\n");

    }
    return 0;
}

