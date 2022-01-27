#include <iostream>
#include <math.h>
using namespace std;
int repete;
int op;
int x;
int y;
int main(){
    cout<<"OLÁ, BEM VINDO À CALCULADORA"<<endl;
    do{
        cout<<"Selecione a operação desejada!"<<"\n"<<"1-Soma"<<"\n"<<"2-Subtração"<<"\n"<<"3-Multiplicação"<<"\n"<<"4-Divisão"<<"\n"<<"5-Resto de divisão"<<"\n"<<"6-Potenciação"<<"\n"<<"7-Fatorial"<<"\n"<<"8-Raiz quadrada"<<endl;
        cin>>op;
        switch (op){
        case 1:
            cout<<"Entre com dois números para somar"<<endl;
            cin>>x;
            cin>>y;
            cout<<"A soma de x+y é: "<<x+y<<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 2:
            cout<<"Entre com dois números para somar"<<endl;
            cin>>x;
            cin>>y;
            cout<<"A subtração de x+y é de: "<<x-y<<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 3:
            cout<<"Entre com dois números para somar"<<endl;
            cin>>x;
            cin>>y;
            cout<<"A multiplicação de x*y é de: "<<x*y<<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 4:
            cout<<"Entre com dois números para somar"<<endl;
            cin>>x;
            cin>>y;
            if(y==0){
                while (y==0){
                    cout<<"Digite um valor válido para o denominador: "<<endl;
                    cin>>y;
                }    
            }else{
                cout<<"A divisão de x/y é de: "<<float (x/y)<<endl;
            }
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 5:
            cout<<"Entre com dois números para somar"<<endl;
            cin>>x;
            cin>>y;
            if(x>y){
                cout<<"O resto da divisão ente x e y é de: "<<x%y;
            }else{
                cout<<"O resto da divisão ente x e y é de: "<<y%x;
            }
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 6:
            cout<<"Entre com dois números"<<endl;
            cin>>x;
            cin>>y;
            cout<<"O valor da potenciação de x e y é de: "<<pow(x,y)<<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 7:
            int resultado=1;
            int i;
            cout<<"Entre com um número para calcular o fatorial"<<endl;
            cin>>x;
            for(i=1;i<=x;x++){
                resultado*=i;
            }
            cout<<"O valor da fatorial do número x é de: "<<resultado<<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        case 8:
            cout<<"Entre com um número POSITIVO para extrair a raiz quadrada"<<endl;
            cin>>x;
            while(x<0){
                cout<<"Valor inválido, por favor digite novamente: ";
                cin>>x;
            }
            cout<<"O valor da raiz quadrada de x é de: "<<sqrt(x)<endl;
            cout<<"Deseja continuar as operações: 1-Sim. 2-Não"<<endl;
            cin>> repete;
            break;
        default:
            cout<<"Valor inválido"<<endl;
            break;
        }

    }while (repete==1 || (op>8 || op==0));
    
    return 0;
}