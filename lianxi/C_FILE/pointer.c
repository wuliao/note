 #include <stdio.h>

int main(int argc, const char *argv[])
{
    //int *p;
    //int i;
    //p=&i;
    //printf("0x%x%d\n",p,p);
    //printf("0x%x%d\n",p+1,p+1);
 //---------------------------------------------------------
 /*   int *p;
    int j;
    int i;
    i=1;
    p=&i;
    printf("0x%x\n",p);
    printf("%d\n",i);
    *p=2;
    j=*&i;
    printf("%d\n",p);
    printf("%d\n",j);*/
/***********************************************************************/
   /* int *p;
    int a[5]={1,2,3,4,5,6};
    p=&a[0];
    printf("%d\n",a[1]);
    printf("%d\n",*(a+1));*/
    char *a;
    int b=0;
    a=&b;
    //scanf("%c\n",a);
    printf("%d\n",a);
    return 0;
}
