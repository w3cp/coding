fruits = ["apple", "orange", "banana",  "jambura", \
	"mango", "cherry"]

found = "no"
for fruit in fruits:
    if fruit == "jambura":
        found = "yes"
        break

if found == "yes" :
    print "We have jambura!"
else:
    print "Sorry!"
