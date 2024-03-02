#Kunal Sharma IIT JAMMU
s = input()
s = s.replace(",","")
s = s.replace(" ","")
s = s.replace("{","")
s = s.replace("}","")
ss = set(s)
print(len(ss))
