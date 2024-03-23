from Crypto.Util.number import inverse

with open("file1.txt", "r") as f:
    coss = f.read().strip().split('\n') #

with open("file2.txt", "r") as f:
    sins = f.read().strip().split('\n') #

cosss = []
for cos in coss:
    if cos[0] == "5":
        cosss.append(1)
    else:
        cosss.append(0)

sinss = []
for sin in sins:
    if sin[0] == "8":
        sinss.append(1)
    else:
        sinss.append(0)

p = 57357445697656305449852658985072306792176526325401427689338172257827853689473430283849367024117704513636066741450894144354439223
q = 89992838080292432041749786501934273286234288253944531238372481458518903256335509625431026718322552331965908097158513049639942869

print(f"{p = }")
print(f"{q = }")

n = p*q
phi = (p - 1) * (q - 1)
print("phi ",phi)
d = inverse(65537, phi)

c = 4400037514278889258479265625258024039636437755883377709505596356049534358755375772484057042989024750972247184288820831886430459963472328358741858934783775986591400972020736548834642094922678189447202173710409868474198821576627330424767999152339702779346380
m = pow(c, d, n)
print(f"{m = }")
m = str(m)
flag = "".join(chr(int(m[i:i+2])) for i in range(0, len(m), 2))
print(f"flag = VishwaCTF{{{flag}}}")