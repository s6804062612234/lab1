#include <stdio.h>


int main() {
	int item1, item2, item3;
	float disc1, disc2, disc3;
	
	scanf("%d", &item1);
	disc1 = (float)(item1) * 0.95;
	printf("%f\n", disc1 * 1.07);
	
	scanf("%d", &item2);
	disc2 = (float)(item1 + item2) * 0.85;
	printf("%f\n", disc2 * 1.07);
	
	scanf("%d", &item3);
	disc3 = (float)(item1 + item2 + item3) * 0.7;
	printf("%f\n", disc3 * 1.07);
}
