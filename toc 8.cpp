#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	printf("Enter a string: ");
	scanf("%s",string);
	if (string [0] =='b'&&string [strlen (string)-1] =='a')
	{
		int i;
		 for (i=0; i<strlen (string); i++) {
          if (string[i]=='0'||string[i]=='1')
               {

                printf ("Invalid! \n");
                return 0;
            }
        }
        printf ("Accepted\n");
    } else {
        printf ("Not Accepted\n");
    }
    return 0;
}
  

