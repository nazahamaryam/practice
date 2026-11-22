#include<stdio.h>

void bonjour();
void namaste();

int main()
{
char ch;
printf("enter i for indian and f for french: ");
scanf("%c", &ch);
if(ch=='i')
{
namaste();
}
else {
bonjour();

}

return 0;
}
void namaste(){
printf("namaste!\n");

}


void bonjour(){
printf("bonjour!\n");

}
