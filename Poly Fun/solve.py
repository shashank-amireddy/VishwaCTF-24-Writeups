from numpy.polynomial import Polynomial
import base64
from Crypto.Util.Padding import unpad
from Crypto.Cipher import AES

def decrypt(enc):
        enc = base64.b64decode(enc)
        cipher = AES.new(key, AES.MODE_ECB)
        return unpad(cipher.decrypt(enc),16)


with open("encoded_key.txt", "rb") as file:
    encrypted_key_data = file.read()
encrypted_key_str = encrypted_key_data.decode()
encrypted_key_nums = [ord(c) for c in encrypted_key_str]

with open("encoded_flag.txt","rb") as flag:
    flag = flag.read()
    
key_nums = []
for num in encrypted_key_nums:
    poly = Polynomial([7 - num, 3, 4])
    roots = poly.roots()
    for root in roots:
        if root > 0:
            break
    key_nums.append(round(root))

key = bytes(key_nums) #key is b'12345678910111213141516171819202'

flag_decode = decrypt(flag)
print('flag: ',flag_decode.decode("utf-8", "ignore"))
