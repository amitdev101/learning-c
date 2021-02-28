#include<stdio.h>
#include"myheaderfile.h"

#define watchi(x) printf("%s is %d\n",(#x),x)
#define watchf(x) printf("%s is %f\n",(#x),x)
#define watchs(x) printf("%s is %s\n",(#x),x)

int main(){
    printf("Hello world");
    int sum;
    sum = addAPI(10,7);
    watchi(sum);
    return 0;
}