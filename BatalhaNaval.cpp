#include <iostream>      //biblioteca para o uso do cin e cout
#include <iomanip>       //biblioteca para usar o cin e cout
#include <stdlib.h>      //biblioteca para usar o system(cls){limpar tela}
#include <cstdlib>       //biblioteca para gerar numeros aleatorios e return(0)
#include <time.h>        //biblioteca para gerar numero aleatorio
using namespace std;
int main(){
	int n;
	int m[5][5];
	int x;
	int y;
	int vidas;
	int acertos;
	
	setlocale(LC_ALL,"");//colocar acentuação nas palavras
	cout<<"--------------------- BATALHA NAVAL------------------"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"-     Intruções para inicio do jogo:      -"<<endl;
	cout<<"-      -Para comecer o jogo, digite (1)   -"<<endl;
	cout<<"-      -Para créditos (2)                 -"<<endl;
	cout<<"-      -Para sair (0)                     -"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Novo jogo(1)"<<endl;
	cout<<"Créditos(2)"<<endl;
	cout<<"Sair(0)"<<endl;
	cin>>n;
	system("cls");//limpar a tela "cls" para windows e "clear" para linox
	if(n==1){
 	    cout<<"....................BATALHA NAVAL...................."<<endl;
 	    cout<<endl;
 	    cout<<endl;
 	    cout<<"Nesse jogo, voçê ira ter 8 vidas para acertar os 5 barquinhos que estão no mar. "<<endl;
 	    cout<<endl;
 	    
 	    for(int i=0;i<5;i++){   // lendo a matriz 
 	    	for(int j=0;j<5;j++){
 	    		m[i][j]=0;// atribuindo o valor 0 em toda matriz
 	    		
 	    		
			 }
		 }
		for(int i=0;i<5;i++){          // gerar valores aleatorios para os barcos
			srand(time(NULL));        //codico de randomização (geração aleatoria)
			x=rand()%5;               //gerar numeros aleatorios para x
			y=rand()%5;               //gerar numeros aleatorios para y
			while(m[x][y]!=0){        // condição para não gerar posições iguais
				srand(time(NULL));
			    x=rand()%5;
		      	y=rand()%5;		
			}
			m[x][y]=1;	//local que o barco ira ficar
		}
		vidas=8;//quantidade de vidas
		acertos=0;//quantidade de acertos
		while(vidas>0 && acertos<5){
			system("cls");//limpar a tela 
			cout<<"Quantidade de Vidas="<<vidas<<endl;
			cout<<"Barcos restantes="<<5-acertos<<endl;
			cout<<"....................................."<<endl;
			cout<<"..........0.1.2.3.4.................."<<endl;
			for(int i=0;i<5;i++){
				cout<<"........"<<i<<" ";
				for(int j=0;j<5;j++){
					if(m[i][j]==1){       // valor 1 representa o barco
						cout<<"~"<<" ";
					}
					else if(m[i][j]==0){  // valor 0 representa a agua
						cout<<"~"<<" ";
					}
					else{
						
						cout<<"B"<<" ";// qualquer coisa diferente de 1 e 0 vai reprensentar o barco distruido
					}	
				}
			    cout<<"................."<<endl;	
			}
			cout<<"Digite um valor para linha: ";
			cin>>x;
			cout<<"Digite um valor para coluna: ";
			cin>>y;
			if(m[x][y]==1){
				acertos++;
				m[x][y]=2;	
			}
			else{
				vidas--;
			}
		}
		if(acertos==5){
			cout<<"Você ganhou !!!";
		}
		else{
			cout<<"Você perdeu !!!";
		}
	}
	else if(n==2){
		cout<<"....................Creditos....................."<<endl;
		cout<<"Criado por João Gabriel Soares                  ."<<endl;
	    cout<<"e                                               ."<<endl;
	    cout<<"Rodrigo Fernandes                               ."<<endl;
	    cout<<"................................................."<<endl;
	}
	else{
		exit(0);
        return 0;
	
	}
		
		
}
