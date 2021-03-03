#include <stdio.h>
#include <string.h>
#include "tarea3.h"


void Bienvenida (){
    
    printf("Bienvenido.\n");
    printf("Si desea ingresar como cliente el número sera 1.\n");
    printf("Si desea ingresar como administrador el número sera 2.\n");
    printf("Porfavor ingrese el número con la cual desea ingresar:\n");
	
}
int Acceso (){

    int acceso;
    scanf("%d", &acceso);
	
	while(acceso !=1 && acceso!=2){
		printf("Error, el número que ingreso no es correcto\n");
		printf("Porfavor ingrese nuevamente el número:\n");
	    scanf("%d", &acceso);
		}
		return acceso;
}
int desea_rellenar_inventario(){
	int rellenar;

            printf("¿Desea rellenar el inventario?\n");
	        printf("Si desea rellenar el inventario ingrese 1, en el caso de que no quiera ingrese 0:\n");
	        scanf("%d", &rellenar);
	        
	       while(rellenar!=1 && rellenar!=0){
			   printf("Error, numero ingresado no valido.\nIngrese 1 si desea rellenar el inventario, en el caso de que no quiera hacerlo ingrese 0:\n");
			   scanf("%d", &rellenar);
			  }
			  return rellenar;
}
			   			  			   
void cantidad_leds (){ 
	      int led1;
	      int led5;
	      int led10;
	      int led15;
	      int led20;
	      led1 = 2;
	      led5 = 7;
	      led10 = 4;
	      led15 = 9;
	      led20 = 1;
	     
          printf("La cantidad de led disponibles son las siguientes:\n");
		  printf("La cantidad de led de 1 metro es %d unidades.\n", led1);
		  printf("La cantidad de led de 5 metros es %d unidades.\n", led5);
		  printf("La cantidad de led de 10 metros es %d unidades.\n", led10);
		  printf("La cantidad de led de 15 metros es %d unidades.\n", led15);
	  	  printf("La cantidad de led de 20 metros es %d unidades.\n", led20);

}

int led1_disponibles(){
 int led1;
 led1 = 2; 
 return led1;
}

int led5_disponibles(){
 int led5;
 led5 = 7; 
 return led5;
}

int led10_disponibles(){
 int led10;
 led10 = 4; 
 return led10;
}

int led15_disponibles(){
 int led15;
 led15 = 9; 
 return led15;
}

int led20_disponibles(){
 int led20;
 led20 = 1; 
 return led20;
}

int comprar_led_de_un_metro(){
   int led1;
   int valor_led1;
   int suma_compras;
   int cantidad_led1;
   
    suma_compras = 0;
    valor_led1 = 10;
  	led1 = led1_disponibles();
    printf("Puede comprar hasta %d leds de 1 metro.\n", led1);
	printf("Si no quiere comprar leds de 1 metro ingrese un 0.\n");
	printf("Si desea comprar leds de 1 metro ingrese la cantidad que desea comprar:\n");
	scanf("%d", &cantidad_led1);
	while(cantidad_led1>led1){
		printf("Error, excede la cantidad de leds disponibles.\nIngrese nuevamente la cantidad de leds que desea comprar:\n");
		scanf("%d", &cantidad_led1);
		}
	       for(int i=0; i<cantidad_led1; i++){
			    	if(cantidad_led1==0){
				    	break;
				    	}
		suma_compras = suma_compras + valor_led1;
	
		}
	
return suma_compras;
}



int comprar_led_de_cinco_metro(){
   int led5;
   int valor_led5;
   int suma_compras;
   int cantidad_led5;
   
   suma_compras = 0;
   valor_led5 = 50;
   led5 = led5_disponibles();
   
   
  printf("Puede comprar hasta %d leds de 5 metro.\n", led5);
	printf("Si no quiere comprar leds de 5 metro ingrese un 0.\n");
	printf("Si desea comprar leds de 5 metro ingrese la cantidad que desea comprar:\n");
	scanf("%d", &cantidad_led5);
	while(cantidad_led5>led5){
		printf("Error, excede la cantidad de leds disponibles.\nIngrese nuevamente la cantidad de leds que desea comprar:\n");
		scanf("%d", &cantidad_led5);
		}
	for(int i=0; i<cantidad_led5; i++){
				if(cantidad_led5==0){
					break;
					}
		suma_compras = suma_compras + valor_led5;
	
		}
return suma_compras;
}

