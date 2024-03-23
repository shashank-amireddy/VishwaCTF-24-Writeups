# Intellectual Heir
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** --

## Steps
#### Step 1
**Identifying the encryption**: The code looks very similar to rsa but it's messed up in the end. roughly we can understand that it takes the values of p and q in binary and in one file store sine values of it and in other file store cos values of it.
#### Step 2
**Getting P and Q back**: Now it's easy to get back p and q. just convert the numbers into 1's and 0's then conver them to integer and you get the values of P and Q.
#### Step 2
**Decrypting**: Now it's easy to solve as we have everything and it's regular RSA.

#### FLAG
VishwaCTF{Y0U_@R3_T#3_W0RT#Y_OF_3}
