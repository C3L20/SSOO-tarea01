Autor:Celso Cisternas
Correo:celso.cisternas@alumnos.uv.cl
Solucion:para la creacion de este programa fue hecha en base a los videos:
https://www.youtube.com/watch?v=rNGlwqHpoGw para el uso de las se�ales y su implementacion
https://www.youtube.com/watch?v=IEcw8IDEncI para el uso de la libreria time.h
tal y como se muestra en los videos el programa queda a la espera de la se�al SIGUSR1 a lo que responde
llamando a la funcion "Misignalhandler" que imprime en pantalla la fecha indicada por el sistema operativo
en caso de usar la se�al Ctrl+C o "SIGINT" el programa llama a la funcion "Cortar" la cual en caso de recibir
esta misma se�al de nuevo llama "Cortarr" que termina el programa.