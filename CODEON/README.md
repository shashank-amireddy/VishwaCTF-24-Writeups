# CODEON
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** --


## Steps
#### Step 1
**Identifying The operation**: The matrices P and Q were multiplied elementally and then each element was taken mod by 118(Total Nmber of elements in periodic table).
#### Step 2
**Performing same operation for A and B**: After performing the same operation for A and B and maping the numbers with periodic table. we get a matrix with "AMINO ACIDS" in the last column.
#### Step 3
**Using bifid cipher**: Then we use a bifid cipher decoder with the key amino acids to translate the codons. the use DNA cipher to get back the flag

#### FLAG
VishwaCTF{CALLERGIFT}
