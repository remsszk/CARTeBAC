#include <stdio.h> //bibilioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings


int registro() // fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final
	
	printf("Digite o CPF  a ser cadstrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w");  //cria o arquivo e o "w" cria e escreve no file
	fprintf(file,cpf);  //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadstrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");//definindo a linguagem
	
	//inicio da string
	char cpf[40];
	char conteudo[200];
	//final da string
	
	printf("Digite o CPF a ser consultado: "); //coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf, "r"); // "r" significa READ que seria ler o arquivo
	
	if(file == NULL) //null = a nulo
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");

}


int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado do sistema: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema! \n");
		system("pause");
	}
}


 

int main()
         {
                 int opcao=0; //definindo vari�veis
                 int laco=1;
                 
                 for(laco=1;laco=1;)
                 {
                 	
				     system("cls"); //repons�vel por limpar a tela
				     
			    	 setlocale(LC_ALL, "Portuguese");//definindo a linguagem
				 
				 				 
	                 printf("### Cart�rio da EBAC ###\n\n");//inicio do menu     
				  
	                 printf("Escolha a op��o desejada do menu:\n\n");
                     printf("\t1 - Registrar nome\n");
	                 printf("\t2 - Consultar nomes\n");
	                 printf("\t3 - Deletar nomes\n\n");
			    	 printf("Op��o: ");//fim do menu
				   
	                 scanf("%d", &opcao);//armazenando a escolha do usu�rio
	             
	                 system("cls");
	                 
	                 //inicio da sele��o
	                 switch(opcao)
	                 {
	                 	case 1:
	                 	registro();	//chamada de fun��es
	                 	break;
	                 	
	                 	case 2:
	                 	consulta();	
						break;
						
						case 3:
						deletar();
				   	    break;
				   	       	    
				   	    default:
				   	    printf("Essa op��o n�o est� dispon�vel\n");
				   	    system("pause");	
				   	    break;
				   	//fim da sele��o	
					 }
	                 
	            
	                 
				
				 
			     }
				  
				 
		 }
