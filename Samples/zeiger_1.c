// Hier sind einige wichtige Punkte zu beachten:

// Zeiger sind Variablen, die Speicheradressen speichern können. Sie werden durch den '*' Operator deklariert (z.B., int *ptr).
// & wird verwendet, um die Adresse einer Variablen zu erhalten (z.B., &num gibt die Adresse von num zurück).
// * wird verwendet, um auf den Wert zuzugreifen, der an einer bestimmten Speicheradresse gespeichert ist (z.B., *ptr gibt den Wert zurück, auf den ptr zeigt).
// Wenn Sie einen Wert über den Zeiger ändern (z.B., *ptr = 20), ändert sich der Wert der zugrunde liegenden Variablen (num im obigen Beispiel).

/*
    Zeiger bieten mehrere Vorteile und sind ein leistungsstarkes Konzept in der Programmierung. Hier sind einige der wichtigsten Vorteile von Zeigern:

    Effiziente Speichernutzung: Zeiger ermöglichen es, den Speicherplatz effizient zu nutzen, indem sie die direkte Adresse eines Wertes oder einer Datenstruktur halten, anstatt eine Kopie des gesamten Inhalts zu erstellen. Dadurch spart man Speicherplatz und reduziert die Belastung des Systems.

    Direkter Zugriff auf den Speicher: Mit Zeigern kann man direkt auf den Speicher zugreifen und die Daten in der Speicherzelle bearbeiten, ohne Kopien oder zusätzliche Variablen zu verwenden. Dadurch wird die Leistung verbessert, insbesondere bei Operationen mit großen Datenstrukturen.

    Dynamische Speicherzuweisung: Zeiger sind entscheidend, um dynamisch Speicher zu reservieren, wie z. B. bei der Verwendung von dynamischen Arrays oder der Erstellung komplexer Datenstrukturen zur Laufzeit. Dies ermöglicht die effiziente Verwaltung von Ressourcen und unterstützt die Flexibilität in der Programmierung.

    Effiziente Funktionen und Rückgabewerte: Zeiger werden oft in Funktionen verwendet, um mehrere Werte zurückzugeben oder komplexe Datenstrukturen zu manipulieren, ohne die Effizienz durch das Kopieren von Werten zu beeinträchtigen.

    Effiziente Datenstrukturen: Zeiger spielen eine wichtige Rolle bei der Implementierung effizienter Datenstrukturen wie verknüpfter Listen, Bäume und Graphen. Durch Verwendung von Zeigern können Knoten oder Elemente miteinander verbunden werden, was eine schnellere und effizientere Verarbeitung ermöglicht.

    Anpassungsfähigkeit: Zeiger erlauben es, auf unterschiedliche Datenstrukturen oder Speicherbereiche zuzugreifen und sie zu manipulieren, was zu flexibleren und wiederverwendbaren Code führt.

*/
#include <stdio.h>

int main() {
    int num  = 10; // Eine Variable "num" mit dem Wert 10

    int *ptr; // Deklaration eines Zeigers "ptr"

    ptr = &num; // "ptr" wird auf die Adresse von "num" gesetzt

    // Ausgabe der Werte von "num", "*ptr" und der Adressen von "num" und "ptr"
    printf("Wert von num: %d\n", num);
    printf("Wert von *ptr: %d\n", *ptr);
    printf("Adresse von num: %p\n", &num);
    printf("Adresse von ptr: %p\n", ptr);

    // Ändern des Werts von "num" über den Zeiger "ptr"
    *ptr = 20;
    
    // Ausgabe des aktualisierten Werts von "num"
    printf("Neuer Wert von num: %d\n", num);

    return 0;
}
