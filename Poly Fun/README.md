# Poly Fun
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** Medium

## Description
Its a simple symmetric key encryption, I am sure you will be able to solve it (what do you mean the key looks weird)


## Steps
#### Step 1
**Decode the Key**: The encoded key is decoded using polynomial roots extraction. Each character in the encoded key corresponds to a polynomial, and the roots of these polynomials are calculated to obtain the original key.
#### Step 2
**AES Decryption**: The decrypted key is used to decrypt the encrypted flag using AES decryption with ECB mode, then decode it using Base64 to get back the flag


#### FLAG
VishwaCTF{s33_1_t0ld_y0u_1t_w45_345y}
