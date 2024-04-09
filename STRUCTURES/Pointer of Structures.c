#include<stdio.h>
struct Mystruct
{
    int ID;
    char Name[15];
    float CGPA;
};
int main()
{
    struct Mystruct Student;

    Student.ID = 180201130;
    Student.Name[15] = "MD.Firozzaman";
    Student.CGPA = 2.63;

    printf("\nBefore Changing Values : \n\n");

    printf("ID : %d\n",Student.ID);
    printf("Name : %s\n",Student.Name);
    printf("CGPA : %f\n",Student.CGPA);

    struct Mystruct *PS1;
    PS1 = &Student;

    printf("\nAfter Changing Values by Pointer : \n\n");

    (*PS1).ID = 180201131;
    PS1->ID = 180201131;

    (*PS1).CGPA = 2.80;
    PS1->CGPA = 2.80;

    (*PS1).Name[15] = "Ratul";
    PS1->Name[15] = "Ratul";

    printf("ID : %d\n",Student.ID);
    printf("ID : %d\n",(*PS1).ID);
    printf("ID : %d\n\n",PS1->ID);

    printf("Name : %s\n",Student.Name);
    printf("Name : %s\n",(*PS1).Name);
    printf("Name : %s\n\n",PS1->Name);

    printf("CGPA : %0.2f\n",Student.CGPA);
    printf("CGPA : %0.2f\n",(*PS1).CGPA);
    printf("CGPA : %0.2f\n",PS1->CGPA);

}

