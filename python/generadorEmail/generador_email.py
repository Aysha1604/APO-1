print('*** Bienvenido al sistema de generacion de email de barbielandia')
nombre = input('Cual es tu nombre?: ')
#nombre = nombre.lower()
apellido = input('Cual es tu apellido?: ')
# Generamos el email
email_generado = f'{nombre.lower()}.{apellido.lower()}@barbielandia.com'
#print(email_generado)
print(f'''
Tu nuevo email generado por el sistema es:
   {email_generado}
   *** Excelente *** 
''')