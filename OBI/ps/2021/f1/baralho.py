from operator import countOf

baralho = {
    "C": [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    "E": [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    "U": [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    "P": [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
}

inp = input()
val = ""

error = { "C": 0, "E": 0, "U": 0, "P": 0 }

for i in range(0, len(inp)):
    if inp[i] == "C" or inp[i] == "E" or inp[i] == "U" or inp[i] == "P":
        if baralho[inp[i]][int(val)-1] == 1:
            error[inp[i]] = 1
        else:
            baralho[inp[i]][int(val)-1] += 1
        val = ""
    else:
        val += inp[i]


c = 13 - countOf(baralho["C"], 1)
e = 13 - countOf(baralho["E"], 1)
u = 13 - countOf(baralho["U"], 1)
p = 13 - countOf(baralho["P"], 1) 

if error["C"] >= 1:
    print("erro")
else:
    print(c)

if error["E"] >= 1:
    print("erro")
else:
    print(e)

if error["U"] >= 1:
    print("erro")
else:
    print(u)

if error["P"] >= 1:
    print("erro")
else:
    print(p)

