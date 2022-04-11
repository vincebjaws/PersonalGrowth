#--------------------------------------------------------------
# General Python Practice and notes for April 11, 2022
# Core Python: Big Picture By Jason Olson
# Core Python 3.6: Getting Started By Robert Smallshire, and Austin Bingham
# Practice by Vince (Vino) Bjazevic
#--------------------------------------------------------------

# Prints 

print ("Hello World")
print ('Hey World')
print 'Aloha World'
print "Howdy World"

# Base conversions

print(10) # in base 10
print(0b10) # in base 2
print(0o10) # in base octle
print(0x10) # in hex

# Int function properties

print(int(3.5))
print(int(-3.5))
print(int("495"))
print(int("10000", 3)) # converts to base 3

# Floats

print(3.0 - 1) # any number that deals with a different num type is promoted to that num type

# Bools

if True:
    print("True is true!")

if False:
    print("Will never be true!")

if bool(0):
    print("Is false")

if bool(-19234):
    print("Any non-zero number is true!")

if bool("Non empty string is true"):
    print("Non empty string is true!")

if bool(""):
    print("Empty string is false!")

if 1:
    print("No need for parenthisis or bool,")

if "eggs":
    print("Even for strings!")

# Variables

a = 10
print(a)
a = "a is a string!"
print (a)
b = a

# if

if a != b:
    print("cool")
elif a == b:
    print("neat")
else:
    print("wow")

# loops
counter = 17
while counter > 0:
    if counter%5:
        print(counter)
        counter-= 1
