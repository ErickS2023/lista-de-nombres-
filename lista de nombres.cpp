/*
// lista de nombres
#include<stdio.h>
int main (){
	int i=1;
	
	while (i==1){
		
		int opc;
		
		printf("Defina el nombre que desee: ");
	scanf("%d", &opc);
	
	switch(opc){
		
		case 1:
			printf("bienvenido");
			break;
		
		case 2:
		printf("Erick");
		break;
		
		case 3:
	   printf("Omar");
	   break;
	   
	   case 4: 
	   printf("Pablo");
		break;	
	
		case 5:
		printf("Juan");
		break;
		
		case 6:
		printf("Shelby");
	    break;
	    
	    case 7:
	    printf("Henry");
		break;
		
		case 8:
		printf("Ferdinand");
		break;
		
		case 9:
		printf("Sergio");
		break;
		
		case 10:
		printf("Alonso");
		break;
		
		case 11:
		printf("Carlos");
		i=11;
		break;

	}
			
	}
	
	printf("\a");
}




#include<stdio.h>
int main()
{
	int num1, num2,x;
	printf("Primer numero:");
	scanf ("%d", &num1);
	printf("Segundo numero: ");
    printf("Erick");
	scanf("%d", &num2);
	if(num1>num2){
		printf("Valores incorrectos \n");
	}
	else
	{
		for(x=num1;x<=num2;x++){
			if(x%2==0);
			printf("%d\n",x);
		}
	}
	return 0;
}
|*/

#include<stdio.h>
#include<stdlib.h>


int main()
{ 
int n;
char text[10][10]=
{
	"Erick",
	"Shelby",
	"Sergio",
	"Alonso",
	"Carlos",
	"Henry",
	"Ferdinand",
	"Juan",
	"Pablo",
	"Omar",
};
printf("Ingrese que nombre desea imprimir:");
scanf("%d", &n);
if (n>=1 && n <= 10)
{
	printf("El nombre en la posicion %d es:%s", n, text[n-1]);
}
return 0;
}










