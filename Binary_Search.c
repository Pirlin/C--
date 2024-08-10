#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void * b)
{
    if(*(int*)a<*(int*)b)  return -1;
    if(*(int*)a==*(int*)b) return  0;
    if(*(int*)a>*(int*)b)  return  1;
    return 0;
}
int main()
{
    int data[]{1,2,3,4,5,6} , k= 4;
    if(bsearch(&k, data, 5, sizeof(int), compare))
    {
        printf("Found \n");
    }
    else
    {
        printf("Not Found \n");
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",data[i]);
    }
}