$oggi = $ieri = (Get-Date).Day
$check = 0
while ($true){ 
    if ($oggi -eq $ieri) {
        while ($check -eq 0) {
            $ora = (Get-Date).Hour
            if ($ora -ge 20){
                Start-Process chrome.exe "https://tg.la7.it/ultime-edizioni-del-tgla7" 
                $check++ }    } 
    } else { $check-- } }