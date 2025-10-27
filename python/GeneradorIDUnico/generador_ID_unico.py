# Generador ID Unico
from random import randint

print('*** Sistema de Generador ID Unico ***')
nombre = input('Cual es tu Nombre?: ')
nombre_2 = nombre[0:2].upper()
#print(nombre_2)
apellido = input('Cual es tu Apellido?:')
apellido_2 = apellido[0:2].upper()
anio = input('Cual es tu Año de Nacimiento (YYYY)?: ')
anio_2 = anio[2:4]
#print(anio_2)
# Generar un valor de 4 digitos aleatorio
aleatorio = randint(0,9999)
#print(aleatorio)
# Generamos el ID unico
id_unico = nombre_2 + apellido_2 + anio_2 + str(aleatorio)
id_unico = f'{nombre_2}{apellido_2}{anio_2}{aleatorio}'
#print(id_unico)
print(f'''\nHola {nombre}, habitante de barbielandia!
  Tu nuevo numero de identificacion (ID) generado por el sistema es: 
  {id_unico}
  Felicidades!''')
