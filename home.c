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
    p -> id = 7; strcpy(p -> name ,"xiao");p -> chinese = 20 ; p -> math = 70; p -> average = 45;p -> next = NULL;
    p = CreatNote(6,"lili",16,18,p);
    p = CreatNote(5,"kuai",15,25,p);
    p = CreatNote(4,"chen",48,22,p);
    p = CreatNote(3,"jing",40,10,p);
    p = CreatNote(2,"ming",35,45,p);
    p = CreatNote(1,"wann",85,15,p);
    return p;
}


class_t * sort(class_t * head) /*排序函数*/
{
    int i;
    class_t *p1,*stu,*p2,*p0=NULL;
    printf("\nSorting...");
    if(!head || !head->next)    /*没有结点或只有一个结点，直接退出。*/
    return head;
    if(!head->next->next) /*有两个结点，交换两个结点后退出。*/
    {
        if(head->average < head->next->average)
        {
            stu=head;
            head = head->next;
            head->next = stu;
            stu->next = NULL;
        }
    return head;
    }

    while(p0 != head->next->next) /*三个以上结点排序,使用冒泡排序法*/
    {
        p1=head; stu = p1->next; p2 = stu->next;
        while(p2!=p0)
        {
            if(stu->average < p2->average)
            {
                class_t * p;
                p1->next=p2;
                stu->next=p2->next;
                p2->next=stu;
                p=stu;stu=p2;p2=p;
            }
            p1=p1->next; stu=stu->next; p2=p2->next;
        }          
        p0=stu;
    }

    if(head->average < head->next->average)/*特殊考虑前两个结点*/
    {
        stu=head;
        head=head->next;
        stu->next=head->next;
        head->next=stu;
    }   
    return head;
}
void MyPrint(class_t *p)
{
        printf("    ID     Name     Chinese       Math        Average\n");
        printf("-----------------------------------------------------\n");
    while(p != NULL)
    {
        printf("    %d     %s       %d             %d            %d\n", p -> id ,p -> name ,p ->math , p -> chinese ,p -> average );
        p = p -> next;
    }
}

class_t *insertnote(int n, class_t *head)
{
    class_t *p = head, *q;
    if(p -> id == n)
    {  
      p = CreatNote( 8,"haha",68,52,p); 
    }
    return p;
}

class_t *DelateNote(class_t *p,int n)
{
    if(p -> id == n)
    {
        p = p -> next;
        return p;
    }
    if(p ->next -> id == n)
    {
        p -> next = p ->next ->next;
        return p;
    }
    if(p -> next ->next ==  NULL)
    {
        p -> next == NULL;
        return  p;
    }
}


int main(int argc, const char *argv[])
{
    class_t * p;
    p = CreatLink();
    p = insertnote(7,p);
    MyPrint(p);
    p = sort(p);
    MyPrint(p);
    return 0;
}
