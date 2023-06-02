#include <stdio.h>

int main()
{
    int math, physics, chemistry, total, mathPhy;

    printf("Enter Student Marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter Student Marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter Student Marks in Chemistry: ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;
    mathPhy = math + physics;
    

    if (math >= 60 && physics >= 50 && chemistry >= 40 && total >= 200)
    {
        printf("Candidate is Approved for Professional Course\n");
    }
    else if (mathPhy >= 150)
    {
        printf("Candidate is Approved for Professional Course\n");
    }
    else
    {
        printf("Candidate is Not Approved for Professional Course\n");
    }

    return 0;
}
