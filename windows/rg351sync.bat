@echo off

rem This is a quick and dirty script I wrote to synchronize files (roms, bios files, saves, etc.) between the Dropbox on my PC and my Anbernic RG351P (running the
rem 351ELEC firmware). It should ensure that the most up-to-date versions of the files are mirrored on the other device. It's a messy script that largely works,
rem so I'm tossing it in the workshop in case it's a useful starting point for anyone else trying to do something similar.

set drive=\\351ELEC\roms
set dropbox=C:\Users\grave\Dropbox\Emulation
set params=/e /z /r:3 /w:1 /copy:DT /xo /fft

echo =======================================
echo Copying files from RG351P to Dropbox...
echo =======================================
echo.
robocopy %drive%\backup "%dropbox%\RG351P\backup" %params% /move
del "%dropbox%\RG351P\backup\*.log"
robocopy %drive%\gamedata "%dropbox%\RG351P\gamedata" %params% /purge
robocopy %drive%\saves "%dropbox%\saves" %params%

echo.
echo =======================================
echo Copying files from Dropbox to RG351P...
echo =======================================
echo.
robocopy "%dropbox%\saves" %drive%\saves %params%
robocopy "%dropbox%\RG351P\BGM" "%drive%\BGM" %params% /purge
robocopy "%dropbox%\RG351P\overlays" "%drive%\overlays" %params% /purge
robocopy "%dropbox%\bios" "%drive%\bios" %params% /purge
robocopy "%dropbox%\roms\atarilynx" "%drive%\atarilynx" %params% /purge
robocopy "%dropbox%\roms\gamegear" "%drive%\gamegear" %params% /purge
robocopy "%dropbox%\roms\gb" %drive%\gb %params% /purge
robocopy "%dropbox%\roms\gba" %drive%\gba %params% /purge
robocopy "%dropbox%\roms\gbc" %drive%\gbc %params% /purge
robocopy "%dropbox%\roms\genesis" %drive%\genesis %params% /purge
robocopy "%dropbox%\roms\mastersystem" %drive%\mastersystem %params% /purge
robocopy "%dropbox%\roms\neogeo" %drive%\neogeo %params% /purge
robocopy "%dropbox%\roms\nes" %drive%\nes %params% /purge
robocopy "%dropbox%\roms\ngpc" %drive%\ngpc %params% /purge
robocopy "%dropbox%\roms\pcengine" %drive%\pcengine %params% /purge
robocopy "%dropbox%\roms\pcenginecd" %drive%\pcenginecd %params% /purge
robocopy "%dropbox%\roms\psp" %drive%\psp %params% /purge
robocopy "%dropbox%\roms\psx" %drive%\psx %params% /purge
robocopy "%dropbox%\roms\sega32x" %drive%\sega32x %params% /purge
robocopy "%dropbox%\roms\segacd" %drive%\segacd %params% /purge
robocopy "%dropbox%\roms\snes" %drive%\snes %params% /purge

echo.
echo All done!
pause
