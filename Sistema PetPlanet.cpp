#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	
	char usuario[50];
	char senha[20], confirmar[20], email[30];
	int opc, codprod, qntprod, compradorcpf, cpffuncionario, clientecpf, i, check=0;
	char nomefuncionario[50], nomecliente[50],emailcliente[50],nomepet[50], racapet[50], nomeprod[50], enderecoF[50], enderecoC[50], enderecoP[50], prodpedido[50], pagamento[50];
	
	printf("Bem vindo ao PetPlanet\n\n");
	
	printf("Cadastro de usuario\n-------------------- \nInsira um nome de usuario: ");
	scanf("%s", &usuario);

	printf("Insira um email: ");
	scanf("%s", &email);


	printf("\Crie uma senha para efetuar seu cadastro: ");
	scanf("%s", &senha);
	fflush(stdin);
	
	do{
		printf("Confirmar senha de cadastro: ");
		scanf("%s", &confirmar);
		
		if(strcmp(senha, confirmar)==1){
			printf("As senhas nao conferem, favor comfirmar a senha: ");
			scanf("%s", &confirmar);
		}
		
	}while(strcmp(senha, confirmar));
		
	
	
	printf("\n\nCadastro efetuado com sucesso\n-----------------------------\nBem vindo ao PetPlanet, %s\n\n", usuario);
		
    printf("Escolha uma opcao de servico: \n");
        printf("[1] cadastro de cliente \n");
    	printf("[2] cadastro de funcionario \n"); 
    	printf("[3] cadastro de pets \n");
    	printf("[4] cadastro de produto \n");
    	printf("[5] efetuar pedido \n");
    	printf("\nDIGITE A OPCAO DESEJADA: ");
    	scanf("%i", &opc);
    	
    	switch(opc){
    		case 1:
    					
    			printf("\n[ CADASTRO DE CLIENTE ]\n");
    			printf("Digite o nome do cliente: ");
    			scanf("%s", &nomecliente);
    			printf("Informe o email: ");
    			scanf("%s", &emailcliente);
    			fflush(stdin);
    			printf("Informe o endereco: ");
    			scanf("%s ", &enderecoC);
    			printf("\n");
    			fflush(stdin);
    			printf("Cliente cadastrado com sucesso!\n");
    			printf("--------------------------------");
    			printf("\nnome: %s\nemail: %s\nendereco: %s ", nomecliente,emailcliente,enderecoC);
    			fflush(stdin);
    			break;
    	
    	   case 2:
    	   		
    	   		printf("\n[ CADASTRO DO FUNCIONARIO ]\n");
    	   		printf("Digite o nome do funciorario: ");
    			scanf("%s", &nomefuncionario);
    			fflush(stdin);
    			printf("Informe o CPF: ");
    			scanf("%i ",&cpffuncionario);
    			printf("\n");
    			fflush(stdin);
    			printf("Funcionario cadastrado com sucesso!\n");
    			printf("-----------------------------------");
    			printf("\nnome: %s\nCPF: %i", nomefuncionario,cpffuncionario);
    			break;
    			
    		case 3:
    				
    	   		printf("\n[ CADASTRO DO PET ]\n");
    	   		printf("Digite o nome do pet: ");
    			scanf("%s", &nomepet);
    			printf("Informe a raca do pet:");
    			scanf("%s", &racapet);
    			fflush(stdin);
    			printf("Informe o endereco: ");
    			scanf("%s ",&enderecoP);
    			printf("\n");
    			fflush(stdin);
    			printf("cadastrado com sucesso!");
    			printf("\n-----------------------");
    			printf("\nnome: %s", &nomepet);	
    			printf("\nraca: %s", racapet);
    			printf("\nendereco: %s", enderecoP);
    			fflush(stdin);
    			break;
    			
    		case 4:
    			
    			printf("\n[ CADASTRO DO PRODUTO ]\n");					
    			printf("Digite o nome do produto: ");
				scanf("%s" ,&nomeprod);
				printf("\n");
				fflush(stdin);
				printf("informe o codigo do produto: ");
 				scanf("%i", &codprod);
 				printf("\n");
	 			fflush(stdin);
	 			printf("Produto cadastrado:");
	 			printf("\n-------------------");
				printf("\nnome: %s\n",nomeprod); 
				printf("codigo: %d",codprod);
				fflush(stdin);
				break;
    		
    		case 5:
    			
    			printf("\n[ EFETUAR PEDIDO ]\n");
    			printf("Digite o nome do produto: ");
				scanf("%s", &prodpedido);
				fflush(stdin);
				printf ("\nDigite o CPF do cliente: ");
				scanf ("%i", &compradorcpf);
				fflush(stdin); 
				printf ("\nEscolha a forma de pagamento: \n");
				printf("[cartao] [dinheiro] [pix] \n");
				scanf("%s", &pagamento);
				printf ("\Detalhes do pedido: ");
				printf("\n---------------------\n");
				printf("produto: %s\nCPF: %i\nforma de pagamento: %s", prodpedido,compradorcpf,pagamento);
				fflush(stdin);
				break;
			
			default:
				 break;
   			
		}
		
		return 0;
		
	}
