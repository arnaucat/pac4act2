# pac4act2

Se define el siguiente escenario: se conecta el Arduino a la Raspberry PI usando un cable USB. Desde la Raspberry PI ahora podemos ver un nuevo dispositivo USB-serie conectado. 


comando: lsusb Abrimos puerto serie para comunicarnos con Arduino desde la Raspberry PI: 
comando: screen /dev/PUERTO_SERIE_DEL_ARDUINO 9600 Desde la consola serie debemos mandar los siguientes comandos a Arduino y este debe responder como procede: 
comando: ON(1) – respuesta: LED ON 
comando: OFF(0) - respuesta: LED OFF 


El alcance de la actividad es desarrollar el código para Arduino para que cuando este se conecte a la Raspberry PI se comporte de la forma descrita anteriormente. Se deberá subir el código de la actividad a GITHUB.
