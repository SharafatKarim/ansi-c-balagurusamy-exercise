#include <stdio.h>
#include <string.h>

struct census
{
    char city[20];
    long int population;
    float literacy;
};

void display_city(struct census city[])
{
    int i;
    printf("The details of the cities are:\n");
    printf(" City\t\tPopulation\tLiteracy rate\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %s\t%ld\t\t%f\n", city[i].city, city[i].population, city[i].literacy);
    }
}

void sort_list_alphabetically(struct census city[])
{
    int i, j;
    struct census temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (strcmp(city[i].city, city[j].city) > 0)
            {
                temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display_city(city);
}

void sort_list_by_population(struct census city[])
{
    int i, j;
    struct census temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (city[i].population > city[j].population)
            {
                temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display_city(city);
}

void sort_list_by_literacy(struct census city[])
{
    int i, j;
    struct census temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (city[i].literacy > city[j].literacy)
            {
                temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display_city(city);
}

int main()
{
    struct census city[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name of the city: ");
        scanf("%s", city[i].city);
        printf("Enter the population of the city: ");
        scanf("%ld", &city[i].population);
        printf("Enter the literacy rate of the city: ");
        scanf("%f", &city[i].literacy);
    }
    printf("\n");
    sort_list_alphabetically(city);
    
    printf("\n");
    sort_list_by_literacy(city);

    printf("\n");
    sort_list_by_population(city);

    return 0;
}