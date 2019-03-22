#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VETMAX 50

int cab();
void terminar();
float calcularMedia2(float, float); 

	int raTemp; 
	char cursoTemp;
	char nomeTemp[30] = "INDEFINIDO"; 
	char cursoExtTemp[20] = "INDEFINIDO";
	float nota1Temp = 0.0, nota2Temp = 0.0, mediaTemp = 0.0 ; 
	char situacaoTemp[15] = "INDEFINIDO";
	

int main (){
	
	struct teste {
		
		int ra; 
		char curso;
		char nome[30]; 
		float nota1, nota2;
		float media; 
		char situacao[15];
		char cursoExt[20]; 
		
		
	};
		
	struct teste vetAluno[VETMAX]; 
	int opc = 1, inVet = 0, i = 0; ;
	
	
	while ((opc != 0 ) && (inVet < VETMAX)) {
				
		cab(); 
		printf("\n\nRA: "); 
		scanf("%d", &raTemp); 
		
		vetAluno[inVet].ra = raTemp;
			
		cab(); 
		
		printf("\nCURSO: MECANICA      [M]\n");
		printf("CURSO: MECATRONICA   [T]\n");
		printf("CURSO: ELETRONICA    [E]\n");
		printf("CURSO: COMPUTACAO    [C]\n");
		printf("CURSO: CIVIL         [V]\n");
		printf("CURSO: AGRONOMICA    [A]\n");
		printf("CURSO: ARQUITETURA   [Q]\n");
		printf("CURSO: PRODUCAO      [P]\n");
		printf("CURSO: ALIMENTOS     [F]\n\n");	
		
			
		printf("OPCAO: "); 
		scanf("%c",  &cursoTemp); 
		vetAluno[inVet].curso = cursoTemp;
		
		switch (cursoTemp)  {
			case 'F':
				strcpy(cursoExtTemp, "ALIMENTOS");
				break;
			case 'P':
				strcpy(cursoExtTemp, "PRODUCAO");
				break;			
			case 'Q':
				strcpy(cursoExtTemp, "ARQUITETURA");											
				break;
			case 'V':
				strcpy(cursoExtTemp, "CIVIL");
				break;
			case 'T':
				strcpy(cursoExtTemp, "MECATRONICA");
				break;
			case 'C':
				strcpy(cursoExtTemp, "COMPUTACAO");
				break;
			case 'A':
				strcpy(cursoExtTemp, "AGRONOMICA");
				break;
			case 'E':
				strcpy(cursoExtTemp, "ELETRICA");
				break;
			case 'M':
				strcpy(cursoExtTemp, "MECANNICA");
				break;
			default:
				strcpy(cursoExtTemp, "OUTRO");
				break;
		}
		strcpy(vetAluno[inVet].cursoExt, cursoExtTemp);
		cab();
	
		
		printf("\n\nNOME: ");
		scanf("%30[^\n]s", nomeTemp);
		strcpy(vetAluno[inVet].nome, nomeTemp);
		cab(); 
		
		printf("\nINFORMAR A NOTA 1: "); 
		scanf("%f", &nota1Temp); 
		vetAluno[inVet].nota1 = nota1Temp;
		cab();
	
		printf("\nINFORMAR A NOTA 2: "); 
		scanf("%f", &nota2Temp); 
		vetAluno[inVet].nota2 = nota2Temp;
		
		mediaTemp  = calcularMedia2(nota1Temp, nota2Temp); 
		vetAluno[inVet].media = mediaTemp;
		if (nota1Temp, nota2Temp> 10 ){
			printf("\n\n\nINSIRA UMA NOTA VALIDA!!!\n\n\n");
			system("PAUSE");
			terminar();
			return 0;
			
		}
		if (mediaTemp >= 5.0) {
			strcpy(situacaoTemp, "APROVADO");
		}
		else{	
			strcpy(situacaoTemp, "REPROVADO");		
		}
		strcpy(vetAluno[inVet].situacao, situacaoTemp);
		cab(); 	
		inVet++;
		system("PAUSE");
		system("CLS");
		printf("==================================================CADASTRO DOS ALUNOS==================================================\n\n\n");  
		printf("DESEJA INSIRAR UMM NOVO ALUNO? \n\nSAIR      [0]\nCONTINUAR [1]\n\n\n\n");
		scanf("%d", &opc); 
	
	if (opc == 0){
		break;
	}
	
	}

	system("CLS"); 
	printf("==================================================CADASTRO DOS ALUNOS==================================================\n\n\n"); 
	printf("RELACAO DE ALUNOS\n\n");
	printf("RA\tCURSO EXt\tNOME\tNOTA 1\tNOTA 2\tMEDIA\tSITUACAO\n\n");
	
	
  	for (i = 0 ; i < inVet; i++)  {
  	printf("%d", vetAluno[i].ra);
  	printf("\t%s", vetAluno[i].cursoExt);
  	printf("\t%s", vetAluno[i].nome);
  	printf("\t%.1f", vetAluno[i].nota1);
  	printf("\t%.1f", vetAluno[i].nota2);
  	printf("\t%.1f", vetAluno[i].media);
  	printf("\t%s\n", vetAluno[i].situacao);
	
	}
	system("PAUSE"); 
	terminar(); 
	return 0;
		
}
	
int cab(){
	
	fflush(stdin); 
	system("CLS");	
	printf("==================================================CADASTRO DOS ALUNOS==================================================\n\n\n"); 
	printf("RA: %d  :    CURSO: %s    :    NOME:   %s  :     NOTA 1  %.1f    :      NOTA 2:  %.1f    :      MEDIA:  %.1f    :      SITUACAO: %s  \n", raTemp, cursoExtTemp, nomeTemp, nota1Temp, nota2Temp, mediaTemp, situacaoTemp);
	
	return 0; 
	
}

float calcularMedia2(float n1, float n2){
	float media = 0.0;
	media  = (n1 + n2)/ 2.0;
	return media;
}
		
void terminar(){
	system("CLS");
	printf("FIM DE PROGRAMA!!!\n\n\n\n\n\n\n\nPrograma feito por:\nBRUNO RACHID\n\n\n");


}
