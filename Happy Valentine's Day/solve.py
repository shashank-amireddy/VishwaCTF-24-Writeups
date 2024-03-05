from PIL import Image
from itertools import cycle

def xor(a, b):
    return [i^j for i, j in zip(a, cycle(b))]

f = open("enc.txt", "rb").read()
key = [0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A]


enc = bytearray(xor(f,key))

open('org.png', 'wb').write(enc)
