#include <locale.h> //setlocale
#include <stdio.h> //printf, scanf
#include <stdlib.h> //calloc, exit
#include <string.h> //strlen

//Estructura para los contactos:
typedef struct producto
{
	int valor;
	unsigned char nombreProducto[30];
	unsigned char precioProdu[30];
	unsigned char hayProdu[30];
	float precio;
	unsigned int hay;
	struct producto *sig;

}Producto;

//Prototipos de funciones a utilizar:
Producto* crearProducto(int num);
Producto* ingresarProducto(Producto *inicio,int num);
void leerProducto(Producto *inicio, int num);
void imprimirProductos(Producto *inicio,int num);
Producto* liberaMemoria(Producto *inicio);
Producto* eliminarProducto(Producto *inicio, int indice);
int obtenerProducto(Producto *inicio, int indice);
void grabar_archivo(FILE *archivo, Producto *inicio, int num);
void cargar_archivo(FILE *archivo, Producto *inicio);
int contar_renglones(FILE *archivo);
//Producto* Push(Producto *inicio, int v);
//int Pop(Producto *inicio);

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"Spanish_Mexico");

	FILE *archivo=NULL;
	Producto *lista=NULL;
	int num=0,i=0, opcion=0,indice=0,obtener;


	do{
		
		printf("\nOpciones de la Tienda: \n\n");
		printf("1. Departamento de electronica. \n");
		printf("2. Departamento comida. \n");
		printf("3. Departamento ropa. \n");
		printf("4. Departamento muebles. \n");
		printf("5. Departamento deportes. \n");
		printf("6. Salir del programa\n\n");

		printf("Aque departamento decia ir: ");
		scanf("%d",&opcion);
		
		switch(opcion)
		{
			case 1:
            		printf("\nIngrese el numero de productos: ");
					scanf("%d",&num);
					lista=crearProducto(num);
					lista=ingresarProducto(lista,num);				
					leerProducto(lista,num);

					do{

					printf("\nIngrese una opcion: \n\n");
					printf("1. Desea mostrar la lista de productos: \n");
					printf("2. Desea eliminar algun producto: \n");
					printf("3. Desea modificar algun producto: \n");
					printf("4. Desea importar productos de un archivo de texto: \n");
					printf("5. Desea exportar productos a un archivo de  texto: \n");
					printf("6. Desea Regresar: \n\n");

					opcion=0;
					printf("Su opcion es: ");
					scanf("%d",&opcion);

					switch(opcion)
						{
						case 1:
								
								imprimirProductos(lista,num);
								break;

						case 2: 
								printf("\nIngrese el indice del producto a eliminar: \n");
								scanf("%d",&indice);
								lista=eliminarProducto(lista,indice);
								imprimirProductos(lista,num);
								break;

						case 3: 
								indice=0;
								printf("\nIngrese el indice del producto a modificar: \n");
								scanf("%d",&indice);
								indice=obtenerProducto(lista,indice);
								break;

						case 4:
								cargar_archivo(archivo,lista);
								break;

					    case 5:
					     		grabar_archivo(archivo,lista,num);
					     		break;

					    case 6:
					     		printf("\n Menu anterior: \n");
					            break;

						default:
            			printf("opcion invalida\n");
            			break;


						}

					}while(opcion!=4);				
										
			        break;
      		case 2:
      				printf("Ingrese el numero de productos\n");
					scanf("%d",&num);
					lista=crearProducto(num);
					lista=ingresarProducto(lista,num);				
					leerProducto(lista,num);
					

					do{

					printf("\nIngrese una opcion: \n\n");
					printf("1. Desea mostrar la lista de productos: \n");
					printf("2. Desea eliminar algun producto: \n");
					printf("3. Desea modificar algun producto: \n");
					printf("4. Desea importar productos de un archivo de texto: \n");
					printf("5. Desea exportar productos a un archivo de  texto: \n");
					printf("6. Desea Regresar: \n\n");

					opcion=0;
					printf("Su opcion es: ");
					scanf("%d",&opcion);

					switch(opcion)
						{
						case 1:
								grabar_archivo(archivo,lista,num);
								imprimirProductos(lista,num);
								break;

						case 2: 
								printf("\nIngrese el indice del producto a eliminar: \n");
								scanf("%d",&indice);
								lista=eliminarProducto(lista,indice);
								imprimirProductos(lista,num);
								break;

						case 3: 
								indice=0;
								printf("\nIngrese el indice del producto a modificar: \n");
								scanf("%d",&indice);
								indice=obtenerProducto(lista,indice);
								break;

						case 4:
								cargar_archivo(archivo,lista);
								break;

					    case 5:
					     		grabar_archivo(archivo,lista,num);
					     		break;

					    case 6:
					     		printf("\n Menu anterior: \n");
					            break;

						default:
            			printf("opcion invalida\n");
            			break;


						}

					}while(opcion!=4);				
										
			        break;					
      		case 3:
            		printf("Ingrese el numero de productos\n");
					scanf("%d",&num);
					lista=crearProducto(num);
					lista=ingresarProducto(lista,num);				
					leerProducto(lista,num);
					

					do{

					printf("\nIngrese una opcion: \n\n");
					printf("1. Desea mostrar la lista de productos: \n");
					printf("2. Desea eliminar algun producto: \n");
					printf("3. Desea modificar algun producto: \n");
					printf("4. Desea importar productos de un archivo de texto: \n");
					printf("5. Desea exportar productos a un archivo de  texto: \n");
					printf("6. Desea Regresar: \n\n");

					opcion=0;
					printf("Su opcion es: ");
					scanf("%d",&opcion);

					switch(opcion)
						{
						case 1:
								grabar_archivo(archivo,lista,num);
								imprimirProductos(lista,num);
								break;

						case 2: 
								printf("\nIngrese el indice del producto a eliminar: \n");
								scanf("%d",&indice);
								lista=eliminarProducto(lista,indice);
								imprimirProductos(lista,num);
								break;

						case 3: 
								indice=0;
								printf("\nIngrese el indice del producto a modificar: \n");
								scanf("%d",&indice);
								indice=obtenerProducto(lista,indice);
								break;

						case 4:
								cargar_archivo(archivo,lista);
								break;

					    case 5:
					     		grabar_archivo(archivo,lista,num);
					     		break;

					    case 6:
					     		printf("\n Menu anterior: \n");
					            break;
						default:
            			printf("opcion invalida\n");
            			break;


						}

					}while(opcion!=4);				
										
			        break;
            case 4:
            		printf("Ingrese el numero de productos\n");
					scanf("%d",&num);
					lista=crearProducto(num);
					lista=ingresarProducto(lista,num);				
					leerProducto(lista,num);
					

					do{

					printf("\nIngrese una opcion: \n\n");
					printf("1. Desea mostrar la lista de productos: \n");
					printf("2. Desea eliminar algun producto: \n");
					printf("3. Desea modificar algun producto: \n");
					printf("4. Desea importar productos de un archivo de texto: \n");
					printf("5. Desea exportar productos a un archivo de  texto: \n");
					printf("6. Desea Regresar: \n\n");

					opcion=0;
					printf("Su opcion es: ");
					scanf("%d",&opcion);

					switch(opcion)
						{
						case 1:
								grabar_archivo(archivo,lista,num);
								imprimirProductos(lista,num);
								break;

						case 2: 
								printf("\nIngrese el indice del producto a eliminar: \n");
								scanf("%d",&indice);
								lista=eliminarProducto(lista,indice);
								imprimirProductos(lista,num);
								break;

						case 3: 
								indice=0;
								printf("\nIngrese el indice del producto a modificar: \n");
								scanf("%d",&indice);
								indice=obtenerProducto(lista,indice);
								break;

						case 4:
								cargar_archivo(archivo,lista);
								break;

					    case 5:
					     		grabar_archivo(archivo,lista,num);
					     		break;

					    case 6:
					     		printf("\n Menu anterior: \n");
					            break;
						default:
            			printf("opcion invalida\n");
            			break;


						}

					}while(opcion!=4);				
										
			        break;					
			case 5: 
					printf("Ingrese el numero de productos\n");
					scanf("%d",&num);
					lista=crearProducto(num);
					lista=ingresarProducto(lista,num);				
					leerProducto(lista,num);
			

					do{

					printf("\nIngrese una opcion: \n\n");
					printf("1. Desea mostrar la lista de productos: \n");
					printf("2. Desea eliminar algun producto: \n");
					printf("3. Desea modificar algun producto: \n");
					printf("4. Desea importar productos de un archivo de texto: \n");
					printf("5. Desea exportar productos a un archivo de  texto: \n");
					printf("6. Desea Regresar: \n\n");

					opcion=0;
					printf("Su opcion es: ");
					scanf("%d",&opcion);

					switch(opcion)
						{
						case 1:
								grabar_archivo(archivo,lista,num);
								imprimirProductos(lista,num);
								break;

						case 2: 
								printf("\nIngrese el indice del producto a eliminar: \n");
								scanf("%d",&indice);
								lista=eliminarProducto(lista,indice);
								imprimirProductos(lista,num);
								break;

						case 3: 
								indice=0;
								printf("\nIngrese el indice del producto a modificar: \n");
								scanf("%d",&indice);
								indice=obtenerProducto(lista,indice);
								break;

						case 4:
								cargar_archivo(archivo,lista);
								break;

					    case 5:
					     		grabar_archivo(archivo,lista,num);
					     		break;

					    case 6:
					     		printf("\n Menu anterior: \n");
					            break;
						default:
            			printf("opcion invalida\n");
            			break;


						}

					}while(opcion!=4);				
										
			        break;
			case 6: 
					printf("Fin del programa...\n");
					break;
			default:
            printf("opcion invalida\n");
            break;
		}

	}while(opcion!=6);

	lista=liberaMemoria(lista);

	return 0;

}

