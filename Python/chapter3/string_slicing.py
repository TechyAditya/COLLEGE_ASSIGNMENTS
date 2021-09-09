greeting = "namaskar"
name="captain"

#concatenating 2 strings
c= greeting + name
print(c)


print(greeting[2])

#name[2] = "g" --> does not work

#string slicing
print(name[1:3])
print(name[:3]) #first blank space here denotes "0"
print(name[1:]) #last blank space here denotes "last index"

print(name[-1])
print(name[-2])

#skipt value

print(name[1:5:2])
print(name[1])
print(name[6])
print(name[0:6:2])
print(greeting[0:2])
print(name[0:5:2])