@echo off
set "VSCMD_START_DIR=%CD%"
call "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\VCVARSALL.BAT" amd64

call  "\\Matthew-PC\D$\Program Files\MATLAB\R2020b\bin\win64\checkMATLABRootForDriveMap.exe" "\\Matthew-PC\D$\Program Files\MATLAB\R2020b"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n

cd .
nmake -f rtwshared.mk MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  OPTS="-DNRT"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1