Producto* crearProducto(int num)
{
	Producto *lista = NULL;
	
	lista = (Producto *) calloc(num, sizeof(Producto));
	
	//Termina el programa en caso de no poder reservar la memoria.
	if(lista == NULL)
	{
		printf("\n\t>>  No se pudo reservar la memoria <<\n\tIntente ejecutar el programa más tarde.");
		fflush(stdin);
		getchar();
		exit(0);
	}
	
	return lista;
}

Producto* ingresarProducto(Producto *inicio,int num){
	Producto *produActual= inicio;
	
	int i=0;

	for (i = 0; i < num; ++i)
	{
		
	if (inicio== NULL)
	{
		produActual=malloc(sizeof(Producto));
		//produActual->valor=dato;
		produActual->sig=NULL;
		inicio=produActual;
	}else{
		while(produActual->sig != NULL){
			produActual=produActual->sig;
		}
		Producto *produNuevo= malloc(sizeof(Producto));
		//produNuevo->valor=dato;
		produNuevo->sig=NULL;
		produActual->sig=produNuevo;
	     }
    }
	return inicio;
}

void leerProducto(Producto *inicio, int num)
{
	int i; //Recorre el arreglo de estructuras.
	
	for(i=0; i<num; i++)
	{
		printf("\n");
		printf(">> Ingresa el nombre del producto %d: ",i+1);
		scanf(" %[^\n]",(inicio+i)->nombreProducto);
		printf(">> Ingresa el precio de producto %d: ",i+1);
		scanf(" %f",&(inicio+i)->precio);
		printf(">> Ingresa cuantos productos hay %d: ",i+1);
		scanf(" %d",&(inicio+i)->hay);
		/*printf(">> Ingresa cuantos se han vendido %d: ",i+1);
		scanf(" %[^\n]",(c+i)->vendidos);*/
	}
}

