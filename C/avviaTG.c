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



int main()
{    
    int dataInizio = getNumGiorno(); //prendo la data di quando ho acceso il computer
    int check, ora = 0; 
    char url[43] = "https://tg.la7.it/ultime-edizioni-del-tgla7"; //url

    while (true)
    {
        //finchè non sono 20 o più tardi, non esce dal ciclo
        while (check==0) 
        {
            ora = getOra(); //prendo l'ora attuale
            if (ora>=20) //se sono le 20 o più tardi
            {
                printf("Funziona!"); //apro l'url su chrome
                check++; //aumento il check per uscire dal ciclo
            }
            //sleep(30); //fermo il programma per 
        }

        //ho aperto il link, ora aspetto il giorno successivo per poter rientrare nel loop
        int dataOggi = getNumGiorno();  //prendo la data di questo momento 
        if (dataInizio != dataOggi) //se l'avvio del programma non coincide con oggi, 
        //cioè è passato un giorno
        {
            check--; //ripristino il check
            dataInizio = dataOggi; //aggiorno la data di inizio del programma con oggi
        }
        //sleep(30); //fermo il programma per 
    }
    return 0;
}
