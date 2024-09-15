# Arduino_temperature_LED
En litt mer kompleks krets som måler romtemperatur og gir lys for å si om temperaturen er kald, normal eller varm.

Utstyr brukt: Arduino UNO, Arduino IDE, kretsbrett, TMP36, 3 stk resistors (200 ohm), 3 dioder med ulike farger, og 8 ledninger.

<br>
📌 Viser grønn når temperaturen er normal (fra 21 til 26 grader celsius):
<br><br>
<img src="https://github.com/h669798/Arduino_temperature_LED/blob/main/Photos/Green.jpg" alt="Green diode" width="600"/>

<br>
📌 Viser blå når temperaturen er kald (under 21 grader celsius).

Her har jeg bare tatt noe silikon fra frysen og tatt det på TMP36 for å vise:
<br><br>
<img src="https://github.com/h669798/Arduino_temperature_LED/blob/main/Photos/Blue.jpg" alt="Blue diode" width="600"/>

<br>
📌 Viser rød når temperaturen er høy (over 26 grader celius).

Her har jeg tatt fingeren over TMP36 for å øke temperaturen:
<br><br>
<img src="https://github.com/h669798/Arduino_temperature_LED/blob/main/Photos/Red.jpg" alt="Red diode" width="600"/>

📌 Utskrift hvert sekund i serial plotter i Arduino Uno:
<br><br>
<img src="https://github.com/h669798/Arduino_temperature_LED/blob/main/Photos/Utskrift.png" alt="Code prints" width="300"/>