void imprimirProductos(Producto *inicio,int num){

	int i=0;
	printf("\nLos productos son: \n");
	
	for (i = 0; i < num; ++i)
	{
		printf("\nProducto %d:\n",i+1);
		printf("\nNombre %d: %s",i+1,(inicio+i)->nombreProducto);
		printf("\nPrecio %d: %.2f",i+1,(inicio+i)->precio);
		printf("\nInventario %d: %d",i+1,(inicio+i)->hay);
	}
	printf("\n---------------\n");
}

Producto* liberaMemoria(Producto *inicio){
	if(inicio==NULL){
		return NULL;
	}
	Producto *produActual = inicio;
	Producto *produSig = inicio->sig;
	while(produSig != NULL){
		free(produActual);
		produActual = produSig;
	produSig = produActual->sig;
	}
	free(produActual);
	return NULL;
}

Producto* eliminarProducto(Producto *inicio, int indice){
	Producto *produActual = inicio;

	if(inicio==NULL){
		return NULL;
	}
	else if(indice == 0){
		produActual = inicio->sig;
		free(inicio);
		return produActual;
	}
	else{
		Producto *anterior = inicio;
		int i = 0;
		while(i<indice && produActual->sig != NULL){
			anterior = produActual;
			produActual = produActual->sig;
			i++;
		}
		anterior->sig = produActual->sig;
		free(produActual);
		if(i==0){
			return NULL;
		}
	}
	return inicio;
}

