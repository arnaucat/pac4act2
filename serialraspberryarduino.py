import serial

arduino = serial.Serial('/dev/ttyACM0', 9600)

while True:
      coman = raw_input('INSERTAR  [1/0]:') 
      arduino.write(coman)
      if coman == '1':
            print('LED ON')
      elif coman == '0':
            print('LED OFF')

arduino.close()
