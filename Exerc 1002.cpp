#include <stdlib.h>
#include <stdio.h>

int main(){
	double area=0, raio;
	double n = 3.14159;
	
	scanf("%lf", &raio);
	
	area = n*(raio*raio);
	
	
	printf("A=%.4lf\n", area);
	
	system("pause");
	return 0;
}
