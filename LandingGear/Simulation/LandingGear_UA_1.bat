@cd "D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/bin/uaadaptor.exe" -sdy "D:\gd\ITA\CE-235\scade\landing_gear\LandingGear\LandingGear.sdy" -n "C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation" -k "D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation/kcg_trace.xml" -o "LandingGear_UA_1" -i "LandingGear_interface.h"  -encoding "ASCII"  "D:\gd\ITA\CE-235\scade\landing_gear\landing_gear\LG.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "LandingGear_UA_1.log" "LandingGear_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "D:\gd\ITA\CE-235\scade\landing_gear\landing_gear\landing_gear.etp" -conf "DF Generation" -source "LG.sgfx" -outdir "D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation" -prefix "LandingGear_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "LandingGear_UA_1.log" "LandingGear_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "D:\gd\ITA\CE-235\scade\landing_gear\landing_gear\landing_gear.etp" -conf "DF Generation" -spec "LG.sgfx" -out "D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation/LandingGear_UA_1_conf.xml"
@exit 0
:failed
@exit 1