int comprar_led_de_dies_metro(){
   int led10;
   int valor_led10;
   int suma_compras;
   int cantidad_led10;
   
   suma_compras = 0;
   valor_led10 = 100;
   led10 = led10_disponibles();
   
   
  printf("Puede comprar hasta %d leds de 10 metro.\n", led10);
	printf("Si no quiere comprar leds de 10 metro ingrese un 0.\n");
	printf("Si desea comprar leds de 10 metro ingrese la cantidad que desea comprar:\n");
	scanf("%d", &cantidad_led10);
	while(cantidad_led10>led10){
		printf("Error, excede la cantidad de leds disponibles.\nIngrese nuevamente la cantidad de leds que desea comprar:\n");
		scanf("%d", &cantidad_led10);
		}
	for(int i=0; i<cantidad_led10; i++){
				if(cantidad_led10==0){
					break;
					}
		suma_compras = suma_compras + valor_led10;
	
		}
return suma_compras;
}

int comprar_led_de_quince_metro(){
   int led15;
   int valor_led15;
   int suma_compras;
   int cantidad_led15;
   
   suma_compras = 0;
   valor_led15 = 150;
   led15 = led15_disponibles();
   
   
  printf("Puede comprar hasta %d leds de 15 metro.\n", led15);
	printf("Si no quiere comprar leds de 15 metro ingrese un 0.\n");
	printf("Si desea comprar leds de 15 metro ingrese la cantidad que desea comprar:\n");
	scanf("%d", &cantidad_led15);
	while(cantidad_led15>led15){
		printf("Error, excede la cantidad de leds disponibles.\nIngrese nuevamente la cantidad de leds que desea comprar:\n");
		scanf("%d", &cantidad_led15);
		}
	for(int i=0; i<cantidad_led15; i++){
				if(cantidad_led15==0){
					break;
					}
		suma_compras = suma_compras + valor_led15;
	
		}
return suma_compras;
}

int comprar_led_de_veinte_metro(){
   int led20;
   int valor_led20;
   int suma_compras;
   int cantidad_led20;
   
   suma_compras = 0;
   valor_led20 = 200;
   led20 = led20_disponibles();
   
   
  printf("Puede comprar hasta %d leds de 20 metro.\n", led20);
	printf("Si no quiere comprar leds de 20 metro ingrese un 0.\n");
	printf("Si desea comprar leds de 20 metro ingrese la cantidad que desea comprar:\n");
	scanf("%d", &cantidad_led20);
	while(cantidad_led20>led20){
		printf("Error, excede la cantidad de leds disponibles.\nIngrese nuevamente la cantidad de leds que desea comprar:\n");
		scanf("%d", &cantidad_led20);
		}
	for(int i=0; i<cantidad_led20; i++){
				if(cantidad_led20==0){
					break;
					}
		suma_compras = suma_compras + valor_led20;
	
		}
return suma_compras;
}

int carrito_de_compra(){
	int suma_compras;
	suma_compras = comprar_led_de_un_metro();
		printf("Monto acumulado es de %d CLP\n", suma_compras);

	suma_compras = suma_compras + comprar_led_de_cinco_metro();
		printf("Monto acumulado es de %d CLP\n", suma_compras);
		
	suma_compras = suma_compras + comprar_led_de_dies_metro();
	printf("Monto acumulado es de %d CLP\n", suma_compras);

	suma_compras = suma_compras + comprar_led_de_quince_metro();
	printf("Monto acumulado es de %d CLP\n", suma_compras);

	suma_compras = suma_compras + comprar_led_de_veinte_metro();
	printf("Monto acumulado es de %d CLP\n", suma_compras);
return suma_compras;
}

void rellenar_inventario(){
	    int led1;
	    int led5;
	    int led10;
	    int led15;
	    int led20;
	    int num_de_led_para_rellenar;
	    led1 = led1_disponibles();
	    led5 = led5_disponibles();
	    led10 = led10_disponibles();
	    led15 = led15_disponibles();
	    led20 = led20_disponibles();
	    int rellenar;
	     rellenar = desea_rellenar_inventario();
	      if(rellenar==1){
	 		  printf("Ingrese la  cantidad de led con la cual quiere rellenar el inventario:\n");
	          scanf("%d", &num_de_led_para_rellenar);
				while(led1<num_de_led_para_rellenar){
					led1= led1 +1;
					}
					while(led5<num_de_led_para_rellenar){
						led5= led5 +1;
						}
						while(led10<num_de_led_para_rellenar){
							led10=led10+1;
							}
							while(led15<num_de_led_para_rellenar){
								led15=led15+1;
								}
								while(led20<num_de_led_para_rellenar){
									led20=led20+1;
									}
							
									}
									printf("La cantidad de led de 1 metro es %d unidades.\n", led1);
									printf("La cantidad de led de 5 metros es %d unidades.\n", led5);
									printf("La cantidad de led de 10 metros es %d unidades.\n", led10);
									printf("La cantidad de led de 15 metros es %d unidades.\n", led15);
									printf("La cantidad de led de 20 metros es %d unidades.\n", led20);

							}
		
		
