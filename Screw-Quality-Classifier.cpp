#include <iostream>

using namespace std;
int main()
{
	int parafusos_totais=0, padrao_ouro=0, padrao_prata=0, para_ajuste=0, refugo=0, opcao;
	float tamanho;
	
	do
	{
		do
		{
		cout<<"Qual o tamanho do parafuso em milímetro?"<<endl;
		cout<<"mm: ";
		cin>>tamanho;
		}while(tamanho <= 0);
			
		if(tamanho < 10)
		{
			refugo++;
		}
			else if(tamanho > 10 && tamanho <= 15)
			{
				if(tamanho == 12.5)
				{
					padrao_ouro++;
				}
					else
					{
						padrao_prata++;
					}
			}
				else if(tamanho > 15)
				{
					para_ajuste++;
				}
		
		parafusos_totais++;
				
		do{
		cout<<"Deseja continuar?"<<endl;
		cout<<"[1] - Sim\n[0] - Não"<<endl;
		cin>>opcao;
		}while(opcao > 1 || opcao < 0);
		
	}while(opcao != 0);
	
	cout<<"Parafusos totais analisados: "<<parafusos_totais<<endl;
	cout<<"Parafusos de Padrão Ouro: "<<padrao_ouro<<endl;
	cout<<"Parafusos de Padrão Prata: "<<padrao_prata<<endl;
	cout<<"Parafusos para ajuste: "<<para_ajuste<<endl;
	cout<<"Parafusos descartados (refugo): "<<refugo<<endl;
	
	return 0;
}
