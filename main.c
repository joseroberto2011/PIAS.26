#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VERDE "\033[32m"
#define VERMELHO "\033[31m"
#define AMARELO "\033[33m"
#define AZUL "\x1b[38;2;62;45;32m"
#define RESET "\033[0m"
#define FUNDO_CIANO "\x1b[48;2;205;133;63m"

void Hamburguer();
void Refrigerante();
void Batata();
void menusenha();
void menuadmin();
void Combo();
void notafiscal();
void estoque();
void limpar_tela();
void pausar();

int qntp = 17;

char itens[13][20]={"alface", "carne", "pao", "tomate", "molho", "batata", "queijo", "picles", "bacon", "ovo", "coca cola", "fanta laranja","guaraná"};

char produtos[17][35] = {"Xtudo", "Xegg", "Xsalada", "Xburguer", "Xbacon","cocacola 2l","cocacola 600ml","cocacola lata","fanta laranja 2l","fanta laranja 600ml","fanta laranja lata","guaraná 2l","guaraná 600ml","guaraná lata","Batata Grande","Batata Média","Batata Pequena"};

float preco[17] = {32.00, 26.00, 26.00, 23.00, 28.00, 12.00, 8.00, 5.00, 12.00, 8.00, 5.00, 12.0, 8.00, 5.00, 12.00, 8.00, 4.00};

int quantia[13] = {1000, 4000, 50, 1000, 1000, 5000, 50, 1000, 1000, 2000, 20000, 20000, 20000};

