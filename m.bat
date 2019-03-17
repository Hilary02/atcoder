@echo off
IF EXIST a.exe (GOTO FILE_TRUE) ELSE GOTO COMPILE

:FILE_TRUE
del a.exe
GOTO :compile

:COMPILE
g++ -O3 -mtune=native -march=native -mfpmath=both %1
call a.exe