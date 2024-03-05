# BitBane - Teyvat Tales
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** Medium
* **(Optional) Tools Required / Used:** [Cryptii](https://cryptii.com/pipes/enigma-machine)

## Description
All tavern owners in Mondstadt are really worried because of the frequent thefts in the Dawn Winery cellars. The Adventurers’ Guild has decided to secure the cellar door passwords using a special cipher device. But the cipher device itself requires various specifications….which the guild decided to find out by touring the entire Teyvat.

PS: The Guild started from the sands of Deshret then travelled through the forests of Sumeru and finally to the cherry blossoms of Inazuma


## Steps
#### Step 1
In sources we get a script file (script.js) which has all the answers for 4 puzzles 
*    1. enigma m3
*    2. ukw c
*    3. rotor1 i p m rotor2 iv a o rotor3 vi i n
*    4. vi sh wa ct fx
#### Step 2
After submiting this we get a picture with cipher text
    CYNIPJ_RE_LSKR-YAZN_MBSJ

#### Step 3
The solutions for first 4 puzzles give us the exact specifications of the enigma machine, I have used [Cryptii](https://cryptii.com/pipes/enigma-machine)

#### Step 4
*you will get:*  
bewar eofto nedea fbard     
beware of tonedeaf bard

#### FLAG
VishwaCTF{beware_of_tone-deaf_bard}
