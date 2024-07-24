/* given one program to write.
In a string the characters positions are mismatched and they provide an array which represents the correct positions of characters, we need to arrange that.
Ex:
I/P: “hlole”, [0,2,4,3,1]
O/P: “hello”  */


#include <stdio.h>
int main() {
    int  a[5] = {0,2,4,3,1};
    char c[5] =  "hlole";
    char t[5];
    int i;
    for(i=0;i<5;i++)
    {
        t[a[i]] = c[i];  // t[0] = h, t[2] = l, t[4] = o, t[3] = l, t[1] = e
        
        //printf("%c ",t[i]);
    }
    t[i] = '\0';
    printf("%s\n",t);
    return 0;
}
