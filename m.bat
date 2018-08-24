rem echo %1
g++ -O3 -mtune=native -march=native -mfpmath=both %1
call a.exe