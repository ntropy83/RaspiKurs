RPi – Ressourcen

Bücher: Raspberry Pi: Das umfassende Handbuch für Maker und Tekkies. Aktuell zu Raspberry Pi Model 3B+ und Zero WH
_______________________________________

RPi Adventskalender: Sotel Adventskalender Adventskalender Raspberry Pi
_______________________________________

Scratch Tutorial: https://de.scratch-wiki.info/wiki/Einsteiger-Tutorials
_______________________________________

Raspberry Schrittmotor Steuerung: 
Tutorial: http://www.elektronx.de/tutorials/schrittmotorsteuerung-mit-dem-raspberry-pi/ (für ULN2003A unipolarer Schrittmotor)

https://www.dxsdata.com/de/2016/11/controlling-a-4-pin-bipolar-stepper-motor-with-raspberry-pi-and-motor-shield/ (bipolarer Schrittmotor)

Schrittmotor Shield:
https://www.amazon.de/Waveshare-Stepper-Raspberry-Controller-Microstepping/dp/B07KVL5X34/ref=sr_1_30?__mk_de_DE=ÅMÅŽÕÑ&keywords=stepper+hat+raspberry&qid=1573724623&sr=8-30

Examples/Tutorials: www.waveshare.com/wiki/Stepper_Motor_HAT (benutzt I2C,serial und SPI)
_______________________________________

Codelite (IDE zur Programmierung):

Installation: sudo apt install codelite

Gnome Dev (GTK Tutorial):
https://developer.gnome.org/gtkmm-tutorial/stable/sec-multi-item-containers.html.en#buttonbox-example
_______________________________________


Ein neues Repository auf Github erzeugen:

echo "# RaspiKurs" >> README.md<br>
git init<br>
git add README.md<br>
git commit -m "first commit"<br>
git remote add origin https://github.com/EUERGITHUB_REPO<br>
git push -u origin master<br>
