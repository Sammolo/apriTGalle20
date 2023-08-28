L' *obiettivo* è creare un programma che giri principalmente su Windows la cui funzione è aprire una scheda di chrome con il TG, ogni giorno quando apro il computer dopo le 20. 
L'idea è nata per sopperire alla mia mancanza di "informazioni quotidiane" e in qualche modo obbligarmi a non dimenticarmene durante la giornata.

Inizialmente avevo pensato di scrivere il codice in powershell così che lo script potesse essere automatizzato all'avvio del computer. 
Ovviamente la mia idea non è stata delle migliori. Una volta completato lo script su powershell, ho cercato come renderlo automatico all'avvio e ho scoperto che powershell non è la versione "aggiornata" del terminale CMD. 
Per far eseguire il mio codice all'avvio del computer ho dovuto scrivere due righe di script col promt dei comandi di windows e mettere il file nella cartella "startup" all'interno di windows. 
Dopo aver fatto ciò, all'avvio il programma effettivamente partiva e funzionava come previsto ma il terminale doveva rimanere obbligatoriamente aperto. 
Non contento di questa cosa, ho riscritto il programma in C, in modo da fare un file .exe da eseguire all'accensione del computer, risolvendomi così molti dei problemi riscontrati in precedenza a causa del mio errore nel ragionamento.
