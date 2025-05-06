@echo off
cls
echo Detectando la ruta actual...
set "RUTA_ACTUAL=%CD%"

echo Montando la ruta actual como unidad D en DOSBox...
dosbox -conf dosbox.conf -c "mount d \"%RUTA_ACTUAL%\"" -c "d:" -c "serial1=directserial realport:COM1"
exit