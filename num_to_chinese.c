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
		printf("¿ù»~");
		return 0;
	}
	switch(a){
		case 0:
			printf("");
			break;
		case 1:
			printf("³ü¸U");
			break;
		case 2:
			printf("¶L¸U");
			break;
		case 3:
			printf("°Ñ¸U");
			break;
		case 4:
			printf("¸v¸U");
			break;
		case 5:
			printf("¥î¸U");
			break;
		case 6:
			printf("³°¸U");
			break;
		case 7:
			printf("¬m¸U");
			break;
		case 8:
			printf("®Ã¸U");
			break;
		case 9:
			printf("¨h¸U");
			break;
		}
	switch(b){
		case 0:
			printf("");
			break;
		case 1:
			printf("³ü¥a");
			break;
		case 2:
			printf("¶L¥a");
			break;
		case 3:
			printf("°Ñ¥a");
			break;
		case 4:
			printf("¸v¥a");
			break;
		case 5:
			printf("¥î¥a");
			break;
		case 6:
			printf("³°¥a");
			break;
		case 7:
			printf("¬m¥a");
			break;
		case 8:
			printf("®Ã¥a");
			break;
		case 9:
			printf("¨h¥a");
			break;
		} 
	switch(c){
		case 0:
			printf("");
			break;
		case 1:
			printf("³ü¨Õ");
			break;
		case 2:
			printf("¶L¨Õ");
			break;
		case 3:
			printf("°Ñ¨Õ");
			break;
		case 4:
			printf("¸v¨Õ");
			break;
		case 5:
			printf("¥î¨Õ");
			break;
		case 6:
			printf("³°¨Õ");
			break;
		case 7:
			printf("¬m¨Õ");
			break;
		case 8:
			printf("®Ã¨Õ");
			break;
		case 9:
			printf("¨h¨Õ");
			break;
		}
	switch(d){
		case 0:
			printf("");
			break;
		case 1:
			printf("³ü¬B");
			break;
		case 2:
			printf("¶L¬B");
			break;
		case 3:
			printf("°Ñ¬B");
			break;
		case 4:
			printf("¸v¬B");
			break;
		case 5:
			printf("¥î¬B");
			break;
		case 6:
			printf("³°¬B");
			break;
		case 7:
			printf("¬m¬B");
			break;
		case 8:
			printf("®Ã¬B");
			break;
		case 9:
			printf("¨h¬B");
			break;
	}
	switch(e){
		case 0:
			printf("");
			break;
		case 1:
			printf("³ü");
			break;
		case 2:
			printf("¶L");
			break;
		case 3:
			printf("°Ñ");
			break;
		case 4:
			printf("¸v");
			break;
		case 5:
			printf("¥î");
			break;
		case 6:
			printf("³°");
			break;
		case 7:
			printf("¬m");
			break;
		case 8:
			printf("®Ã");
			break;
		case 9:
			printf("¨h");
			break;
	}
	printf("¤¸¾ã");
	return 0;
}
