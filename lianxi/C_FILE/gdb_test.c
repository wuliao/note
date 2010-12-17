#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a;
    a=2;
    dd();
    printf("%d\n",a);
    return 0;
}

void dd()
{
    printf("aa\n");
    printf("bb\n");
    printf("cc\n");
}
