#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct class{
        int id;
        char name[20];
        int chinese;
        int math;
        int average;
        struct class *next;
} class_t;

class_t * CreatNote(int id,char *name, int chinese,int math , class_t *next)
{
    class_t *p;
    p = (class_t *)malloc(sizeof(class_t));
    p -> id = id;
    strcpy(p -> name , name);
    p -> chinese = chinese;
    p -> math = math;
    p -> average = (math + chinese)/2;
    p -> next = next;
    return p;
}

class_t * CreatLink(void)
{
    class_t * p;
    p = (class_t *)malloc(sizeof(class_t));
   // p = {1,"xiao",23,43,33,NULL};
    p -> id = 1; strcpy(p -> name ,"xiao");p -> chinese = 20 ; p -> math = 70; p -> average = 45;p -> next = NULL;
    p = CreatNote(2,"lili",16,18,p);
    p = CreatNote(3,"kuai",15,25,p);
    p = CreatNote(4,"chen",48,22,p);
    p = CreatNote(5,"jing",40,10,p);
    p = CreatNote(6,"ming",35,45,p);
    p = CreatNote(7,"wann",85,15,p);
    return p;
}

class_t * sort(class_t *p,int m)
{
    int i = 0, k , l = 6;
    class_t *p1 = NULL ,*p2 = NULL ,*p3 = NULL,*new = NULL;
    new = p1 = p;
    p2 = p -> next;
    for(i = 0; i < (m -1); i++)
    {  
      for(k = 0 ; k < (l--); k++ )
        {
            if(p1 ->average > p2 -> average )
            {
                p1 = p1 ->next; p2 = p2 -> next;
            }
            else
            {
                p3 = p2 -> next;
                p2 -> next = p1;
                p1 -> next = p3;
                p1 = p1 -> next; p2 = p2 -> next;
            }
        }
     }   
    return new;
}

void MyPrint(class_t *p)
{
    class_t *m = p;
        printf("    ID     Name     Chinese       Math        Average\n");
        printf("-----------------------------------------------------\n");
    while(m != NULL)
    {
        printf("    %d     %s       %d             %d            %d\n", p -> id ,p -> name ,p ->math , p -> chinese ,p -> average );
        p = p -> next;
    }
}
int main(int argc, const char *argv[])
{
    class_t * p;
  //  p = CreatLink();
   // MyPrint(p);
    p = sort(p ,7);
    MyPrint(p);
    return 0;
}
