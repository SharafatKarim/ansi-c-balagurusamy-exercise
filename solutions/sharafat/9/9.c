// Write program that reads the cost of an item in the form RRRR.PP (Where RRRR denotes Rupees and PP denotes Paise) and converts the value to a string of words that expresses the numeric value in words.
// For example, if we input 125.75, the output should be “ONE HUNDRED TWENTY FIVE AND PAISE SEVENTY FIVE”.

#include<stdio.h>
#include<string.h>

char* get_first_nine_number(int num)
{
    switch(num)
    {
        case 0: return "ZERO";
        case 1: return "ONE";
        case 2: return "TWO";
        case 3: return "THREE";
        case 4: return "FOUR";
        case 5: return "FIVE";
        case 6: return "SIX";
        case 7: return "SEVEN";
        case 8: return "EIGHT";
        case 9: return "NINE";
        case 10: return "TEN";
        case 11: return "ELEVEN";
        case 12: return "TWELVE";
        case 13: return "THIRTEEN";
        case 14: return "FOURTEEN";
        case 15: return "FIFTEEN";
        case 16: return "SIXTEEN";
        case 17: return "SEVENTEEN";
        case 18: return "EIGHTEEN";
        case 19: return "NINETEEN";
        case 20: return "TWENTY";
        case 30: return "THIRTY";
        case 40: return "FOURTY";
        case 50: return "FIFTY";
        case 60: return "SIXTY";
        case 70: return "SEVENTY";
        case 80: return "EIGHTY";
        case 90: return "NINETY";
    }
}


char* get_number(int num)
{
    char string[50];
    if (num <= 20 )
        return get_first_nine_number(num);
    else
    {
        strcpy(string, "");
        strcat(string, get_first_nine_number((num/10)*10));
        strcat(string, " ");
        strcat(string, get_first_nine_number(num%10));
        char *string2 = string;
        return(string2);
    }
}

int main()
{
    float cost;
    printf("Enter the cost: ");
    scanf("%f", &cost);

    int rupees = (int)cost;
    int paise = (int)((cost - rupees) * 100);
    
    
    char rupees_string[100];
    strcpy(rupees_string, "");
    
    
    if ( rupees >= 1000 )
    {
        int thousands = rupees / 1000;
        strcat(strcat(rupees_string, get_number(thousands)), " THOUSAND ");
        rupees = rupees % 1000;
    }
    if ( rupees >= 100 )
    {
        int hundreds = rupees / 100;
        strcat(strcat(rupees_string, get_number(hundreds)), " HUNDRED ");
        rupees = rupees % 100;
    }
    if ( rupees >= 1 )
    {
        strcat(strcat(rupees_string, get_number(rupees)), " AND PAISE ");
    }
    if ( paise >= 1 )
    {
        strcat(rupees_string, get_number(paise));
    }
    
    printf("%s", rupees_string);
    printf("\n%d", rupees);
}