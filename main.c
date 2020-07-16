#include<stdio.h>
#include<string.h>
void cipher(char []);
int main(void)
{
 char str[1000];
 printf("Enter a sentence\n");
 scanf("%s",str);
 printf("Atbash Cipher code is\n");
 cipher(str);
}
void cipher(char str[])
{
  int i=0;
  while(str[i]!='\0')
  {
if(!((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
 {
   if(str[i]>='A'&&str[i]<='Z')
   printf("%c",'Z'+'A'-str[i]);
   if(str[i]>='a'&&str[i]<='z')
   printf("%c",'z'+'a'-str[i]);
 }

 if(((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
    {
      printf("%c",str[i]);
    }

   i++;
  }
  printf("\n");

}
