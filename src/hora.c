#include<signal.h>
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

void MiSignalHandler(int sig){//imprime en pantalla la fecha
	time_t tiempo;
        time(&tiempo);
        printf("Señal SIGUSR1 recibida: %s. \n", ctime(&tiempo));
        printf("Listo para recibir la señal SIGUSR1. \n");
}

void Cortarr(int sig1){exit(-1);}//termina el programa

void Cortar(int sig2){signal(SIGINT, &Cortarr);}//si recibe una segunda señal Ctrl+C llama la funcion para terminar el

int main(void){//informa la disposicion del programa y su PID
        printf("programa hora ejecutandose. PID=%d. \n", getpid());
        printf("Listo para recibir la señal SIGUSR1. \n");
        signal(SIGINT, &Cortar);//atrapa la señal Ctrl+C
        while(1){//queda a la espera de la señal SIGUSR1
                signal(SIGUSR1, &MiSignalHandler);//si recibe la señal indicada llama a la funcion correspondiente
                sleep(1);
        }
        return 0;
}
