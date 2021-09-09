friends={"krishna":87,"dipak":"tumpa","rahul":(3,6,6),"rumlo":"babuska","dumass":{"bruno":"mars"}}
print(friends.keys())#print keys(left) of the dict
print(friends.values())#print values(right) of the dict
print(friends.items())#prints both the values and keys of the dict

friends.update({"ramu":"kaka"})
print(friends)

print(friends.get("krishna"))  #one way to check and returns none if not present


