#include <stdio.h>
int add_three_shu(int a ,int b);
//void three_hello (void);
int main(int argc, const char *argv[])
/*{
  three_hello();
    return 0;
}
void three_hello (void)
{
    printf("%s\n","hello"); 
    printf("hello\n");
    printf("hello");
}*/
{   
    int x=1;
    int y=2;
    add_three_shu(int x,int y);
    return 0;

}
int add_three_shu(int a ,int b)
{
    if(a==1)
    {
        printf("a is 1\n");
        return -1;
    }
    return a+b;
}

