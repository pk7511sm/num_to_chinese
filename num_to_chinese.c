#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int money;
	int a, b, c, d, e;
	scanf("%d", &money);
	a = money/10000;
	b = money/1000-a*10;
	c = money/100-b*10-a*100;
	d = money/10-c*10-b*100-a*1000;
	e = money/1-d*10-c*100-b*1000-a*10000;
	if (money>99999 || money <1){
		printf("���~");
		return 0;
	}
	switch(a){
		case 0:
			printf("");
			break;
		case 1:
			printf("���U");
			break;
		case 2:
			printf("�L�U");
			break;
		case 3:
			printf("�ѸU");
			break;
		case 4:
			printf("�v�U");
			break;
		case 5:
			printf("��U");
			break;
		case 6:
			printf("���U");
			break;
		case 7:
			printf("�m�U");
			break;
		case 8:
			printf("�øU");
			break;
		case 9:
			printf("�h�U");
			break;
		}
	switch(b){
		case 0:
			printf("");
			break;
		case 1:
			printf("���a");
			break;
		case 2:
			printf("�L�a");
			break;
		case 3:
			printf("�ѥa");
			break;
		case 4:
			printf("�v�a");
			break;
		case 5:
			printf("��a");
			break;
		case 6:
			printf("���a");
			break;
		case 7:
			printf("�m�a");
			break;
		case 8:
			printf("�åa");
			break;
		case 9:
			printf("�h�a");
			break;
		} 
	switch(c){
		case 0:
			printf("");
			break;
		case 1:
			printf("����");
			break;
		case 2:
			printf("�L��");
			break;
		case 3:
			printf("�Ѩ�");
			break;
		case 4:
			printf("�v��");
			break;
		case 5:
			printf("���");
			break;
		case 6:
			printf("����");
			break;
		case 7:
			printf("�m��");
			break;
		case 8:
			printf("�è�");
			break;
		case 9:
			printf("�h��");
			break;
		}
	switch(d){
		case 0:
			printf("");
			break;
		case 1:
			printf("���B");
			break;
		case 2:
			printf("�L�B");
			break;
		case 3:
			printf("�ѬB");
			break;
		case 4:
			printf("�v�B");
			break;
		case 5:
			printf("��B");
			break;
		case 6:
			printf("���B");
			break;
		case 7:
			printf("�m�B");
			break;
		case 8:
			printf("�ìB");
			break;
		case 9:
			printf("�h�B");
			break;
	}
	switch(e){
		case 0:
			printf("");
			break;
		case 1:
			printf("��");
			break;
		case 2:
			printf("�L");
			break;
		case 3:
			printf("��");
			break;
		case 4:
			printf("�v");
			break;
		case 5:
			printf("��");
			break;
		case 6:
			printf("��");
			break;
		case 7:
			printf("�m");
			break;
		case 8:
			printf("��");
			break;
		case 9:
			printf("�h");
			break;
	}
	printf("����");
	return 0;
}
