#include <stdlib.h>
#include <stdio.h>

int main(){
	double A, B;
	double media=0;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	
	media = (A*3.5+B*7.5)/(3.5+7.5);
	printf("MEDIA = %.5lf\n", media);
	system("pause");
	return 0;
	
}
