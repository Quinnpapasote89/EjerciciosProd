#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int fil=4,col=4,op,i,j,suma,men,may,b,band,sumd,sumdi,x,sumt=0;
	int mat[fil][col];
	srand(time(NULL)); 
	do{
		system("color 3");
		system("cls");//limpia la pantalla
		printf("\n1...Llenar la Matriz manualmente");
		printf("\n2...Llenar la Matriz aleatoriamente");
		printf("\n3...Mostrar el contenido de la Matriz");
		printf("\n4...Sumar el contenido de la Matriz");
		printf("\n5...Buscar el elemento mas pequenio de la Matriz");
		printf("\n6...Buscar el elemento mas grande de la Matriz");
		printf("\n7...Buscar un elemento x de la Matriz");
		printf("\n8...Sumar la diagonal principal");
		printf("\n9...Sumar la diagonal inversa");
		printf("\n10...Sumar el triangulo superior");
		printf("\n11...Sumar el triagulo inferior");
		printf("\n12...Multiplicar dos matrices");
		printf("\n13...Salir\n");
		scanf("%i",&op);
		switch(op){//llenar la matriz manual
			case 1:
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						printf("Elemento [%i][%i]: ",i+1,j+1);
						scanf("%i",&mat[i][j]);
					}
				}
				printf("\nMatriz llena\n");
				system("pause");//hace una pausa para ver resultados
				break;
			case 2: //llenar la matriz aleatoria
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						mat[i][j]=rand()%10;
					}
				}
				printf("\nMatriz llena\n");
				system("pause");
				break;
			case 3://Mostrar matriz
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						printf("[%i]",mat[i][j]);
					}
					printf("\n");
				}
				system("pause");
				break;
			case 4:
				suma=0;
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						suma+=mat[i][j];//suma=suma
					}
				}
				printf("La suma de los valores de la matriz es:%i\n",suma);
				system("pause");
				break;
			case 5:
				men=mat[0][0];
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						if(mat[i][j]<men){
							men=mat[i][j];
						}
					}
				}
					printf("El numero menor de la matriz es:%i\n",men);
					system("pause");
					break;					
			case 6:
				may=mat[0][0];
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						if(mat[i][j]>may){
							may=mat[i][j];
						}
					}
				}
					printf("El numero mayor de la matriz es:%i\n",may);
					system("pause");
					break;	
			case 7:	//que quiere buscar y donde
				printf("Ingrese el numero a buscar:");
				scanf("%i",&b);
				band=1;
				for(i=0;i<fil;i++){
					for(j=0;j<col;j++){
						if(mat[i][j]==b){
							printf("El valor %i ha sido encontrado en la posicion (%i,%i)\n",b,i,j);
							band=0;
						}
						}
					}
				if(band==1){
					printf("El valor no se encuentra en la matriz\n");
				}
				system("pause");
				break;
			case 8:
				for(i=0;i<col;i++){
					sumd=sumd+mat[i][i];	
				}
				printf("La suma de la diagonal principal es igual a: %i\n",sumd);
				system("pause");
				break;
			case 9:
				x=fil-1;
				for(i=0;i<fil;i++){
					sumdi=sumdi+mat[i][x];
					x--;
				}
				printf("La suma de la diagonal inversa es igual a:%i\n",sumdi);
				system("pause");
				break;
			case 10:
				fil=fil-1;
				j=1;
				for(i=0;i<fil;i++){
					for(j;j<fil;j++){
						sumt=sumt+mat[i][j];
					}
					j=j+1;
				}
				printf("La suma del triangulo superior es igual a:%i\n",sumt);
				system("pause");
				break;
			case 11:
				for(i=1;i<fil;i++){
					for(j=0;j<i;j++){
						sumt=sumt+mat[i][j];
					}
				}
				printf("La suma del triangulo inferior es igual a:%i\n",sumt);
				system("pause");				
				break;
			case 12:
				break;	
			default:
				printf("Seleccion invalida!!");
				break;
				
		}
		}while(op!=13);
}

