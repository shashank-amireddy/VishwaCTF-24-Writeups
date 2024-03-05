# Lets smother the King!
* **Event:** VishwaCTF
* **Problem Type:** Crypto
* **Point Value / Difficulty:** Medium
* **(Optional) Tools Required / Used:** [Lichess](lichess.org)

## Description
In my friend circle, Mr. Olmstead and Mr. Ben always communicate with each other through a secret code language that they created, which we never understand. Here is one of the messages Mr. Ben sent to Mr. Olmstead, which I somehow managed to hack and extract it from Ben's PC. However, it's encrypted, and I don't comprehend their programming language. Besides being proficient programmers, they are also professional chess players. It appears that this is a forced mate in a 4-move chess puzzle, but the information needs to be decrypted to solve it. Help me out here to solve the chess puzzle and get the flag.

Flag format: VishwaCTF{move1ofWhite_move1ofBlack_move2ofWhite_move2ofBlack_move3ofWhite_move3ofBlack_move4ofWhite}.


## Steps
#### Step 1
If we search Olmstead cipher in google we get about a very strange programming language called "Malbolge".
#### Step 2
use any online interpreter for it we get **White- Ke1,Qe5,Rc1,Rh1,Ne6,a2,b3,d2,f2,h2 Black- Ka8,Qh3,Rg8,Rh8,Bg7,a7,b7,e4,g2,g6,h7** as output.
#### Step 3
I have used [Lichess](lichess.org) to plot the moves and get back the last moves.

#### FLAG
VishwaCTF{Nc7+_Kb8_Na6+_Ka8_Qb8+_Rxb8_Nc7#}







