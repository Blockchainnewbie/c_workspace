/*
In diesem Programm haben wir eine Funktion swap, die zwei Zeiger auf int-Variablen erwartet. 
Die Funktion verwendet Zeiger, um den Inhalt der Variablen zu tauschen, auf die die Zeiger zeigen.

Beim Aufruf der Funktion swap(&num1, &num2) übergeben wir die Adressen der Variablen num1 und num2. 
Die Funktion verwendet dann diese Adressen, um die Werte der beiden Variablen zu tauschen. 
Dadurch werden die Werte von num1 und num2 im Hauptprogramm erfolgreich ausgetauscht, ohne dass explizit eine Rückgabe oder globale Variablen verwendet werden.

Wenn Sie dieses Beispiel ausführen, sehen Sie, dass die Ausgabe vor und nach dem Aufruf der Funktion swap 
unterschiedliche Werte für num1 und num2 zeigt, was den erfolgreichen Einsatz von Zeigern und Speicheradressen demonstriert.
*/

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Vor dem Austausch: num1 = %d, num2 = %d\n", num1, num2);

    // Übergeben der Adressen von num1 und num2 an die Funktion "swap"
    swap(&num1, &num2);

    printf("Nach dem Austausch: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
