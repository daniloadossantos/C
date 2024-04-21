#include <stdlib.h>
#include <stdio.h>

int main(){
	double A, B, C;
	double media=0;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	media = (A*2+B*3+C*5)/(2+3+5);
	printf("MEDIA = %.1lf\n", media);
	system("pause");
	return 0;
	
}
