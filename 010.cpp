#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

char op;

printf("�п�J�^��r��:"); 
scanf("%c",&op);

if((op>='A')&&(op<='Z')){
jk+=32;
printf("�ഫ��%c\n",op);
}
else if((op>='a')&&(op<='z')){
jk-=32;
printf("�ഫ��%c\n",op);	
}
else{
printf("�A��J�����O�^��r��\n");
}

system("PAUSE");
return 0;
}
