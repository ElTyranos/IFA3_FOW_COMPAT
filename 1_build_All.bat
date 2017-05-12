rem Prepare
set _APPPATH=C:\Program Files (x86)\Mikero\DePboTools\bin
set _SOURCEPATH=P:\IFA3_FOW_COMPAT\
set _TARGETPATH=P:\IFA3_FOW_COMPAT\

set _PARAMS=-ANUWDP -$
set _ALLOWHPP=-X=thumbs.db,*.dep,*.cpp,*.bak,*.png,*.log,*.pew
rem ----



cd /D "%_SOURCEPATH%\
for /D %%i in (*) do (

	"%_APPPATH%\Makepbo.exe" %_PARAMS% %_ALLOWHPP% "%_SOURCEPATH%\%%i" "%_TARGETPATH%\ifa3_comp_fow_%%i" 2>>"%_SOURCEPATH%\BuildPBOs_ifa3_comp_fow.log" 1>nul

)

exit