int obtenerProducto(Producto *inicio, int indice){
	Producto *produActual = inicio;
	int i = 0;
	if(inicio==NULL){
		return 0;
	}
	while(i<indice && produActual->sig != NULL){
		produActual = produActual->sig;
		i++;
	}
	return produActual->valor;
}

void grabar_archivo(FILE *archivo, Producto *inicio, int num)
{
	int i;
	unsigned char nombre[25]= {'\0'};
	
	printf("\n\tEscribe el nombre del archivo en el cual deseas guardar\n\tlos productos con su extensión: \n\n\t\t>> Nombre: ");
	scanf(" %[^\n]",nombre);
	archivo = fopen(nombre,"w");
	
	if(archivo == NULL)
	{
		printf("\n\n\tError al abrir o crear el archivo");
		fflush(stdin);
		exit(0);
	}
	else
	{	
			fprintf(archivo,"\nProductos del departamento:\n\nNombre\t\tPrecio\t\tInventario\n\n");

		for(i=0; i<num; i++)
		{
			fprintf(archivo,"%s\t\t%.2f\t%.2d\n",(inicio+i)->nombreProducto,(inicio+i)->precio,(inicio+i)->hay);
		}
		fclose(archivo);
	}
}


void cargar_archivo(FILE *archivo, Producto *inicio)
{
	int num;
	unsigned char nombre[30];
	int i; 
	
	printf("\n\n\tIngresa el nombre del archivo a importar\n\n\t\t>> Nombre: ");
	scanf(" %[^\n]",nombre);
	archivo = fopen(nombre,"r");
	
	if(archivo == NULL)
	{
		printf("\n\t>>  No se pudo abrir el archivo o no existe  <<\n\t  Intente ejecutar el programa de nuevo.\n\n");
		fflush(stdin);
		exit(0);
	}
	else
	{
		num = contar_renglones(archivo);
		inicio = crearProducto(num);
		for(i=0; i<num; i++)
			fscanf(archivo,"%s\t%s\t%s",(inicio+i)->nombreProducto,(inicio+i)->precioProdu,(inicio+i)->hayProdu);

		imprimirProductos(inicio,num);
		fclose(archivo);	
	}
}


int contar_renglones(FILE *archivo)
{
	int num = 0;
	char c;
	
	while(feof(archivo) == 0)
	{
		c = fgetc(archivo);
		if(c == '\n')
			++num;
	}
	rewind(archivo);
		
	return num;
}