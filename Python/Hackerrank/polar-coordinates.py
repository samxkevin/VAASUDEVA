import cmath
z=complex(input())
x=z.real
y=z.imag
print(abs(complex(x,y)))
print(cmath.phase(complex(x,y)))