#include"myheaderfile.h"
#include<stdio.h>

// # is the stringify operator. It turns the macro argument x into a string literal.

#define watchi(x) printf("%s is %d\n",(#x),x)
#define watchf(x) printf("%s is %f\n",(#x),x)
#define watchs(x) printf("%s is %s\n",(#x),x)

// Defining our function that were declared in "myheaderfile.h" 

void helloworldAPI(){
    printf("Hello I am hello world API");
}

void runAPI(){ 
    printf("Hello I am RUNAPI. Fast enough to get your work done");
}

int addAPI(int a,int b){
    watchi(a);
    watchi(b);
    return a+b;
}