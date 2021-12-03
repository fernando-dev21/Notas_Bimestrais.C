#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4; 
	float c;
	
	printf("digite a primeira nota:\n");
	scanf("%f", &n1);
	
	printf("digite a segunda nota:\n");
	scanf("%f", &n2);
	
	printf("digite a terceira nota:\n");
	scanf("%f", &n3);
	
	printf("digite a quarta nota:\n");
	scanf("%f", &n4);
	
	c = n1 + n2 + n3 + n4;
	
	printf("A nota final do aluno e: %f", c / 4 );
}
