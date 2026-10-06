@echo off
set "name=%~n1"
del %name%.exe 2>nul
gcc %name%.c -o %name%.exe -std=c99
%name%.exe