int nota[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void menu() {
    
limpar_tela();
    
	char opcao;
	do {
	    printf( AZUL"\n===================================\n"RESET);
		printf(FUNDO_CIANO "  BEM VINDO AO PELISSARI BURGUER   \n"RESET);
		printf(AZUL"===================================\n"RESET);
		printf("O que você deseja pedir?\n\n");
		printf(" 1.Hamburguer\n 2.Refrigerantes\n 3.Combos\n 4.Batata \n 5.Fechar pedido\n 6.admin \n");

		scanf(" %c", &opcao);
		switch(opcao) {
		    
		case '1':
			Hamburguer();
			break;
			
		case '2':
			Refrigerante();
			break;
			
		case '3':
			Combo();
			break;
			
		case'4':
		    Batata();
		    break;
		    
		case'5':
		    notafiscal();
		    break;
		    
        case'6':
		    menusenha();
		    break;
		    
		default:
		printf("Errado");
		break;
		}
		
	} while(opcao != '5');
	pausar();
	
}

void Hamburguer(){

limpar_tela();
printf("\nEscolha qual hamburguer você vai querer.\n\n");
int opcao;
int i = 0;

for(int i = 0; i < 5; i++) {
printf("%d %s R$%.2f\n", i + 1, produtos[i], preco[i]);
  }
 
 do{

scanf("%d", &opcao);

if(opcao < 1 || opcao > 5){
    
    printf("Opção inválida! Tente novamente.");
 }
}while(opcao < 1 || opcao > 5);

switch(opcao){
    
    case 1:
    
    quantia[2] = quantia[2] - 2;
    quantia[1] = quantia[1] - 100;
    quantia[6] = quantia[6] - 2;
    quantia[4] = quantia[4] - 35;
    quantia[8] = quantia[8] - 25;
    quantia[3] = quantia[3] - 40;
    quantia[0] = quantia[0] - 10;
    quantia[9] = quantia[9] - 50;
    break;
    
    case 2:
    
    quantia[2] = quantia[2] - 2;
    quantia[1] = quantia[1] - 100;
    quantia[6] = quantia[6] - 2;
    quantia[4] = quantia[4] - 35;
    quantia[9] = quantia[9] - 50;
    break;
    
    case 3:
    
    quantia[2] = quantia[2] - 2;
    quantia[1] = quantia[1] - 100;
    quantia[6] = quantia[6] - 2;
    quantia[4] = quantia[4] - 35;
    quantia[0] = quantia[0] - 10;
    quantia[3] = quantia[3] - 40;
    break;
    
    case 4:
    
    quantia[2] = quantia[2] - 2;
    quantia[1] = quantia[1] - 100;
    quantia[6] = quantia[6] - 2;
    quantia[4] = quantia[4] - 35;
    break;
    
    case 5:
    
    quantia[2] = quantia[2] - 2;
    quantia[1] = quantia[1] - 100;
    quantia[0] = quantia[0] - 10;
    quantia[4] = quantia[4] - 35;
    quantia[6] = quantia[6] - 2;
    quantia[8] = quantia[8] - 25;
    break;
}

i = opcao - 1;
nota[i] = nota[i] + 1;

printf("Você escolheu: %s\n", produtos[opcao - 1]);
pausar();
limpar_tela();
}

void Refrigerante(){
    
limpar_tela();
printf("\nEscolha qual Refrigerante você vai querer.\n\n");
int opcao;
int i;

for(int i = 5; i < 14; i++) {
    
printf("%d %s R$%.2f\n", i - 4, produtos[i], preco[i]);
  }

do{
scanf("%d", &opcao);

if(opcao < 1 || opcao > 9){
    
    printf("Opção inválida! Tente novamente.");
 }
}while(opcao < 1 || opcao > 9);

switch(opcao){
    
    case 1:
    
    quantia[10] = quantia[10] - 2000;
    break;
    
    case 2:
    
    quantia[10] = quantia[10] - 600;
    break;
    
    case 3:
    
    quantia[10] = quantia[10] - 350;
    break;

    case 4:
    
    quantia[11] = quantia[11] - 2000;
    break;
    
    case 5:
    
    quantia[11] = quantia[11] - 600;
    break;
    
    case 6:
    
    quantia[11] = quantia[11] - 350;
    break;
    
    case 7:
    
    quantia[12] = quantia[12] - 2000;
    break;
    
    case 8:
    
    quantia[12] = quantia[12] - 600;
    break;
    
    case 9:

    quantia[12] = quantia[12] - 350;
    break;
    
}

i = opcao + 4;
nota[i] = nota[i] + 1;

printf("Você escolheu: %s\n", produtos[opcao + 4]);
pausar();
limpar_tela();
}

void Combo(){
    
    Hamburguer();
    Batata();
    Refrigerante();
    
}

void Batata(){
    
limpar_tela();
printf("\nEscolha qual batata você vai querer.\n\n");
int opcao;
int i;

for(int i = 14; i < 17; i++) {
    
printf("%d %s R$%.2f\n", i - 13, produtos[i], preco[i]);
  }

  do{
 
scanf("%d", &opcao);
if(opcao < 1 || opcao > 3){
    printf("Opção inválida! Tente novamente.");
}
}while(opcao < 1 || opcao > 3);

switch(opcao){
    
    case 1:
    
    quantia[5] = quantia[5] - 160;
    break;
    
    case 2:
        
    quantia[5] = quantia[5] - 100;
    break;
    
    case 3:
        
    quantia[5] = quantia[5] - 70;
    break;
    
}

i = opcao + 13;
nota[i] = nota[i] + 1;

printf("Você escolheu: %s\n", produtos[opcao + 13]);
pausar();
limpar_tela();
}

void menusenha(){
    
limpar_tela();
    
    int senha = 19789;
    int senha2 = 0;
    
    printf("Digite sua senha:");
    scanf("%d", &senha2);
    
    if(senha2 == senha){
        
        printf("Acesso permitido.");
        menuadmin();
        printf("Acesso permitido");
        
    }
    if(!(senha2 == senha)){
        
        printf("Acesso negado.");
    }

limpar_tela();

}

void menuadmin(){
    
limpar_tela();
    
    char opcao;
    
    printf("\nO que você deseja fazer?\n\n 1.Estoque \n 2.Sair \n");
    
    do{
    
   scanf(" %c", &opcao);
    
   switch(opcao){
       
       case '1':
       estoque();
       break;
       
       case'2':
       return;
       
   }
}while(opcao == '1');
limpar_tela();

}

void notafiscal(){
    
limpar_tela();
    
    float total = 0;
    float subtotal = 0;
    
    for(int i = 0; i < 17; i++){
        
    subtotal = preco[i] * nota[i];
    total = total + subtotal;
    
    if(nota[i] > 0){
    printf("Pedido: %s | Quantidade: %d | Valor Unitário: R$ %.2f | Subtotal: R$ %.2f\n", produtos[i], nota[i], preco[i], subtotal);
    }
 }
    printf("-----------------------------------\n");
    printf("Total do pedido: R$ %.2f\n", total);
    pausar();
    limpar_tela();

}

void estoque(){
    
limpar_tela();

    
    for(int i = 0; i < 13; i++){
    printf("Item: %s | Quantidade: %d\n", itens[i], quantia[i]);
    printf("\n2. Sair.");

 }
pausar();
limpar_tela();

}

// Limpa o terminal tanto no Windows (cls) quanto no Linux/Mac (clear)
void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pausar() {
    printf("\nPressione [ENTER] para continuar...");
    getchar();
}

int main(){
menu();
    return 0;
}
