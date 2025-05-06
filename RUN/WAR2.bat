@echo off
cls
echo Iniciando DOSBox y ejecutando Warcraft 2...
dosbox -conf dosbox.conf ^
  -c "mount c D:\DOSBOX\WAR2" ^
  -c "mount d D:\DOSBOX\WAR2INSTALL -t cdrom" ^
  -c "serial1=directserial realport:COM1" ^
  -c "c:" ^
  -c "WAR2.EXE"
exit