int ingreso_de_los_admnistradores(){							
         int crear_cuenta_administrador;
         printf("Si tiene una cuenta ya registrada ingrese 1 en el caso de que no tenga y quiera crear una ingrese 0.\n");
	     scanf("%d", &crear_cuenta_administrador);
	     while(crear_cuenta_administrador!=1 && crear_cuenta_administrador!=0){
			 printf("Error, numero ingresado incorrecto.\nIngrese nuevamente 1 en el caso de que tenga creada una cuenta o 0 en el caso de que no tenga creada una cuenta.\n");
			 scanf("%d", &crear_cuenta_administrador);
			 }
return crear_cuenta_administrador;	     							
}

        
void ingreso_de_usuario_y_claves_de_los_administradores(){        
         char administradores[10]; 
         int claves_administrador;
         
         printf("Ingrese su usuario.\n");
	     scanf("%s", administradores);
		   
		 while ( strcmp(administradores,"valentina")!=0 && strcmp(administradores,"dario")!=0 && strcmp(administradores,"felipe")!=0 ){
		 printf("Error, usuario ingresado es incorrecto.\nIngrese nuevamente su usuario:\n");
		 scanf("%s", administradores);
          	 }
         printf("Ingrese su clave:\n");
		 scanf("%d", &claves_administrador);
	
		 while( claves_administrador!=1234 && claves_administrador!=5678 && claves_administrador!=2345 ){
			 printf("Error, clave incorrecta.\nIngrese nuevamente su clave:\n");
			 scanf("%d", &claves_administrador);
			 } 
}
void crear_cuenta_para_administrador(){
             int clave_crear_cuenta;
             char administradores[10];
             int clave_administradores;

             printf("Ingrese clave para poder crear una cuenta.\n");
			 scanf("%d", &clave_crear_cuenta);
			 
			 while(clave_crear_cuenta!=1234){
				 printf("Error, clave ingresada incorrecta.\nIngrese nuevamente la clave:\n");
				 scanf("%d", &clave_crear_cuenta);
				 }
				 printf("Ingrese nombre de usuario:\n");
				 scanf("%s", administradores);
				 printf("Ingrese una clave de 4 numeros:\n");
				 scanf("%d", &clave_administradores);

}

void agregar_productos_al_inventario(){ 
          int agregar_productos;
          int cantidad_productos_agregar;
          char productos_nuevos[20]; 
           
          printf("Si desea agregar algun producto ingrese 1, si no desea agregar productos ingrese 0:\n");
          scanf("%d", &agregar_productos);
          while(agregar_productos!=0 && agregar_productos!=1){
			  printf("Error, si desea agregar algun producto ingrese 1, si no desea agregar productos ingrese 0:\n");
			  scanf("%d", &agregar_productos);
			  }
          if(agregar_productos==1){
			  printf("Ingrese la cantidad de productos que desea agregar:\n");
			  scanf("%d", &cantidad_productos_agregar);
			  for(int i=0; i<cantidad_productos_agregar; i++){
				  printf("Ingrese el producto %d que desea agregar:\n", i+1);
				  scanf("%s", productos_nuevos);
				  }
			  }
}

 int ingreso_como_cliente(){
         int crear_cuenta_cliente;
         
         printf("Si tiene una cuenta ya registrada ingrese 1 en el caso de que no tenga y quiera crear una ingrese 0.\n");
	     scanf("%d", &crear_cuenta_cliente);
	     while(crear_cuenta_cliente!=1 && crear_cuenta_cliente!=0){
			 printf("Error, numero ingresado incorrecto.\nIngrese nuevamente 1 en el caso de que tenga creada una cuenta o 0 en el caso de que no tenga creada una cuenta.\n");
			 scanf("%d", &crear_cuenta_cliente);
			 }
			 
return crear_cuenta_cliente;

}

