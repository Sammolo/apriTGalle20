PowerShell -Command "Set-ExecutionPolicy Unrestricted" -Scope CurrentUser >> "%TEMP%\StartupLog.txt" 2>&1
PowerShell C:\Users\pasqu\Documents\Esperimenti\apriTG_ottimizzato.ps1 >> "%TEMP%\StartupLog.txt" 2>&1 
