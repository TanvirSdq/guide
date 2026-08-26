#include<stdio.h>

int main(){
    unsigned int p;
    scanf("%d", &p);

    if(p < 101 && p>2 && p%2 == 0)
     printf("YES");
    else
     printf("NO");

return 0;

}