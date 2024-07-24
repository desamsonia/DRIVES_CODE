/*return 1, if found 2 or more Consecutive(follow up) 1's, return 0 if not found */

#include<stdio.h>
int test_bit(int data,int bit)
{
// printf("%d ",bit);
    while(bit >= 0)
    {
       // printf("%d ",(data>>bit)&1);
        if(((data >> bit)&1) && ((data >> bit-1)&1))
        {
           // printf("1");
            return 1;
        }
        --bit;
        --bit;
    }
    return 0;
}
int main()
{
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    int bit = 8*sizeof(int)-1;
    int c=0;
    c = test_bit(data,bit);
    printf("c = %d",c);
    
}