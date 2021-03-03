/* Universidad de la Frontera
 * Departamento de Ingeniería Eléctrica
 * 
 * ICC-202  PROGRAMACION DE COMPUTADORES
 * 
 * Tarea 2
 * 
 * Autores: Dario Beñaldo. (d.benaldo02@ufromail.cl)
 *          Felipe Alvarez. (f.alvares11@ufromail.cl)
 *          Valentina Caceres. (v.caceres05@ufromail.cl)
 * 
 * Fecha: 03-03-2021
 * 
 * En el ámbito de la economía de la red mundial de compra a través de internet se ve reflejado 
 * la mala experiencia que tiene un cliente a la hora de adquirir un o varios productos es por 
 * esto que hemos creado un programa para que así le facilite la compra clara y segura al cliente
 * y a l@s administradores ver el inventario y sus ganancias .
 * Como primer lugar tenemos los tipos de datos con sus variables (int y char),tenemos los
 * valores de los productos y del despacho ,a profundidad vemos lo medios de acceso al programa 
 * por printf, while, if , else (cuenta y clave o la creación de una), luego se separan las entradas. 
 * El administrador puede rellenar el inventario y también agregar nuevos productos con un tope,
 * el cliente puede ver y seleccionar que productos desea comprar y la cantidad limite, tambien 
 * si desea un despacho a domicilio, si lo desea se le cobra un extra y si no solo se le cobra(n) 
 * el(los) productos, se realiza el pago a través de tarjeta y por último entrega de boleta, 
 * cerrando así el programa
 * 
 * */
 
#include <stdio.h>
#include <string.h>
#include "tarea3.h"

int main(){
	int crear_cuenta_administrador;
	int crear_cuenta_cliente;
	int despacho;
	int valor_despacho_domicilio;
	int suma_compras;
	int acceso;
	
	suma_compras = 0;
	
	valor_despacho_domicilio = 50;

         Bienvenida ();
	     acceso = Acceso ();
		 //Ingreso como administrador
		 if(acceso == 2){
	     crear_cuenta_administrador = ingreso_de_los_admnistradores();
	     if(crear_cuenta_administrador==1){
	     ingreso_de_usuario_y_claves_de_los_administradores();
		 }else{
			crear_cuenta_para_administrador();
			 }
		  	cantidad_leds ();
            agregar_productos_al_inventario();
		    rellenar_inventario();	
	//Ingreso como cliente
	} if (acceso==1){
	     crear_cuenta_cliente = ingreso_como_cliente();
	   if(crear_cuenta_cliente==1){
         ingreso_de_cuenta_de_los_clientes();
		 }else {
			  crear_cuenta_para_clientes();
			 }
		     productos_disponibles_y_valor_de_las_led();
		printf("\n");
	//que seleccione los producctos
    suma_compras = carrito_de_compra();
	if(suma_compras==0){
		printf("No se realiza ninguna compra.\n");
		}else{
   printf("\n");
	
	 printf("El valor del despacho a domicilio es :%d CLP\n", valor_despacho_domicilio);
     printf("Si desea despacho a domicilio ingrese 1, en el caso de que no desee despacho a domicilio ingrese 0:\n");
     scanf("%d", &despacho);
     
	while(despacho!=0 && despacho!=1){
		printf("Error, numero ingresado incorrecto.\nIngrese 1 si desea despacho a domicilio, o 0 en el caso de que no quiera:\n");
		scanf("%d", &despacho);
		}
		if(despacho==1){
			datos_personales_para_el_despacho_a_domicilio();
			suma_compras = suma_compras + valor_despacho_domicilio;
			printf("\n");
			printf("El valor total de la compra es :%d CLP\n", suma_compras);
			printf("\n");
			
			
  			 realizar_pago_de_las_compras_realizadas();  
  			 boleta_de_la_compra();
  			
			 printf("Monto total de la compra:$%d CLP\n", suma_compras);
		 
			}else{
				printf("\n");
			printf("El valor total de la compra es :%d CLP\n", suma_compras);
			printf("\n");
			
			 realizar_pago_de_las_compras_realizadas();
			 boleta_de_la_compra();
			 printf("Monto total de la compra:$%d CLP\n", suma_compras);
				}
			}
		}
		
	return 0;
	}

