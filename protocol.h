#ifndef protocolostpte_practicas_headerfile
#define protocolostpte_practicas_headerfile
#endif

// COMANDOS DE APLICACION
//Definimos comando HELO
#define EH "HELO"
//Definimos los comandos para env�o de mensaje
//MAIL FROM
#define MA "MAIL"
//RCPT TO
#define RCPT "RCPT"
//DATA
#define DATA "DATA"
//MENSAJES
#define MENS "MENS"


#define SC "USER"  // SOLICITUD DE CONEXION USER usuario 
#define PW "PASS"  // Password del usuario  PASS password
#define SD2 "EXIT"  // Finalizacion de la conexion de aplicacion 
#define ECHO "ECHO" // Definicion del comando "ECHO" para el servicio de eco
//Definici�n del comando QUIT
#define SD  "QUIT"  // Finalizacion de la conexion de aplicacion

// RESPUESTAS A COMANDOS DE APLICACION
#define OK  "OK"
#define ER  "ER"
#define OKDATA  "OD"


//FIN DE RESPUESTA
#define CRLF "\r\n"

//ESTADOS
//Definimos los estados para el env�o de mensajes
#define S_HELO 0
#define S_MAIL 1
#define S_RCPT 2
#define S_DATA 3
#define S_MENSAJE 4
#define S_QUIT 5
#define S_EXIT 6

#define S_RSET 7
//No necesarios por ahora
#define S_VRFY 8
#define S_NOOP 9 //Responde codigo asentamiento positivo 250 ok
#define S_HELP 10
#define S_EXIT 11
/*
#define S_USER 1
#define S_PASS 2
#define S_DATA 3
#define S_QUIT 4
#define S_EXIT 5
*/


/*
//PUERTO DEL SERVICIO
#define TCP_SERVICE_PORT	6000
*/
//PUERTO DEL SERVICIO
#define default_mailPort	25 //Cambiamos puerto a 25 

// NOMBRE Y PASSWORD AUTORIZADOS
#define USER		"alumno"
#define PASSWORD	"123456"