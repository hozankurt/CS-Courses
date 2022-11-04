people= [
    {"name": "Harry", "house": "Gryffindor"},
    {"name": "Cho", "house": "Rawenclaw"},
    {"name": "Draco", "house": "Slytherin"}
]

#This can be done
#def f(person):
#    return person["name"]

#people.sort(key=f)

#Also lambda can be used

people.sort(key=lambda person: person["name"])

print (f"Sorted people is {people}")