void ingreso_de_cuenta_de_los_clientes(){
         char clientes[20];
         int claves_clientes;
         
	     printf("Ingrese su usuario.\n");
	     scanf("%s", clientes);
		   
		 while ( strcmp(clientes,"valentina")!=0 && strcmp(clientes,"dario")!=0 && strcmp(clientes,"felipe")!=0 ){
		 printf("Error, usuario ingresado es incorrecto.\nIngrese nuevamente su usuario:\n");
		 scanf("%s", clientes);
          	 }
         printf("Ingrese su clave:\n");
		 scanf("%d", &claves_clientes);
	
		 while( claves_clientes!=1234 && claves_clientes!=5678 && claves_clientes!=2345 ){
			 printf("Error, clave incorrecta.\nIngrese nuevamente su clave:\n");
			 scanf("%d", &claves_clientes);
			 } 
		 }


void crear_cuenta_para_clientes(){
                 int clave_cliente;
                 char clientes[20];
                 
                 printf("Ingrese un nombre de usuario:\n");
				 scanf("%s", clientes);
				 printf("Ingrese una clave de 4 numeros:\n");
				 scanf("%d", &clave_cliente);
				 
			 }
			 
			
void productos_disponibles_y_valor_de_las_led(){			 
          int led1;
          int led5;
          int led10;
          int led15;
          int led20;
          int valor_led1;
          int valor_led5;
          int valor_led10;
          int valor_led15;
          int valor_led20;
          valor_led1 = 10;
          valor_led5 = 50;
          valor_led10 =100;
          valor_led15 = 150;
          valor_led20 = 200;
          led1 = led1_disponibles();
          led5 = led5_disponibles();
          led10 = led10_disponibles();
          led15 = led15_disponibles();
          led20 = led20_disponibles();
	      printf("\n");
	   	  printf("Los productos disponibles son los siguientes:\n");
		  printf("%d unidades leds de 1 metro \n", led1);
		  printf("%d unidades leds de 5 metros \n", led5);
		  printf("%d unidades leds de 10 metros \n", led10);
		  printf("%d unidades leds de 15 metros \n", led15);
	  	  printf("%d unidades leds de 20 metros \n", led20);
	  	  printf("\n");
	  	  printf("Los valores de los productos son los siguientes:\n");
	  	  printf("Los leds de 1 metro valen :%d CLP\n", valor_led1);	
		  printf("Los leds de 5 metro valen :%d CLP\n", valor_led5);
		  printf("Los leds de 10 metro valen :%d CLP\n", valor_led10);
		  printf("Los leds de 15 metro valen :%d CLP\n", valor_led15);			
		  printf("Los leds de 20 metro valen :%d CLP\n", valor_led20);	

}


void datos_personales_para_el_despacho_a_domicilio(){
            char nombre[20];
            char direccion[50];
            printf("Ingrese su nombre:\n");
			scanf("%s", nombre);
			printf("Ingrese su domicilio:\n");
			scanf("%s", direccion);
}


void realizar_pago_de_las_compras_realizadas(){
            int num_tarjeta;
            int clave_tarjeta;
            
            printf("Ingrese el numero de su tarjeta para realizar el pago:\n");
			scanf("%d", &num_tarjeta);
			 while( num_tarjeta!=1234 && num_tarjeta!=5678 && num_tarjeta!=2345 ){
			 printf("Error, el numero de tarjeta ingresado es incorrecto.\nIngrese nuevamente el numero de su tarjeta:\n");
			 scanf("%d", &num_tarjeta);
			 } 
			printf("Ingrese la clave de su tarjeta para realizar el pago:\n");
			scanf("%d", &clave_tarjeta);
			 while( clave_tarjeta!=1234 && clave_tarjeta!=5678 && clave_tarjeta!=2345 ){
			 printf("Error, la clave ingresada es incorrecta.\nIngrese nuevamente la clave de su tarjeta:\n");
			 scanf("%d", &clave_tarjeta);
			 }
		 }
		 
void boleta_de_la_compra(){		 
             int valor_led1 = 10;
             int valor_led5 = 50;
             int valor_led10 = 100;
             int valor_led15 = 150;
             int valor_led20 = 200;
            
             printf("\n");
			 printf("La compra a sido realizada.\n");
			 printf("\n");
			 printf("Boleta de la compra:\n");
			 printf("Leds de 1 :$%d CLP\n", valor_led1);
			 printf("Leds de 5 :$%d CLP\n", valor_led5);
			 printf("Leds de 10 :$%d CLP\n", valor_led10);
			 printf("Leds de 15 :$%d CLP\n", valor_led15);
			 printf("Leds de 20 :$%d CLP\n", valor_led20);		 
}
