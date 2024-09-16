#Replace all ______ with rjust, ljust or center. 

thickness = int(input()) #This must be an odd number
c = 'H'

#Top Cone
for i in range(thickness):
    print((c*i).ljust(thickness-1)+c+(c*i).center(thickness-1))

#Top Pillars
for i in range(thickness+1):
    print((c*thickness).ljust(thickness*3)+(c*thickness).center(thickness*4))

#Middle Belt
for i in range((thickness+1)//2):
    print((c*thickness*5).ljust(thickness*6))    

#Bottom Pillars
for i in range(thickness+1):
    print((c*thickness).ljust(thickness)+(c*thickness).center(thickness*4))    

#Bottom Cone
for i in range(thickness):
    print(((c*(thickness-i-1)).rjust(thickness)+c+(c*(thickness-i-1)).rjust(thickness)).center(thickness*6))
