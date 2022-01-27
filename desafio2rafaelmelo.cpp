#include <iostream>
#include <math.h>
using namespace std;
int repete;
int op;
int x;
int y;
int escolha;
int resultado=1;
int main(){
    cout<<"OLÁ, BEM VINDO À CALCULADORA"<<endl;
    do{
        cout<<"Selecione se deseja acessar a calculadora básica, para isso digite 0 ou a avançada digite 1: "<<endl;
        cin>>escolha;
        while (escolha!=0 && escolha!=1){
            cout<<"Valor inválido digite novamente"<<endl;
            cin>>escolha;
        }
        if(escolha==0){
            cout<<"Escolha dois números para a operação"<<endl;
            cin>>x;
            cin>>y;
            cout<<"Selecione a operação desejada!"<<"\n"<<"1-Soma"<<"\n"<<"2-Subtração"<<"\n"<<"3-Multiplicação"<<"\n"<<"4-Divisão"<<"\n"<<"5-Resto de divisão"<<"\n"<<endl;
            cin>>op;
            switch (op){
                case 1:
                    cout<<"O valor da soma é de: "<<x+y<<endl;
                    break;
                case 2:
                    cout<<"O valor da subtração é de: "<<x-y<<endl;
                    break;
                case 3: 
                    cout<<"O valor da multiplicação é de: "<<x*y<<endl;
                    break;
                case 4:
                    while(y==0){
                        cout<<"Digite um valor válido para o denominador: "<<endl;
                        cin>>y;
                    }    
                    cout<<"O valor da divisão é de: "<<float(x)/float(y)<<endl;
                    break;
                case 5:
                    if(x>y){
                        cout<<"O resto da divisão é de: "<< x%y<<endl;
                    }else{
                        cout<<"O resto da divisão é de: "<< y%x<<endl;
                    }
                    break;
                default:
                    cout<<"Valor inválido"<<endl;
                    break;
            }
        }else{
            cout<<"Selecione a operação desejada!"<<"\n"<<"1-Raiz quadrada"<<"2-Fatorial"<<"3-Potenciação"<<endl;
            cin>>op;
            switch(op){
                case 1:
                    cout<<"Selecione um número POSITIVO para extrair a raiz quadrada"<<endl;
                    cin>>x;
                    while(x<0){
                        cout<<"Valor inválido, por favor digite outro"<<endl;
                        cin>>x;
                    }
                    cout<<"O valor da raiz é de: "<<sqrt(x)<<endl;
                    break;
                case 2:
                    cout<<"Selecione um número POSITIVO para calcular o fatorial"<<endl;
                    cin>>x;
                    while(x<0){
                        cout<<"Valor inválido, por favor digite outro"<<endl;
                        cin>>x;
                    }
                    for(int i=1;i<=x;i++){
                        resultado*=i;
                    }
                    cout<<"O valor do fatorial é de: "<<resultado<<endl;
                    break;
                case 3:
                    cout<<"Escolha dois números para a operação"<<endl;
                    cin>>x;
                    cin>>y;
                    cout<<"O valor da potenciação é de: "<<pow(x,y)<<endl;
                    break;
                default:
                    cout<<"Valor inválido"<<endl;
                    break;
            }
        }
        cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
        cin>> repete;
    }while (repete==1);
    return 0;
}