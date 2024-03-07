#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("enter a string: ");
	scanf("%s",string);
	if (string[0]=='0'&&string[strlen(string)-1]=='0'||string[0]=='1'&&string[strlen(string)-1]=='1')
	{
		int i;
        for (i==0; i<strlen(string); i++) {
            if (string[i]<'0'||string[i]>'1')
			{
                printf ("Invalid! \n");
                return 0;
            }
        }
        printf ("Valid! The string starts with '0' and ends with '0' or starts with '1' and ends with '1'.\n");
    } else {
        printf ("Invalid! The string starts with '0' and ends with '0' or starts with '1' and ends with '1'.\n");
    }
    return 0;
}


