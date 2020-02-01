#include<stdio.h>

int main() {
    
    int i,t;
    scanf("%d", &t);

    while(t--)
    {
        int suvo_count = 0, suvojit_count = 0;
        char s[151];
        scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] == 'S' && s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O')
        {
            if(s[i+4] == 'J' && s[i+5] == 'I' && s[i+6] == 'T')
            {
                suvojit_count++;
            }
            else
            {
                suvo_count++;
            }
        }
    }
    printf("\nSUVO = %d, SUVOJIT = %d",suvo_count,suvojit_count);
    }
    return 0;
}