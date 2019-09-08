#include <stdio.h>
/*Напишите программу, которая выводит на экран числа от 1 до 100.
При этом вместо чисел, кратных трем, программа должна выводить слово «Fizz»,
а вместо чисел, кратных пяти — слово «Buzz».
Если число кратно и 3, и 5, то программа должна выводить слово «FizzBuzz»
*/
int main (){
	int c3, c5;
	for (int i = 1; i < 101; i++){
		c3 = i % 3; c5 = i % 5;
		if (c3 && c5) printf ("%d ", i);
		if (!c3 && !c5) printf("FizzBuzz");
			else if (!c3) printf ("Fizz ");
				else if (!c5) printf ("Buzz ");
	}
	return 0;
}
