#include <iostream>
using namespace std;


//metodo nao eficiente, pois recalcula valores ja calculados, chamando a função varias vezes
int fibo_recursivo(int n){
    if(n==1 || n ==2){
        return 1;
    }
    else{
        return fibo_recursivo(n-2) + fibo_recursivo(n-1);//problema
    }
}

//metodo mais eficiente, pois calcula cada valor apenas uma vez
void fibo_interativo(int n){
    int a=1, b=1;//dois primeiros casos
    
    cout<<a<<' '<<b<<' ';//imprime os dois primeiros casos
    for(int i=3; i<=n; i++){
        int c = a+b;
        cout<<c<<' ';
        a = b;
        b = c;
    }
}

int main()
{
    int n = 5;
    
    /*
    for(int i=1; i<= n; i++){
        cout<<fibo_recursivo(i)<<endl;
    }
        */

    //fibonacci interativo de melhor desempenho
    cout<<"Sequencia Fibonacci Interativa: ";
    fibo_interativo(n);
    return 0;
}
