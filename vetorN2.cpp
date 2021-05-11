#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Vetores{
	
	int dado;
	Vetores *seguinte;
};

Vetores *lista = NULL;

using namespace std;

void menu();
void inserirNumero(Vetores *&, int);
void exibirLista(Vetores *);
void buscarNumero(Vetores *, int n);




int main() {
	
	menu();
	
	return 0;
}

void menu() {
	
	int opcao, num;
	
	do{
		
	printf("Menu:\n");
	printf("1 - Inserir numero.\n");
	printf("2 - Mostrar lista.\n");
	printf("3 - Localizar numero.\n");
	printf("4 - Sair.\n");
	printf("\nEscolha a opcao desejada:  ");
	scanf("%d", &opcao);
	
	switch(opcao)	{
		
		case 1:
			
			printf("Digite o numero que deseja inserir: ");
			scanf("%d", &num);
			
			cout<<endl;
			inserirNumero(lista, num);
			
			cout<<endl;
			cout<<endl;
			
		
			system("pause");
			
			
			break;
			
		case 2:
			
			printf("Exibindo os numeros dos vetores da lista:\n");
			
			exibirLista(lista);
			
			system("pause");
			
			
			break;
			
		case 3:
			
			
			break;
}

system("cls");

}while(opcao != 4);

}

void inserirNumero(Vetores *&lista, int n){                          // inserindo numero na lista
		
		Vetores * novo_vetor = new Vetores();
		
		novo_vetor -> dado = n;
		
		Vetores *aux1 = lista;
		Vetores *aux2;
		
		while ((aux1 != NULL) && (aux1-> dado < n)){
			
			aux2 = aux1;
			aux1 = aux1 ->seguinte;
		}
		
		if(lista == aux1){
			
			lista = novo_vetor;
			
		}else{
			
			aux2->seguinte = novo_vetor;
			
		}
		
		novo_vetor -> seguinte =aux1;
		
		printf("numero %d adicionado com sucesso\n", n);
		
	}
	
	void exibirLista(Vetores *lista){
		
		Vetores *vetorAtual = new Vetores();
		
		vetorAtual = lista;
		
		while(vetorAtual != NULL){
			
		cout<< vetorAtual -> dado << "  -  ";
		vetorAtual = vetorAtual -> seguinte;
		
		}
	}
	


