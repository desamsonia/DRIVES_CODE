/*2. In a string count the vowels and return the value of the result.
Ex: 
I/P: I am a student.
O/P: 1112
Note: each word we need to separate. */
#include<stdio.h>
#include<string.h>
int check_vowels(char);
int count_vowels(char*,int , int);
int count_vowels(char *str,int i, int j)
{
int c=0;
while(i<=j)
{
   if(check_vowels(str[i]))
         c++;
    i++;       
}
return c;
}
int check_vowels(char ch)
{
  char arr[10] = {'a','e','i','o','u'};
  int i;
  for(i=0;i<5;i++)
  {
    if(arr[i] == ch)
       return 1;
  }
  return 0;
}
int main()
{
 char str[50];
 printf("Enter string:");
 scanf("%[^\n]s",str);
 int i,j,len;
 len=strlen(str)-1;
 for(i=j=0;j<len;j++)
 {
   if(str[j] == ' ')
         continue;
    i=j;
    while(str[j] != ' ' && j<=len)
           j++;
    j--;
   // printf("%d %d\n",i,j);
    //printf("%s\n",str);
   int n = count_vowels(str,i,j);
   printf("%d ",n);
 }
 }
           
         
