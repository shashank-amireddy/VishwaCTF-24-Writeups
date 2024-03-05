# Happy Valentine's Day
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** Easy

## Description
My girlfriend and I captured our best moments of Valentine's Day in a portable graphics network. But unfortunately I am not able to open it as I accidentally ended up encrypting it. Can you help me get my memories back?


## Steps
#### Step 1
In this challenge image is Xored with a key which is first 8 Bytes. The first 8 Bytes of a PNG file is nothing but the header itself. hence **0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A** is the key 
#### Step 2
Know we know the key so the reverse operation of xor is xor itself. pass the encrypted file as parameter and we get the image with flag in it.


#### FLAG
VishwaCTF{h3ad3r5_f0r_w1nn3r5}
