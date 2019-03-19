#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terminar();
float calcularMedia(float, float); 

float calcularMedia(float n1, float n2){
	float media = 0.0;
	media  = (n1 + n2)/ 2.0;
	return media;
}

int main (){

	struct teste {
		
		int ra; 
		char curso;
		char nome[30]; 
		float nota1, nota2;
		float media; 
		char situacao[15];
		int opc;
	};
	
	struct teste aluno[4];
	
	int ra; 
	char curso;
	char nome[30]; 
	float nota1, nota2;
	float media; 
	char situacao[15];
	int opc;
	int i, j;
	
	

	printf("Relacao de Alunos\n");
	
	for (i = 0; i< 1; i++){
		
		struct teste aluno[i];
		
		
	
		printf("   RA   :    CURSO    :    NOME    :     NOTA 1     :     NOTA 2     :    MEDIA    :    SITUACAO    \n\n");
	
		
		printf("RA: "); 
		scanf("%d", &aluno[i].ra); fflush(stdin);
		
		printf("\nCURSO: MECANICA      [m]\n");
		printf("CURSO: MECATRONICA   [t]\n");
		printf("CURSO: ELETRONICA    [e]\n");
		printf("CURSO: COMPUTACAO    [c]\n");
		printf("CURSO: CIVIL         [v]\n");
		printf("CURSO: AGRONOMICA    [a]\n\n");
		
		printf("OPCAO: "); 
		scanf("%c", &aluno[i].curso); fflush(stdin); 
		
		system("CLS"); 
		
		
		printf("NOME: ");
		scanf("%30[^\n]s", &aluno[i].nome);
		printf("%c",aluno[i].nome);
		
		printf("\nINFORMAR A NOTA 1: "); 
		scanf("%f", &aluno[i].nota1); fflush(stdin); 
		printf("\nINFORMAR A NOTA 2: "); 
		scanf("%f", &aluno[i].nota2); fflush(stdin); 
		
		media  = calcularMedia(nota1, nota2); 
		
		if (media >= 5.0 ) {
			strcpy(situacao, "APROVADO");
		
		}
		else{
			strcpy(situacao, "REPROVADO");
		}
		
		system("CLS"); 
	}
	
	
	printf("                                                 RELACAO DE ALUNOS \n\n");
	printf("   RA: %d  :    CURSO: %c    :    NOME:  %s   :     NOTA 1:  %.1f    :     NOTA 2:  %.1f     :    MEDIA:  %.1f   :    SITUACAO: %s  \n", aluno[i].ra, aluno[i].curso, aluno[i].nome, aluno[i].nota1, aluno[i].nota2, aluno[i].media, aluno[i].situacao);
	
	printf("\nDeseja informar uma nova nota? \n\nPara sim digite 1 para nao digite 2\n\n"); 
	
	
	return 0;
	}
	


