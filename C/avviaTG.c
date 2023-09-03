#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>


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
    //creo il check
    bool check = false;
    //creo la variabile ora
    int hh;

    //entro nel while true
    while (true)
    {
        //prendo la data di oggi
        int dataOggi = getNumGiorno();
        //se le due date sono uguali, quindi non è passato un giorno
        if (dataOggi == dataInizio)
        {
            //entro in un loop in cui controllo lo stato del check
            while (check == false) //finchè non aggiorno il check, cioè finchè non ho aperto il TG
            {
                //prendo l'ora
                hh = getOra();
                //se sono le 20 o più tardi
                if (hh >= 12)
                {
                    //avvio il tg
                    printf("Apro il TG");
                    //aumento il check per uscire dal loop
                    check = true;
                }
                //altrimenti resto nel loop
            }
        }
        //altrimenti se le due date sono diverse, cioè è passato un giorno
        else
        {
            //azzero il check
            check = false;
            //aggiorno la prima data 
            dataInizio = dataOggi;
        }
    }      
        
             
                
                
                    
                    
                
        
        
            
            
}
