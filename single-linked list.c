#include <stdio.h>
#include <stdlib.h>

typedef struct structNode {
	int number;
	struct structNode* next;
} Node;

void pushNode(Node* head, int number) {
	Node* current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	Node* newNode = malloc(sizeof(Node));
	newNode->number = number;
	newNode->next = NULL;
	current->next = newNode;
}

void updateNodeData(Node* head, int findNumber, int numberForPush) {
	Node* current = head;
	int found = 0;
	while (current != NULL) {
		if (findNumber == current->number) {
			found = 1;
			current->number = numberForPush;
			break;
		}
		current = current->next;
	}
	if (found == 0) {
		pushNode(head, numberForPush);
	}
}

void deleteNode(Node* prev) {
    if (prev->next != NULL) {
        Node* temp = prev->next;
        prev->next = temp->next;
        free(temp);
    }
}

void printList(Node* head) {
	Node* current = head;
	printf("Your List:");
	while (current != NULL) {
		printf(" %d", current->number);
		current = current->next;
	}
	printf("\n");
}

void freeList(Node* head) {
	Node* current = head;
	while (current != NULL) {
		Node* temp = current;
		current = current->next;
		free(temp);
	}
}

int startNumber;
int numberForPush;
int numberForDelete;

int main(void) {
	Node* node1 = malloc(sizeof(Node));
	Node* node2 = malloc(sizeof(Node));
	Node* node3 = malloc(sizeof(Node));
	Node* node4 = malloc(sizeof(Node));

	node1->number = 1;
	node1->next = node2;

	node2->number = 2;
	node2->next = node3;

	node3->number = 3;
	node3->next = node4;

	node4->number = 4;
	node4->next = NULL;


	int startNumber;
	int findNumber;
	int numberForPush;
	int numberForDelete;

	while (1) {
		printList(node1);
		printf("1.Edit Node\n2.Delete Node\n3.Exit\n");
		scanf("%d", &startNumber);

		if (startNumber == 1) {
			printf("Find number: \n");
			scanf("%d", &findNumber);
			printf("Write number: \n");
			scanf("%d", &numberForPush);
			updateNodeData(node1, findNumber, numberForPush);
		}
		else if (startNumber == 2) {
			printf("Write number to delete: \n");
			scanf("%d", &numberForDelete);
			Node* current = node1;
			int found = 0;
			while (current->next != NULL) {
				if (current->next->number == numberForDelete) {
					deleteNode(current);
					found = 1;
					break;
				}
				current = current->next;
			}
			if (found == 0) {
				printf("Number not found\n");
			}
		}
		else if (startNumber == 3) {
			break;
		}
		else {
			printf("unknown command\n");
		}
		startNumber = 0;
	}

	freeList(node1);

	return 0;
}