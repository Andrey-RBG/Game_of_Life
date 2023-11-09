To make game functional, download "instructions.h" and "Game_of_Life.c".
instructions contains functions, which is made to keep the main code easier to read.

What dose the "functions.h" contains:
1. neighbour function. This function was desinghed to find the number of neighbours of each point.
2. *canceled* checker function. This function was desinghed to cheak, if the death of the current point 
can influence the others point around, to prevent the error situation.

How dose the programm work?
The game of life does not require human participation, so the program is given a fixed nested list (called yard) as input, which represents the game field.
The first cycle, line 21-22, is designed to completely go through all points on the field in order 
to find the number of neighbors for each point; all neighbors (their number) are written into 
the nested list numbers, in order to then use it to kill or revive points on the field.




Чтобы игра заработала, скачайте "instructions.h" и "Game_of_Life.c".
"instructions.h" содержат функции, которые сделаны для облегчения чтения основного кода.

Какую дозу содержит "functions.h":
1. функция neighbour. Эта функция была разработана для поиска количества соседей каждой точки.
2. *отменена* функция checker. Эта функция была разработана для мошенничества, если смерть текущей точки
может влиять на другие точки вокруг, чтобы предотвратить ошибочную ситуацию.

Игра в жизнь не предпалагает участие в ней человека, потому на вход программе выдаётся 
фиксированный вложенный список (названный yard), что представляет из себя поле игры. 
Первый цикл 21-22 строка, создана для полного прохода по всем точкам на поле, чтобы для 
каждой точки найти количество соседей, все соседи (их количество) записываются
 во вложенный список numbers, чтобы потом по нему убить или оживить точки на поле.