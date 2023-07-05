#include <stdio.h>
#include <string.h>

// Define the census structure
struct census
{
    char city[50];
    long population;
    float literacyLevel;
};

// Function to read details for 5 cities
void readCities(struct census cities[])
{
    printf("Enter details for 5 cities:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nCity %d\n", i + 1);

        // Get the city name
        printf("Name: ");
        scanf("%s", cities[i].city);

        // Get the population
        printf("Population: ");
        scanf("%ld", &(cities[i].population));

        // Get the literacy level
        printf("Literacy Level: ");
        scanf("%f", &(cities[i].literacyLevel));
    }
}

// Function to sort the list alphabetically
void sortAlphabetically(struct census cities[])
{
    // Bubble sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(cities[j].city, cities[j + 1].city) > 0)
            {
                // Swap the cities
                struct census temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }
}

// Function to sort the list based on literacy level
void sortByLiteracyLevel(struct census cities[])
{
    // Bubble sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (cities[j].literacyLevel > cities[j + 1].literacyLevel)
            {
                // Swap the cities
                struct census temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }
}

// Function to sort the list based on population
void sortByPopulation(struct census cities[])
{
    // Bubble sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (cities[j].population > cities[j + 1].population)
            {
                // Swap the cities
                struct census temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }
}

// Function to display the sorted lists
void displayCities(struct census cities[])
{
    printf("\nSorted List (Alphabetically):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("City: %s\n", cities[i].city);
        printf("Population: %ld\n", cities[i].population);
        printf("Literacy Level: %.2f\n", cities[i].literacyLevel);
        printf("\n");
    }
}

int main()
{
    struct census cities[5];

    // Read details for 5 cities
    readCities(cities);

    // Sort the list alphabetically
    sortAlphabetically(cities);

    // Display the sorted list alphabetically
    displayCities(cities);

    // Sort the list based on literacy level
    sortByLiteracyLevel(cities);

    // Display the sorted list based on literacy level
    displayCities(cities);

    // Sort the list based on population
    sortByPopulation(cities);

    // Display the sorted list based on population
    displayCities(cities);

    return 0;
}
