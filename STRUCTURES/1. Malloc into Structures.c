/*#include<stdio.h>
struct Mystruct
{
    int id;
    float cgpa;
};
int main()
{
    struct Mystruct *p;
    p = (struct Mystruct*) malloc(sizeof(struct Mystruct));
    p->id=180201130;
    p->cgpa=3.26;
    printf("ID : %d\n",p->id);
    printf("CGPA : %0.2f\n",p->cgpa);
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
struct Mystruct
{
    int ID;
    float CGPA;
};
 struct Mystruct Student(int id,float cgpa)
 {
    struct Mystruct *P = (struct Mystruct*) malloc (sizeof(struct Mystruct));
    P->ID = id;;
    P->CGPA = cgpa;
    printf("ID : %d\n",P->ID);
    printf("CGPA : %0.2f\n",P->CGPA);

 };
int main()
{
    struct Mystruct PS;
    printf("Enter the ID and CGPA : \n");
    int id;
    float cgpa;
    scanf("%d%f",&id,&cgpa);
    PS = Student(id,cgpa);
}


