taskkill /IM pcsx2-qt.exe /F >nul 2>nul

docker cp C:\dev\ps2\ps2dev-world\samples\ps2sdk-homebrew\fever_dream ps2sdk-dev:/src/samples && ^
docker exec ps2sdk-dev make -C /src/samples/fever_dream && ^
docker cp ps2sdk-dev:/src/samples/fever_dream C:\dev\ps2\ps2dev-world\samples\ps2sdk-homebrew && ^
C:\Users\Lucas\Documents\pcsx2\pcsx2-qt.exe -elf C:\dev\ps2\ps2dev-world\samples\ps2sdk-homebrew\fever_dream\fever_dream.elf