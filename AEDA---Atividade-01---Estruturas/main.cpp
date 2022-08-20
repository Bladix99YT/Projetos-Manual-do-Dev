#include <iostream>

typedef struct aluno{
	char nome[20];
	double fone;
	int idade;
} Aluno;
	
typedef struct professor{
	char nome[20];
	double salario;
	int idade;
} Professsor;

int main(int argc, char** argv) {
// nunca misturar tipos de dados diferentes
	
	// nunca se deve chumbar dados no algoritmo
	int num[10] = {7,6,9,8,2,14,7,15,21,17};
	// sempre deve inicializar as variaveis
	int tam = 10, maior, menor, i = 0;
	printf("valor -> %i", num[5]);
	printf("\nvalor -> %i", num[5]+num[8]);
	printf("\nvalor -> %i", num[5+2]);
	printf("\nvalor -> %i", num[i]);
	for(i=0;i<10;i++){
		printf("\nx -> %i valor -> %i", i, num[i]);
	}
	// informa o maior valor de num
	maior = num[0]; // posicao do vetor 0 = 7 x e i estao na posicao 0 entao o valor deles sera de 7, x guarda sempre o maior valor
	for (i = 0; i < 10 ; i++){
		if(num[i] > maior){
			maior = num[i];
	}
}
	printf("\nO numero maior eh:%i", maior);
	
	// informa o menor valor de num
		menor = num[0];
		for (i = 0; i < 10 ; i++){ // compara as 10 posicoes e acha o menor
		if(num[i] < menor){
			menor = num[i];
	}
}
	printf("\nO numero menor eh:%i", menor);
	
	
	
	// para somar os valores de um vetor
	int soma = 0;
	
	// entender como resolver o problema?
	// percorrer o vetor
	for(i=0;i<10;i++){
		soma = soma + num[i];
	}
	printf("\n soma -> %i", soma);
	printf("\n----------------------");
	
	Aluno turma[3];
///	turma[0].nome = "n";
	turma[0].idade = 25;
	turma[0].fone = 6546546456;
	
	for(i=0;i<3;i++){
		printf("\nInicio Ficha deste aluno");
		printf("\nDigite o nome:");
		scanf("%s", &turma[i].nome);
		printf("\nDigite a idade:");
		scanf("%i", &turma[i].idade);
		printf("\nDigite o telefone:");
		scanf("%i", &turma[i].fone);
		printf("\nAluno Turma-> %i", i, turma[i]);
		printf("\nTermino ficha deste aluno");
		printf("\n----------------------");
	}
	
	professor Classe[5];
	Classe[0].nome;
	Classe[0].idade;
	Classe[0].salario;
	
	for(i=0;i<5;i++){
		printf("\nInicio Ficha deste professor");
		printf("\nDigite o nome:");
		scanf("%s", &Classe[i].nome);
		printf("\nDigite a idade:");
		scanf("%i", &Classe[i].idade);
		printf("\nDigite o salario:");
		scanf("%f", &Classe[i].salario);
		printf("\nTermino ficha deste professor");
		printf("\nProfessor Turma-> %i", i, Classe[i]);
		printf("\n----------------------");
	}

// para o vetor num procurar e imprimir:
// - menor valor	
// - maior valor

// Imprimir todos registros estrutura alunos
// fazer a entrada de dados para 5  professores
// Imprimir todos os registros da estrutura professores	

	
	
	return 0;
}
