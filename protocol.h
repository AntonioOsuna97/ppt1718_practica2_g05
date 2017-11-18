#ifndef protocolostpte_practicas_headerfile
#define protocolostpte_practicas_headerfile
//Necesario para dominio
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#endif

// COMANDOS DE APLICACION
//Definimos comando HELO
#define HE "HELO"
//Definimos los comandos para envío de mensaje
//MAIL FROM
#define MA "MAIL FROM: "
//RCPT TO
#define RCPT "RCPT TO: "
//DATA
#define DATA "DATA"
//MENSAJES
#define MENS "MENSAJE"
//SESION 4
//RSET: Aborta la transacción en curso y reinicia la sesión
#define RSET "RSET"

#define SD2 "EXIT"  // Finalizacion de la conexion de aplicacion 
//Definición del comando QUIT
#define SD  "QUIT"  // Finalizacion de la conexion de aplicacion

// RESPUESTAS A COMANDOS DE APLICACION
#define OK  "OK"
#define ER  "ER"
#define OKDATA  "OD"
#define UU  "554 User unknown"


//FIN DE RESPUESTA
#define CRLF "\r\n"

//ESTADOS
//Definimos los estados para el envío de mensajes
#define S_HELO 0
#define S_MAIL 1
#define S_RCPT 2
#define S_DATA 3
#define S_MENSAJE 4
#define S_RSET 5
#define S_QUIT 6
#define S_EXIT 7


/*
//PUERTO DEL SERVICIO
#define TCP_SERVICE_PORT	6000
*/
//Introducimos el puerto por defecto de SMTP
#define default_mailPort	25  

/*No necesarios NOMBRE Y PASSWORD en esta practica
#define USER		"alumno"
#define PASSWORD	"123456"
*/