#include <stdio.h>
#include <stdlib.h>
int main()
{
struct coord
{
int x, y, z;
};
struct coord *p;
p = malloc(sizeof(struct coord)*3);
if (p==NULL)
{
    printf("Failed");
}
else
{
    printf("\n%d bytes allocated at address %p\n",(int)sizeof(struct coord)*3, p);
    // free(p);
    // printf("mamory is free now\n");
}
    return 0;
}