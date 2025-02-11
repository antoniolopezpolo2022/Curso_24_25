#include<stdio.h>
#define NPRODUC 3
//FICHEROS BINARIOS

int main(){
	struct Producto{
		int cod;
		char nombre[10];
		float precio;
	};
	struct Producto misProductos[NPRODUC];
	int cont;
	for(cont=0;cont<NPRODUC;cont++){
		printf("\ncodigo %d: ",cont+1);
		scanf("%d",&misProductos[cont].cod);
		printf("\nnombre producto %d: ",cont+1);
		scanf("%s",misProductos[cont].nombre);
		printf("\nprecio %d: ",cont+1);
		scanf("%f",&misProductos[cont].precio);
	}
	printf("\n CONTENIDO DE LA ESTRUCTURA: ");
	for(cont=0;cont<NPRODUC;cont++){
		printf("\n%d\t%s\t%.2f",misProductos[cont].cod,misProductos[cont].nombre,misProductos[cont].precio);
	
	}	
	FILE *fichero;
	fichero=fopen("misproductos.mer","wb");
	fwrite(misProductos,sizeof(struct Producto)*NPRODUC,1,fichero);
	//fwrite(origen, tamano, 1,destino))
	fclose(fichero);
	
	
	return(0);
}
