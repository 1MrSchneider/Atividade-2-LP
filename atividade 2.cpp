#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>	
	
	int main(){
		
//Declara��o de vari�veis
	    int tabelaCandi(int candidato), candidato, nvoto;
		float calcularTotalvv(float vA, float vB, float vC, float vD, float vN, float vBr);
		float calcularpercvcandi(float totalv, float ntotalv), vA, vB, vC, vD;
		float calcularpercVNB (float totalvNB, float ntotalvbn), vN, vBr;
		float calcularmaiorqv(float vA, float vB, float vC, float vD);
		
//Comando para habilitar acentua��o
		setlocale(LC_ALL, "Portuguese");
		
//Iniciando os contadores com valor 0
		vA,vB,vC,vD,vN,vBr = 0;
		
//Vari�vel de controle para se��o de votos
	    nvoto = 1;
		
//Inicio do la�o de rpeti��o (while)
		 do{
		
//Chamada da fun��o "tabelaCandi"
	      tabelaCandi ( candidato);
	        scanf("%d", &candidato);
	        
//Comando limpatela    
	      system("cls");
	      
//Estrutura condicional (escolha caso)    
	      switch (candidato){
	      	
	      	case 1:
	      		vA = vA + 1;
	      	break;
	      	
	      	case 2:
	      		vB = vB + 1;
	      	break;
	      	
	      	case 3:
	      		vC = vC + 1;
	      		
	      	break;
	      	
	      	case 4:
	      		vD = vD + 1;
	      		
	      	break;
	      	
	      	case 5:
	      		vN = vN + 1;
	      	break;
	      	
	      	case 6:
	      		vBr = vBr + 1;
	      	break;
	      	
	      	case 7:
	      		nvoto = 7;
	      }	
	      
//Fim do la�o de repeti��o (while) 
	}while (nvoto != 7);
	
//Chamada da fun��o para calcular o percentual de votos v�lidos
	    float ntotalVV = calcularTotalvv(vA, vB, vC, vD, vN, vBr);
	      printf("\nForam obtidos: %.0f",ntotalVV);printf("%% de votos v�lidos\n");
	   
//Contagem dos votos totais, brancos e nulos   
	    float ntotalv = vA + vB + vC + vD;
	    float ntotalvbn = vA + vB + vC + vD + vBr + vN;
	    float totalvNB = vBr + vN;
	    
//Chamada da fun��o para calcular o percentual de votos brancos e nulos
	    float totalvbn = calcularpercVNB(totalvNB, ntotalvbn);printf("Foram obtidos: %.0f",totalvbn);printf("%% de votos brancos e nulos\n");
	    
//Chamada da fun��o para calcular a porcentagem de votos de todos os candidatos
	    float totalvA = calcularpercvcandi(vA, ntotalv);printf("\nO(a) candidato(a) A obteve: %.0f",totalvA);printf("%% dos votos!");
	    float totalvB = calcularpercvcandi(vB, ntotalv);printf("\nO(a) candidato(a) B obteve: %.0f",totalvB);printf("%% dos votos!");
      	float totalvC = calcularpercvcandi(vC, ntotalv);printf("\nO(a) candidato(a) C obteve: %.0f",totalvC);printf("%% dos votos!");
      	float totalvD = calcularpercvcandi(vD, ntotalv);printf("\nO(a) candidato(a) D obteve: %.0f",totalvD);printf("%% dos votos!\n");
      	
//Chamada da fun��o para calcular o candidato com a maior quantidade de votos
		char candiV = calcularmaiorqv(vA, vB, vC, vD);  
		  printf("\nO(a) candidato(a) vencedor(a) �: %c", candiV);printf("\n");
 
//Comando para pausar a execu��o do algoritimo     
	system("pause");  	  
	return 0;
}
	
//Estrutura da fun��o>> tipo da fun��o (int,char,float,void)>> nome da fun��o>> vari�veis da fun��o
	int tabelaCandi (int candidato){
	
		printf(" ------------------------------------------------------");
		printf("\n| Digite o n�mero de um dos(as) candidatos(as) abaixo! |");
		printf("\n| 1- A                                                 |");
		printf("\n| 2- B                                                 |");
		printf("\n| 3- C                                                 |");
		printf("\n| 4- D                                                 |");
		printf("\n| 5- Voto nulo                                         |");
		printf("\n| 6- Voto em branco                                    |");
		printf("\n| 7- Encerrar vota��o                                  |");
		printf("\n ------------------------------------------------------\n");
	} 
	
	float calcularTotalvv(float vA, float vB, float vC, float vD, float vN, float vBr){	
	    float ntotal = (vA + vB + vC + vD + vN + vBr);
        float vNB = (vN + vBr);
	    float ntotalv = ntotal - vNB;
	    float ntotalVV = 100 * (ntotalv / ntotal);
	return ntotalVV;
	}
	
	float calcularpercvcandi (float totalv, float ntotalv){
		totalv = 100 * (totalv / ntotalv);
	return totalv;
	}
	
	float calcularpercVNB (float totalvNB, float ntotalvbn){
		float nvtotalbn = 100 * (totalvNB / ntotalvbn);
	return ntotalvbn;
	}
	
	float calcularmaiorqv(float vA, float vB, float vC, float vD){
		if (vA > vB && vA > vC && vA > vD){
			char candiV = 'A';
		}else if (vB > vA && vB > vC && vB > vD){
			char candiV = 'B';
		}else if (vC > vA && vC > vB && vC > vD){
			char candiV = 'C';
		}else if (vD > vA && vD > vC && vD > vB){
			char candiV = 'D';
    	}
    char candiV;
	}
	
