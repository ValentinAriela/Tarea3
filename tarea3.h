void Bienvenida ();
/*
* Nombre de la función: Bienvenida.
* Tipo de función: void.
* Descripción de la función: La función Bienvenida a traves de impresiones
* por pantalla da la bienvenida informa sobre que el numero 1 sera para los 
* clientes y el numero 2 para los administradores y tambien pide por 
* pantalla que ingrese el numero con el cual quiere ingresar.
* Esta funcion sirve para informar el numero con el cual se debe ingresar
* si quiere ingresar como cliente o como administrador.
*/
int Acceso ();
/*
* Nombre de la función: Acceso.
* Tipo de función: int.
* Dato de retorno: “acceso” de tipo int;
* Descripción de la función: La función Acceso guarda el numero ingresado 
* que en la funcion de bienvenida se pide que ingrese, luego con un while 
* verifica que el numero que ingreso sea una de las opciones correctas,
* en el caso de que no sea correcta se volvera a pedir que ingrese el numero
* con el cual quiere ingresar.
* Esta funcion sirve para separar las acciones que puede hacer un administrador
* con las acciones que puede hacer un cliente
*/
int desea_rellenar_inventario ();
/*
* Nombre de la función: desea_rellenar_inventario.
* Tipo de función: int.
* Dato de retorno: “rellenar” de tipo int;
* Descripción de la función: La función desea_rellenar_inventario utilizando 
* printf pregunta si desea rellenar el inventario, y si desea hacerlo que ingrese
* un 1 o en el caso de que no quiera hacerlo ingrese un 0, con un while
* verifica que el numero ingresado sea una de las opciones correctas en el caso
* de que no sea un numero correcto se le volvera a pedir que ingrese el numero.
* Esta funcion sirve para verificar si el administrador quiere rellenar el inventario.
*/
void cantidad_leds ();
/*
* Nombre de la función: cantidad_leds.
* Tipo de función: void.
* Descripción de la función: La función cantidad_leds a traves de printf informa
* sobre la cantidad de led 1 metro, 5 metros, 10 metros, 15 metros, 20 metros, 
* disponibles.
* Esta funcion sirve para informarle a los administradores las cantidades de leds
* disponibles que hay en el inventario.
*/
int led1_disponibles();
/*
* Nombre de la función: led1_disponibles.
* Tipo de función: int.
* Dato de retorno: “led1” de tipo int;
* Descripción de la función: La función led1_disponibles le da un valor
* a la cantidad de led de 1 metros a traves de la variable led1.
* Esta funcion sirve para saber la cantidad de leds disponibles de 1 metros.
*/
int led5_disponibles();
/*
* Nombre de la función: led5_disponibles.
* Tipo de función: int.
* Dato de retorno: “led5” de tipo int;
* Descripción de la función: La función led5_disponibles le da un valor
* a la cantidad de led de 5 metros a traves de la variable led5.
* Esta funcion sirve para saber la cantidad de leds disponibles de 5 metros.
*/
int led10_disponibles();
/*
* Nombre de la función: led10_disponibles.
* Tipo de función: int.
* Dato de retorno: “led10” de tipo int;
* Descripción de la función: La función led10_disponibles le da un valor
* a la cantidad de led de 10 metros a traves de la variable led10.
* Esta funcion sirve para saber la cantidad de leds disponibles de 10 metros.
*/
int led15_disponibles();
/*
* Nombre de la función: led15_disponibles.
* Tipo de función: int.
* Dato de retorno: “led15” de tipo int;
* Descripción de la función: La función led15_disponibles le da un valor
* a la cantidad de led de 15 metros a traves de la variable led15.
* Esta funcion sirve para saber la cantidad de leds disponibles de 15 metros.
*/
int led20_disponibles();
/*
* Nombre de la función: led20_disponibles.
* Tipo de función: int.
* Dato de retorno: “led20” de tipo int;
* Descripción de la función: La función led20_disponibles le da un valor
* a la cantidad de led de 20 metros a traves de la variable led20.
* Esta funcion sirve para saber la cantidad de leds disponibles de 20 metros.
*/
int comprar_led_de_un_metro();
/*
* Nombre de la función: comprar_led_de_un_metro.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función comprar_led_de_un_metros informa por
* pantalla la contidad de led disponibles para que el cliente pueda comprar, luego
* informa por pantalla que si quiere comprar led de 1 metros, ingrese la cantidad 
* que quiere comprar, y si no quiere comprar led de 1 metros ingrese un 0 ese 
* numero se guarda en la variable cantidad_led_1, a traves de un while se verifica
* que no haya ingresado un numero mayor a la cantidad de leds disponibles, y luego
* con un for se van sumando el valor de las leds que quiere comprar a la variable
* suma_compras.
* Esta funcion sirve para dar el valor de la suma de las leds de 1 metros
* que el cliente quiere comprar
*/
int comprar_led_de_cinco_metro();
/*
* Nombre de la función: comprar_led_de_cinco_metro.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función comprar_led_de_cinco_metros informa por
* pantalla la contidad de led disponibles para que el cliente pueda comprar, luego
* informa por pantalla que si quiere comprar led de 5 metros, ingrese la cantidad 
* que quiere comprar, y si no quiere comprar led de 5 metros ingrese un 0 ese 
* numero se guarda en la variable cantidad_led_5, a traves de un while se verifica
* que no haya ingresado un numero mayor a la cantidad de leds disponibles, y luego
* con un for se van sumando el valor de las leds que quiere comprar a la variable
* suma_compras.
* Esta funcion sirve para dar el valor de la suma de las leds de 5 metros
* que el cliente quiere comprar
*/
int comprar_led_de_dies_metro();
/*
* Nombre de la función: comprar_led_de_dies_metro.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función comprar_led_de_dies_metros informa por
* pantalla la contidad de led disponibles para que el cliente pueda comprar, luego
* informa por pantalla que si quiere comprar led de 10 metros, ingrese la cantidad 
* que quiere comprar, y si no quiere comprar led de 10 metros ingrese un 0 ese 
* numero se guarda en la variable cantidad_led_10, a traves de un while se verifica
* que no haya ingresado un numero mayor a la cantidad de leds disponibles, y luego
* con un for se van sumando el valor de las leds que quiere comprar a la variable
* suma_compras.
* Esta funcion sirve para dar el valor de la suma de las leds de 10 metros
* que el cliente quiere comprar
*/
int comprar_led_de_quince_metro();
/*
* Nombre de la función: comprar_led_de_quince_metro.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función comprar_led_de_quince_metros informa por
* pantalla la contidad de led disponibles para que el cliente pueda comprar, luego
* informa por pantalla que si quiere comprar led de 15 metros, ingrese la cantidad que quiere
* comprar, y si no quiere comprar led de 15 metros ingrese un 0 ese numero se 
* guarda en la variable cantidad_led_15, a traves de un while se verifica que no 
* haya ingresado un numero mayor a la cantidad de leds disponibles, y luego con
* un for se van sumando el valor de las leds que quiere comprar a la variable
* suma_compras.
* Esta funcion sirve para dar el valor de la suma de las leds de 15 metros
* que el cliente quiere comprar
*/
int comprar_led_de_veinte_metro();
/*
* Nombre de la función: comprar_led_de_veinte_metro.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función comprar_led_de_veinte_metros informa por
* pantalla la contidad de led disponibles para que el cliente pueda comprar, luego
* informa por pantalla que si quiere comprar led de 20 metros, ingrese la cantidad
* que quiere comprar, y si no quiere comprar led de 20 metros ingrese un 0 ese numero se 
* guarda en la variable cantidad_led_20, a traves de un while se verifica que no 
* haya ingresado un numero mayor a la cantidad de leds disponibles, y luego con
* un for se van sumando el valor de las leds que quiere comprar a la variable
* suma_compras.
* Esta funcion sirve para dar el valor de la suma de las leds de 20 metros
* que el cliente quiere comprar
*/
int carrito_de_compra();
/*
* Nombre de la función: carrito_de_compra.
* Tipo de función: int.
* Dato de retorno: “suma_compras” de tipo int;
* Descripción de la función: La función carrito_de_compra tiene una variable
* a la cual se le da el valor de la funcion comprar_led_de_un_metro, para 
* luego imprimir por pantalla su valor, luego a suma_compras se le suma la funcion
* comprar_led_de_cinco_metros, para luego imprimir por pantalla su valor, luego 
* a suma_compras se le suma la funcion comprar_led_de_dies_metros, para luego 
* imprimir por pantalla su valor, luego a suma_compras se le suma la funcion
* comprar_led_de_quince_metros, para luego imprimir por pantalla su valor, luego
* a suma_compras se le suma la funcion comprar_led_de_veinte_metros, para 
* luego imprimir por pantalla su valor.
* Esta funcion sirve para dar el valor total de la suma de todos los productos
* escogidos para comprar.  
*/
void rellenar_inventario();
/*
* Nombre de la función: rellenar_inventario.
* Tipo de función: void.
* Descripción de la función: La función rellenar_inventario tiene una 
* variable a la cual se le da el valor que retorna otra funcion que es la funcion
* desea_rellenar_inventario, luego utilizando un if con la condicion de que 
* (rellenar == 1) si se cumple esa condicion se pide que ingrese el numero de 
* leds que quiere rellenar, el numero se guardara en la variable num_de_led_para_rellenar,
* utilizando un while con la condicion de que (led1 < num_de_led_para_rellenar), siendo led1
* las led de 1 metro, se sigue con otro while con la condicion(led5 < num_de_led_para_rellenar),
* siendo led1 las led de 5 metro, y se realiza lo mismo hasta llegar a las leds de 20 metros,
* luego se imprime por pantalla la cantidad de leds actualizadas.
* Esta funcion sirve para rellenar las leds del inventario.
*   
*/
int ingreso_de_los_admnistradores();
/*
* Nombre de la función: ingreso_de_los_administradores.
* Tipo de función: int.
* Dato de retorno: “crear_cuenta_adminstrador" de tipo int;
* Descripción de la función: La función ingreso_de_los_administradores un 
* printf pregunta si tiene creada una cuenta o no tiene creada una cuenta
* para cualquiera de los dos casos le pide que ingrese un numero el cual 
* indica si tiene creada una cuenta o no, luego guarda el numero ingresado 
* en la variable crear_cuenta_administrador, mediante un while se verifica que el 
* numero que haya ingresado sea una de las dos opciones que se le pide que
* ingrese.
* Esta funcion sirve para separar a los administradores que tienen una cuenta ya 
* registrada con los que no tienen una cuenta. 
*/
void ingreso_de_usuario_y_claves_de_los_administradores();
/*
* Nombre de la función: ingreso_de_usuario_y_claves_de_los_administradores.
* Tipo de función: void.
* Descripción de la función: La función ingreso_de_usuario_y_claves_de_los_administradores
* pide que ingrese su usuario para luego guardarlo en la variable administradores,
* con un while verifica que el usuario que haya sido correcto, en el caso de que 
* no sea correcto el usuario pedira que vuelva a ingresar el usuario hasta que sea
* correcto, luego pide que ingrese su clave y la guarda en claves_administrador,
* igual que con el usuario a traves de un while verifica que sea correcta la clave 
* ingresada.
* Esta funcion sirve para verificar que el usuarios de administrador ingresado sea
* correcto,y que tambien la claves de el administrador ingresado sea correcta.  
*/
void crear_cuenta_para_administrador();
/*
* Nombre de la función: crear_cuenta_para_administrador.
* Tipo de función: void.
* Descripción de la función: La función crear_cuenta_para_administrador 
* pide primero que ingrese la clave para que pueda crear una cuenta para administrador
* y la guarda en la variable clave_crear_cuenta, con un while verifica que la clave
* que haya ingresado sea la correcta, luego pide que ingrese su usuario para luego
* guardarlo en la variable administradores, y que ingrese una clave para guardarla 
* en clave_administradores.
* Esta funcion sirve para crear cuenta para un nuevo administrador.
* 
*/
void agregar_productos_al_inventario();
/*
* Nombre de la función: agregar_productos_al_inventario.
* Tipo de función: void.
* Descripción de la función: La función agregar_productos_al_inventario mediante 
* un printf pide que ingrese un 1 o 0, el cual se guardara en la variable agregar_producto,
* mediante un while se verifica que el numero que haya ingresado sea un 1 o 0,
* luego con un if en el caso de que el numero ingresado sea un 1, se pide que ingrese
* la cantidad de productos que quiere agregar al inventario y se guardan en la 
* variable cantidad_productos_agregar, luego con un for se van ingresando uno a 
* uno los productos y se guardan en la variable productos_nuevos.
* Esta funcion sirve para agregar nuevos productos al inventario.
*/
int ingreso_como_cliente();
/*
* Nombre de la función: ingreso_como_cliente.
* Tipo de función: int.
* Dato de retorno: “crear_cuenta_cliente” de tipo int;
* Descripción de la función: La función ingreso_como_cliente mediante un 
* printf pregunta si tiene creada una cuenta o no tiene creada una cuenta
* para cualquiera de los dos casos le pide que ingrese un numero el cual 
* indica si tiene creada una cuenta o no, luego guarda el numero ingresado 
* en la variable crear_cuenta_cliente, mediante un while se verifica que el 
* numero que haya ingresado sea una de las dos opciones que se le pide que
* ingrese.
* Esta funcion sirve para separar a los clientes que tienen una cuenta ya 
* registrada con los que no tienen una cuenta. 
*/
void ingreso_de_cuenta_de_los_clientes();
/*
* Nombre de la función: ingreso_de_cuanta_de_los_clientes.
* Tipo de función: void.
* Descripción de la función: La función ingreso_de_cuenta_de_los_clientes pide 
* que ingrese su usuario para guardarlo en la varible cliente, luego mediante 
* un while verifica que el usuario ingresado haya sido correcto, en el caso de 
* que no sea correcto se volvera a pedir que ingrese su usuario, hasta que el 
* usuario sea correcto, asi mismo hace cuando pide la clave la guarda en la variable
* clave_clientes, y mediante un while verifica que sea correcta.
* Esta funcion sirve para verificar los usuarios y sus claves.
*/
void crear_cuenta_para_clientes();
/*
* Nombre de la función: crear_cuenta_para_clientes.
* Tipo de función: void.
* Descripción de la función: La función crar_cuenta_para_clientes pide que 
* ingrese su nombre para guardarlo en la variable clientes, tambien pide que
* ingrese una clave que sera guardada en la variable clave_cliente
* Esta funcion sirve para crear una cuenta a los clientes nuevos que no tengan
* una cuenta ya registrada. 
*/
void productos_disponibles_y_valor_de_las_led();
/*
* Nombre de la función: productos_disponibles_y_valor_de_las_led
* Tipo de función: void
* Descripción de la función: La función productos_disponibles_y_valor_de_las_led
* contiene otras funciones las cuales son para darle valores a las variables led1, 
* led5, led10, led15, led20, valor_led1, valor_led5, valor_led10, valor_led15, 
* valor_led20, para luego imprimir sus valores por pantalla.
* Esta funcion sirve para imprimir por pantalla la cantidad de leds que hay 
* disponibles y los valores de las leds.
*/
void datos_personales_para_el_despacho_a_domicilio();
/*
* Nombre de la función: datos_personales_para_el_despacho_a_domicilio
* Tipo de función: void
* Parámetros: "nombre" de tipo char
"direccion" de tipo char
* Descripción de la función: La función datos_personales_para_el_despacho_a_domicilio 
* pide que ingrese su nombre y la guarda en la variable nombre, tambien 
* pide que ingrese su direccion y la guarda en la variables direccion.
* Esta funcion  sirve para guardar los datos personales de los clientes 
* que quieran despacho a domicilio. 
*/
void realizar_pago_de_las_compras_realizadas();
/*
* Nombre de la función: realizar_pago_de_las_compras_realizadas
* Tipo de función: void
* Parámetros: "num_tarjeta" de tipo int
"clave_tarjeta" de tipo int
* Descripción de la función: La función realizar_pago_de_las_compras_realizadas
* pide que ingrese su numero de tarjeta para despues guardarlo en la varianble
* num_tarjeta, luego de eso a traves de un while se verifica que el numero 
* de tarjeta que haya ingresado sea correcto, en el caso de que no sea correcto 
* se vuelve a pedir que ingrese el numero de tarjeta para volver a guardarlo en  
* la variable num_tarjeta, se hace lo mismo para pedir la clave de tarjeta.
Esta funcion sirve para realizar el pago de la compra.
*/
void boleta_de_la_compra();
/*
* Nombre de la función: boleta_de_la_compra
* Tipo de función: void
* Descripción de la función: La función boleta_de_la_compra es para imprimir
* por pantalla la compra que a sido realizada y el valor total de las compras.
*/

