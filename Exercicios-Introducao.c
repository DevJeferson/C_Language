/* 1) Desenvolva um algoritmo para calcular a hipotenusa de um triângulo retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main(){
	float a,b,c,s,b1,c1;
	printf("Insira os valores de  B e C");
	scanf("%f %f",&b,&c );
	b1=b*b;
	c1=c*c;
	a=b1+c1;
	s=a/2;
	printf("A hipotenusa é: %f", s);
	return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 2) Escrever um algoritmo em C que recebe como entrada um inteiro N
e tem como saída a sequência dos números primos até N.*/
/*
int main(){
	int n,x;
	x=0;
	printf("insira um numero:");
	scanf("%d",&n);
	while(x<n){
		if((n%x)==0){
			printf("%d",x);
		}
		x++;
	}
	return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*3) Desenvolva um algoritmo que busca um inteiro em um vetor de inteiros.*/
/*
int main() {
	int vetor[tam], valor, i, achou=0;
	for (i=0;i<tam;i++)
		scanf("%d", &vetor[i]);
	scanf("%d", &valor);
	for (i=0;i<tam;i++){
		if (valor==vetor[i])
			achou=1;
	}
	if (achou)
		printf("O valor %d esta¡ no vetor.", valor);
	else
		printf("O valor %d nao esta no vetor.", valor);
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*4) Escrever um algoritmo em C que recebe como entrada um inteiro n
e tem como saída a sequência dos números primos até n.*/
/*
int eh_primo(int x){
        int i;
        int count = 0;
        for(i = 1; i <= x/2; i++){
        if((x % i) ==0){
            count++;
        }
    }
if(count == 1){
    return 1;
} else return 0;    
    }  
    void ler (int*n){
        printf("Digite um inteiro");
        scanf("%d",n);
    }
        
    void imprime_primo(int n){
        int i;
        printf("1 2");
        for (i = 3; i <= n; i+=2){
            if(eh_primo(i)){
                printf("%d",i);
            
            }}}
    
 int main(){
        int m;
        ler(&m);
        imprime_primo(m);
        
    }
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 /* 5) Implemente o seguinte código em C (acrescente
os códigos necessários) e explique graficamente o
resultado obtido. */
/*
int main(){
    int *pint= (int*) malloc (sizeof(int));
    *pint  = 0;
    int **pPint=&pint;
    (**pPint)++;
    printf("pint:%d",*pint);
    free(pint);

}

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////THE END
 
/*6) Crie um procedimento para ler os dados inteiros do
teclado para um vetor, onde o último dado digitado pelo
usuário é -1. Os parâmetros do procedimento devem ser
o vetor e o tamanho do vetor;*/

/*
  void lerVetor(int *v, int n){
    int i,u;
    for (i = 0; i < n; i++) {
        printf("digite um numero:");
        scanf("%f",&u);
        v[i]=u;
        if (u==-1){
            break;
    }
  }
}

int main ( int argc, char *argv[] ){
int *v = (int *) malloc (sizeof(int)*1000);
int u;
lerVetor(v,1000);
free(v);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

/*07) Crie um procedimento para imprimir um vetor inteiros
na tela.*/
/*
void IMPRIME_VETOR(int *vetor, int n){

	int cont;
	for(cont=0; cont<n; cont++){
		printf("%d\n", vetor[cont]);
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////

/*08) Crie uma função que retorna o índice de um
determinado inteiro x em um vetor de inteiros dinâmico.*/

    /*void lerVetor(float *v, int n){
        int i,u;
          printf("insira um numero:\n");
          scanf("%d",&u);
        for (i = 0; u==v[i] ; i++) {
            printf("esta no vetor %f", v[i]);
}
}
    int main ( int argc, char *argv[] ){
        int u;
        float *x = (float *) malloc (sizeof(float)*10);
        lerVetor(x,10);
        free(x);
}



/////////////////////////////////////////////////////////////////////////////////////////////////////

/*09) Crie um procedimento para ordenar um vetor de
inteiros dinâmico*/
/*
void ORDENA_VETOR(int *vetor, int n){

	int a,b;
	int troca;
    for(b=0; b<n; b++){
    	for(a=b+1; a<n; a++){
    		if(vetor[b]>vetor[a]){
    			troca = vetor[b];
    			vetor[b]=vetor[a];
    			vetor[a]= troca;
    		}
    	}
    }
    for(b=0; b<n; b++){

    	printf("%d ", vetor[j]);
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////

/*10) Crie uma função que realize a busca binária de um
		inteiro x em um vetor de inteiros.*/

/*
int buscaBin (int *v, int n, int x ){
    int ini = 0;
    int fim = n-1;
    int meio =(ini+fim)/2;
    
    while((fim > ini) && v[meio] !=x){
        if (v[meio] < x){
            ini = meio;
        } else if(v[meio] > x){
            fim = meio;
        }
        meio = (ini+fim)/2;
    }
    return  meio;
}
int main ( int argc, char *argv[] ){
        int tam = 10;
        int *v = (int *) malloc (sizeof(int)*tam);
        lerVetor(v,&tam);
        imprimevetor(v,tam);
        printf("Entre com um inteiro\n");
        int v;
        scanf("%d",&x);
        printf("o indice do inteiro e %d\n",buscaBin(v,tam,x));
        free(v);
        
        return 0;
}

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*11)Crie a estrutura coordenada e em seguida crie os
seguintes procedimentos:
a) Leitura de coordenadas para um vetor de ponteiros
para estrutura coordenada;
b) Escrita em tela de um vetor de coordenadas;
c) Cálculo da distância euclidiana entre duas
coordenadas;
d) Cálculo da distância euclidiana entre todos os
pontos de um vetor de pontos.*/
/*


struct coordenada{
    float x;
    float y;
};
typedef struct coordenada Coordenada;


//LETRA A
void lerCoordenada (Coordenada **v, int n){
    int a;
    for (a = 0; a < n; a++) {
        printf("\nDigite o valor para a posicao x%i:", a+1);
        scanf("%f", &(v[a]->x));
        printf("Digite o valor para a posicao y%i:", a+1);
        scanf("%f", &(v[a]->y));
    }
}

//LETRA B
void imprimirCoordenada (Coordenada **v, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("(%.2f , %.2f) \n", v[i]->x, v[i]->y);
    }
}

//LETRA C
void distancia (Coordenada *a, Coordenada *b){
    float result;
    result = sqrt(pow((b->x - a->x), 2) + pow((b->y - a->y), 2));
    printf("%f \n", result);
// ou    (*a.x)
}

//LETRA D
void distanciaPontos(Coordenada **v, int n){
    //precisa dois loops
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            printf("Distancia entre ponto [%i] e ponto [%i]: ", i+1 ,j+1);
            distancia (v[i], v[j]);
        }
    }
}
Coordenada** alocaVetor(int tamanho){
    int n;
    Coordenada **pVetor = (Coordenada**) malloc(sizeof(Coordenada*) * tamanho);
        for (n = 0; n < tamanho; n++) {
            pVetor[n] = (Coordenada*) malloc(sizeof(Coordenada));
        }
        return pVetor;

}

int main(int argc, char **argv) {
    printf("::Calculo de Distancia Euclidiana entre Coordenadas::\n");
    printf("Quantas cordenadas voce quer ter?");
    int tamanho;
    scanf("%d", &tamanho);
    Coordenada **pVetor = alocaVetor(tamanho);
    lerCoordenada(pVetor, tamanho);                  //LETRA A
    imprimirCoordenada(pVetor, tamanho);            //LETRA B

    distanciaPontos(pVetor, tamanho);                //LETRA C


}
