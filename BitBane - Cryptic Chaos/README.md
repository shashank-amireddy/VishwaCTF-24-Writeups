# BitBane - Cryptic Chaos
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** Hard

## Description
Once again, Mr. David made a blunder by encrypting some confidential data and deleting the original file. Can you help him retrieve the data from the encrypted file?


## Steps
#### Step 1
BitBane encryption is done by encoding then they have applied a key and then the extraSecurity.
we can get the flag by directly reversing those steps.
#### Step 2
*coming from back *
* step 3 is easy as if idx = i+2 integers in vectors are simple bitwise NOTed
* step 2 we know the key (VishwaCTF) and it is used to XOR, so send the encrypted text to the same function we can get the decrypted content
* step 1 this was the hardest part and brute force is the only way i found we should search in all charecters for every integer in the vector

#### FLAG
VishwaCTF{BIT5_3NCRYPT3D_D3CRYPTED_M1ND5_D33PLY_TE5T3D}