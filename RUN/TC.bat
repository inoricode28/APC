@echo off
cls
echo Iniciando DOSBox y ejecutando Turbo C paso a paso...
echo.

dosbox -conf dosbox.conf ^
  -c "echo Montando unidad C en C:\TC..." ^
  -c "mount c C:\TC" ^
  -c "echo Cambiando a unidad C..." ^
  -c "c:" ^
  -c "echo Navegando a carpeta BIN..." ^
  -c "cd BIN" ^
  -c "echo Verificando archivos..." ^
  -c "dir /p TC.EXE" ^
  -c "echo Iniciando Turbo C..." ^
  -c "TC.EXE" ^
  -c "echo Cerrando DOSBox..."
exit