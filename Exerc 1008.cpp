#include <iostream>

int main(){
	int nrFunc, nrHora; 
	double vlrHora, salario;
		
	scanf("%d", &nrFunc);
	scanf("%d", &nrHora);
	scanf("%lf", &vlrHora);
		
	salario = nrHora*vlrHora;
	printf("NUMBER = %d\n", nrFunc);
	printf("SALARY = U$ %.2lf\n", salario);
	system("pause");
    return 0;
}
