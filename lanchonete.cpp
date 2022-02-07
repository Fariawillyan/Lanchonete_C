#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()// função principal
{
	setlocale(LC_ALL, "Portuguese"); // ortografia portuguesa

	printf("****************************************************************************\n"); /* printsF para a visualição das opções a serem escolhidas pelo usuáio*/

	printf("olá, bem vindo à Lancheria do Batata... Escolha qual item deseja comprar:\n");
	printf("********************************|MENU|**************************************\n" );
	
	printf("item\t\t" "Produtos\t" "Código\t\t" "Preço Unitário\t" );

	printf("\n");
	printf("****************************************************************************\n");

	printf(" 1 -\t Cachorro-quente\t 100\t\t R$ 5,00 \n" );
	printf(" 2 -\t X-Salada\t\t 101\t\t R$ 8,79 \n" );
	printf(" 3 -\t X-bacon\t\t 102\t\t R$ 9,99 \n" );
	printf(" 4 -\t Misto\t\t\t 103\t\t R$ 6,89 \n" );
	printf(" 5 -\t Salada\t\t\t 104\t\t R$ 4,80 \n" );
	printf(" 6 -\t Água\t\t\t 105\t\t R$ 3,49 \n" );
	printf(" 7 -\t Refrigerante\t\t 106\t\t R$ 4,99 \n" );

	printf("\n\n");
	printf("Digite a opção desejada de 1 a 7 ou 0 para finalizar o pedido:\n\n ");
	
	int opcao;// variável para o uso do while
	float cachorroquente = 5.00, xsalada = 8.79, xbacon = 9.99, misto =	6.89, salada = 4.80, agua = 3.49, refrigerante = 4.99;	//Variáveis declaradas para a execução nas instruções!
	float qcachorro = 0, qxsalada = 0, qbacon = 0, qmisto = 0, qsalada =0, qagua = 0, qrefri = 0; /*variaveis declaradas para entrar com as	quantidades desejadas pelo usuário*/
	float qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0, qtd6 = 0, qtd7 = 0; //variaveis de quantidade
	float total; // variavel total do pedido

	scanf_s("%d", &opcao); // scanf para a entrada de dados e o "&" para o armazenamento de dados na memória "opcao"...

	while (opcao <= 7)// condicional while para dar o loop no programa
	{
		switch (opcao)
	{
			case 1:

				printf("Digite a quantidade de cachorro -quente:\n");

				scanf_s("%f", &qcachorro);// entrada de dados e armazenamento na memoria
				qtd1 = qcachorro * cachorroquente; // calculo feito com quantidade vezes o preço do produto

				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

				/*obs: o preço pode ser mudado na variavel no inicio para refletir com outro resultado*/

			case 2:

				printf("Digite a quantidade de X -Salada:\n");
				scanf_s("%f", &qxsalada);
				qtd2 = qxsalada * xsalada;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 3:

				printf("Digite a quantidade de X -bacon:\n");
				scanf_s("%f", &qbacon);
				qtd3 = qbacon * xbacon;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 4:

				printf("Digite a quantidade de Misto:\n" );
				scanf_s("%f", &qmisto);
				qtd4 = qmisto * misto;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 5:

				printf("Digite a quantidade de Salada:\n" );
				scanf_s("%f", &qsalada);
				qtd5 = qsalada * salada;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 6:

				printf("Digite a quantidade de Água:\n" );
				scanf_s("%f", &qagua);
				qtd6 = qagua * agua;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 7:

				printf("Digite a quantidade de Refrigerante:\n" );
				scanf_s("%f", &qrefri);
				qtd7 = qrefri * refrigerante;
				printf("Algo mais? ... ou 0 para finalizar o pedido:\n\n " );

			break;

			case 0:

				printf("****************************************************************************\n");

				printf("\t\t\tEMITINDO A NOTA FISCAL\n\n" );
				printf ("****************************************************************************\n");

				printf(" Qtd\t\t Produto\t Valor Unitário\t\t Valor Total \n");

				if (qcachorro != 0)// condicional simples para printar os produtos comprados
				{
					printf(" %.f -\t Cachorro-quente\t R$ %.2f \t\t R$ %.2f	\n", qcachorro, cachorroquente, qtd1);
				}
				if( qxsalada != 0)
				{
					printf(" %.f -\t X-Salada\t\t R$ %.2f \t\t R$ %.2f\n" ,	qxsalada, xsalada, qtd2); //variaveis de preço e quantidades
				}
				if (qbacon != 0)
				{
					printf(" %.f -\t X-bacon\t\t R$ %.2f \t\t R$ %.2f \n",qbacon, xbacon, qtd3);
				}
				if (qmisto != 0)
				{
					printf(" %.f -\t Misto\t\t\t R$ %.2f \t\t R$ %.2f \n",qmisto, misto, qtd4);
				}
				if (qsalada != 0)
				{
					printf(" %.f -\t Salada\t\t\t R$ %.2f \t\t R$ %.2f \n",qsalada, salada, qtd5);
				}
				if (qagua != 0)
				{
					printf(" %.f -\t Água\t\t\t R$ %.2f\t\t R$ %.2f	\n",qagua, agua, qtd6);
				}
				if (qrefri !=0)
				{
					printf(" %.f -\t Refrigerante\t\t R$ %.2f\t\t R$ %.2f \n",qrefri, refrigerante, qtd7);
				}
					printf("\n");
				total = (qtd1 + qtd2 + qtd3 + qtd4 + qtd5 + qtd6 + qtd7);
				printf(" => \tO total do pedido é:\t\t\t\t%.2f reais\n" , total);

				break;

				default:
					printf("Obrigado, volte sempre!!!" );
				break;
		}
			scanf_s("%d", &opcao);
	}
	printf("Obrigado pela visita!!! \n\n" );
	system("pause");

	return 0;
}