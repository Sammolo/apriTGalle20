#L'obiettivo è far aprire una scheda di chrome col TG del giorno, una sola volta al giorno quando sono al computer dopo le 20:30

$oggi = $ieri = (Get-Date).Day
$url = "https://tg.la7.it/ultime-edizioni-del-tgla7"
$check = 0 #creo la variabile per far comparire il tg solo una volta al giorno

while ($true){ #run perpetuo
    if ($oggi -eq $ieri) {#se il programma è eseguito nello stesso giorno
        while ($check -eq 0) {#finchè non sono le 20
            $ora = (Get-Date).Hour #prendo l'ora
            if ($ora -ge 20){ #se sono le 20 o più tardi
                Start-Process chrome.exe $url #apro l'url su chrome
                $check = 1 #esco dal ciclo
            }    
        }
    } else { #è passato un giorno
        $check = 0 #metto il check a zero
    }
}