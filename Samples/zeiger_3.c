/*Hier ist ein fortgeschrittener Programmcode in C, der Zeiger verwendet, um eine einfache dynamische Datenstruktur, 
eine verkettete Liste, zu implementieren. Die verkettete Liste besteht aus Knoten, die eine beliebige Anzahl von Ganzzahlen speichern können. 
Wir werden Funktionen für das Einfügen, Löschen und Anzeigen der Liste erstellen.

Dieser Code zeigt, wie man eine verkettete Liste mithilfe von Zeigern erstellt, Elemente einfügt und 
löscht sowie die Liste anzeigt und den Speicher freigibt. Verkettete Listen sind eine häufige Datenstruktur 
in der Programmierung, und hier verwenden wir Zeiger, um die Verknüpfung zwischen den 
Knoten herzustellen und auf die Elemente der Liste zuzugreifen.

Bitte beachten Sie, dass bei der Verwendung von dynamischem Speicher wie in diesem Beispiel die Verantwortung besteht, 
den Speicher ordnungsgemäß freizugeben, um Speicherlecks zu vermeiden.*/

#include <stdio.h>
#include <stdlib.h>

// Struktur für den Knoten der verketteten Liste
struct Node {
    int data;           // Datenwert des Knotens
    struct Node* next;  // Zeiger auf den nächsten Knoten
};

// Funktion zum Einfügen eines neuen Knotens am Anfang der Liste
void insertNode(struct Node** head, int value) {
    // Speicher für den neuen Knoten reservieren
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Datenwert des neuen Knotens setzen
    newNode->data = value;

    // Den nächsten Zeiger des neuen Knotens auf den aktuellen Kopf der Liste setzen
    newNode->next = *head;

    // Den Kopf der Liste auf den neuen Knoten umleiten, da dieser nun der erste Knoten ist
    *head = newNode;
}

// Funktion zum Löschen eines Knotens mit einem bestimmten Wert aus der Liste
void deleteNode(struct Node** head, int value) {
    // Zeiger auf den aktuellen und vorherigen Knoten initialisieren
    struct Node* current = *head;
    struct Node* prev = NULL;

    // Den Knoten mit dem gesuchten Wert suchen
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }

    // Überprüfen, ob der Knoten mit dem Wert gefunden wurde
    if (current == NULL) {
        printf("Knoten mit Wert %d nicht gefunden.\n", value);
        return;
    }

    // Den vorherigen Knoten umleiten, um den gefundenen Knoten zu überspringen
    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    // Speicher für den gefundenen Knoten freigeben
    free(current);
}

// Funktion zum Anzeigen der verketteten Liste
void displayList(struct Node* head) {
    // Zeiger auf den aktuellen Knoten initialisieren
    struct Node* current = head;

    // Liste durchlaufen und die Datenwerte ausgeben
    printf("Verkettete Liste: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Funktion zum Freigeben des Speichers der verketteten Liste
void freeList(struct Node** head) {
    // Zeiger auf den aktuellen Knoten und den nächsten Knoten initialisieren
    struct Node* current = *head;
    struct Node* next;

    // Liste durchlaufen und den Speicher für jeden Knoten freigeben
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    // Den Kopf der Liste auf NULL setzen, um zu kennzeichnen, dass die Liste leer ist
    *head = NULL;
}

int main() {
    // Zeiger auf den Kopf der Liste initialisieren
    struct Node* list = NULL;

    // Knoten in die Liste einfügen
    insertNode(&list, 10);
    insertNode(&list, 20);
    insertNode(&list, 30);

    // Liste anzeigen
    displayList(list);

    // Knoten mit Wert 20 löschen
    deleteNode(&list, 20);
    displayList(list);

    // Speicher für die gesamte Liste freigeben
    freeList(&list);

    return 0;
}
