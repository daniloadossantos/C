#include <iostream>
#include <stdlib.h>

int main(){
	char vendedor;
	double salario, vendas, total;
	double comissao = 0.15; 
			
	scanf("%c", &vendedor);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
		
	total = salario+(vendas*comissao);
	printf("TOTAL = R$ %.2lf\n", total);
	system("pause");
	return 0;
	
}
