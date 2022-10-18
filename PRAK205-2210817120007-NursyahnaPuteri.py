import math
tinggi = int (input ("Masukkan sisi tegak segitiga pythagoras : ")) 
sisimiring = int (input ("Masukan  sisi miring segitigas pythagoras : "))

alas = (math.sqrt (sisimiring * sisimiring - tinggi * tinggi))
keliling = alas + tinggi + sisimiring
luas = alas * tinggi / 2

print ("Alas = {} cm". format (round (alas,)))
print ("Tinggi = {} cm ". format (round (tinggi,)))
print ("Keliling = {} cm". format (round (keliling,)))
print ("Luas = {} cm^2". format (round (luas,)))