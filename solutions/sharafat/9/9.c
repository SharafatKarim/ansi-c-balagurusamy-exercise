// Write program that reads the cost of an item in the form RRRR.PP (Where RRRR denotes Rupees and PP denotes Paise) and converts the value to a string of words that expresses the numeric value in words.
// For example, if we input 125.75, the output should be “ONE HUNDRED TWENTY FIVE AND PAISE SEVENTY FIVE”.

#include<stdio.h>
#include<string.h>

// a function to return string according to the number
// for example it will return one if input is 1
char *get_string(int n)
{
    switch (n)
    {
        case 1:
            return "ONE";
        case 2:
            return "TWO";
        case 3:
            return "THREE";
        case 4:
            return "FOUR";
        case 5:
            return "FIVE";
        case 6:
            return "SIX";
        case 7:
            return "SEVEN";
        case 8:
            return "EIGHT";
        case 9:
            return "NINE";
        case 10:
            return "TEN";
        case 11:
            return "ELEVEN";
        case 12:
            return "TWELVE";
        case 13:
            return "THIRTEEN";
        case 14:
            return "FOURTEEN";
        case 15:
            return "FIFTEEN";
        case 16:
            return "SIXTEEN";
        case 17:
            return "SEVENTEEN";
        case 18:
            return "EIGHTEEN";
        case 19:
            return "NINETEEN";
        case 20:
            return "TWENTY";
        case 30:
            return "THIRTY";
        case 40:
            return "FORTY";
        case 50:
            return "FIFTY";
        case 60:
            return "SIXTY";
        case 70:
            return "SEVENTY";
        case 80:
            return "EIGHTY";
        case 90:
            return "NINETY";
        case 100:
            return "HUNDRED";
        case 1000:
            return "THOUSAND";
        case 100000:
            return "LAKH";
        case 10000000:
            return "CRORE";
        default:
            return "";
    }
}


int main()
{
    float n;
    printf("Enter cost of item: ");
    scanf("%f", &n);

    int rupees = (int)n;
    int paise = ((n - rupees) * 100);

    char rupees_string[64];
    char paise_string[64];

    printf("Rupees: %d\n", rupees);
    printf("Paise: %d\n", paise);
}