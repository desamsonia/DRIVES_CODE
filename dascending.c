/* program to print dascending order of array of strings */
#include<stdio.h>
#include<string.h>
void *dascending(char (*ptr)[10])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(strcmp(ptr[i],ptr[j])<0)
            {
                char t[10];
                strcpy(t,ptr[i]);
                strcpy(ptr[i],ptr[j]);
                strcpy(ptr[j],t);
            }

        }
    }
}
int main()
{
    char arr[4][10] = {"apple","bag","zebra","toyota"};
    dascending(arr);
    int i;
    for(i=0;i<4;i++)
    {
        printf("%s ",arr[i]);
    }
}