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
    printf("\n  Sorting...  \n\n");
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

class_t *insertnote( class_t *head)
{
    int n;
    scanf("d",&n);
    class_t *p = head, *q;
    if(p -> id == n)
    {  
      p = CreatNote( 8,"haha",68,52,p); 
    }
    return p;
}

class_t *DelateNote_id(class_t *p)
{
    int n;
    class_t *store = p ,*q;
    
    printf("you want delate id number\n");
    scanf("%d",&n);
    
    if(p -> id == n)
    {
        store = p->next;
        p ->next = NULL;
        free(p);p=NULL;
        return store;
    }
    else
    {
        while(p->next != NULL && p->next->id != n)
        p = p->next;
        if(p->next == NULL)
        {
            printf("input error\n");
        }
        else
        {
              q= p->next ;
              p->next = q->next;
              q->next = NULL;
              free(q);q=NULL;
        }
        return store;
    }


}


class_t * DelateNote_name(class_t *p)
{
    class_t *store = p,*q;
    char name[20];
    printf("\n------------you want delate student name----------\n\n");
    scanf("%s",name);
    if(strcmp(p->name,name) == 0)
    {
        store = p->next;
        p->next = NULL;
        free(p); p=NULL;
        return store;
    }
    else
    {
        while(p->next !=NULL && (strcmp(p->next->name,name) != 0))
        p = p->next;
        if(p->next == NULL)
        {
            printf("\n");
            printf("\n---------input error,no have this class messages-----------\n\n");
            printf("-----------this is all class note message\n\n");
        }
        else
        {
            q = p->next;
            p->next = q->next;
            q->next = NULL;
            free(q); q = NULL;
        }
        
             return store;
    }

}
int main(int argc, const char *argv[])
{
    int number;
    class_t * p;
    p = CreatLink();
    printf("\n-------------input number '1' is show classnote-------------\n");
    printf("\n-------------input number '2' is insert class note----------\n");
    printf("\n-------------input number '3' is Delate Note by id----------\n");
    printf("\n-------------input number '4' is delate note by name--------\n");
    scanf("%d",&number);
    switch(number)
    {
           case 1 : 
                    MyPrint(p);
                    break;
           case 2 : 
                    p = insertnote(p);
                    MyPrint(p);
                    break;
           case 3 : 
                    p = DelateNote_id(p);
                    MyPrint(p);
                    break;
           case 4 :
                    p = DelateNote_name(p);
                    MyPrint(p);
                    break;
           default :
                    printf("\n----------input error-----\n");
                    break;
     }               
    return 0;
}
