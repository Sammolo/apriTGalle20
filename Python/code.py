#!/usr/bin/env python
import datetime

#restituisco l'ora 
def getOra():
    now = datetime.datetime.now()
    return now.hour

#¶estituisco il gionro
def getGiorno():
    now = datetime.datetime.now()
    return now.day    


def main():

    dataInizio = getGiorno() #prendo la data di inizio del programma
    check = False #creo il check per uscire dal loop che apre il tg

    while(True): #esecuzione perpetua del codice
        
        oggi = getGiorno() #prendo la data di oggi
        if(dataInizio == oggi): #se le due date corrispondono, quindi non è passato un giorno
            #controllo lo stato del check
            while(check == False): #finchè non cambio il check, cioè non ho aperto il TG
                #prendo l'ora
                ora = getOra()
                if(ora >= 20): #apro il TG 
                    print("Solo passate le 20! Eccoti il TG")
                    check = True #aggiorno il check per uscire dal loop
        
        else: #se le due date sono diverse, quindi è passato un giorno
            check = False #azzero il check
            dataInizio = oggi #aggiorno la data di inizio con la data di oggi
    return 0


#eseguo il codice
main()


