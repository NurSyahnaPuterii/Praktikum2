jarijaribejana = float (input("masukan jari-jari dari bejana: "))
tinggibejana = float (input("masukan tinggi dari bejana : "))
phi = 3.14285714

volume = phi * jarijaribejana* jarijaribejana * tinggibejana
luas = 2 * phi * jarijaribejana * (jarijaribejana + tinggibejana)
keliling = 2 * phi * jarijaribejana

print ("Volume = {:.2f} ".format (volume))
print ("Luas =  {:.2f} ".format (luas))
print ("Keliling = {:.2f}".format (keliling))