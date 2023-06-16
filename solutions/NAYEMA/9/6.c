#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *fun_replace (char *befor, char *oldsub, char *newsub);
int main()
{
    char string[]="Hate the sin, love the sinner";
    printf("Before replace : %s\n",string);
    char *result = fun_replace(string,"the","a");
    printf("After replace : %s\n",result);
}
//you think i am a bad person
//you think i am a good person
char *fun_replace (char *before, char *oldsub, char *newsub)
{
    int old_length = strlen(oldsub);
    int new_length = strlen(newsub);
    int before_length = strlen(before);
    char *after;
    if(old_length== new_length)
    {
        after = malloc((before_length +1)* sizeof(char));
    }
    else
    {
        int occurrences = 0;
        int i=0;
        while(i<before_length)
        {
            if(strstr(&before[i],oldsub)== &before[i])
            {
                ++occurrences;
                i+=old_length;
            }
            else i++;
        }

        int sub_diff = new_length - old_length;
        int after_length = before_length;
        after_length+= occurrences*sub_diff;

        after = malloc ((after_length+1)* sizeof(char));
    }
    int i=0;
    int j=0;
    while (i<strlen(before))
    {
        if(strstr (&before[i],oldsub) == &before[i])
        {
            strcpy (&after[j],newsub);
            i+=old_length;
            j+=new_length;
        }
        else
        {
            after[j]=before[i];
            i++;
            j++;
        }
    }
    after[j] = '\0';
    return after;
}