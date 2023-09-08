#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>


int getNumGiorno(){
    time_t orario = time(NULL); //creo la variabile 
    struct tm *timeStruct = localtime(&orario);  //scompongo l'orario
    int numeroGiorno = timeStruct->tm_mday; //prendo la data

    return numeroGiorno;
}

int getOra(){
    time_t orario = time(NULL); //creo la variabile 
    struct tm *tm_struct = localtime(&orario);  //scompongo l'orario
    int ora = tm_struct->tm_hour; //prendo l'ora

    return ora;
}   



void main()
{    
    //prendo la data del giorno in cui il programma inizia
    int dataInizio = getNumGiorno();
    


    //entro nel while true
    while (true)
    {
        bool check = false;
        int hh = getOra(); //prendo l'ora
        if(hh >= 20){ //se sono passate le 20 
            system("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe https:\\www.google.com");
            //printf("Aprirò il TG perchè sono le %i \n", hh);
            while (check == false) //finchè non cambia di giorno
            {
                int oggi = getNumGiorno();
                if (oggi == dataInizio) //se la data di oggi coincide con la data di inizio del programma
                {
                    sleep(3600); //faccio dormire il programma un'ora prima di ricontrollare il giorno
                } else { //se il giorno di oggi è diverso dal giorno in cui è iniziato il programma
                    //printf("E' cambiato giorno!");
                    check = true; //aggiorno in check ed esco da questo loop
                } 
            }
            
        }
        else if (hh < 18) //se non sono ancora le 18, ricontrollo l'orario ogni 2 ore
        {
            sleep(7200);
        }
        else if (hh > 18 && hh < 20) //se è tra le 18 e le 20, ricontrollo l'orario ogni 15 minuti
        {
            sleep(900);
        } 
        else { // in caso di problemi vari, ricontrollo l'orario ogni 30 minuti
            sleep(1800);
        }
    }      
              
}
