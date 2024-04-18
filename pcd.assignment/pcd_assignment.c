#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#pragma warning(disable:4996)

void displayMenu();
void staffInformation();
void memberInformation();
void trainScheduling();
void ticketBooking();

int main() {
	int choice;

	do {
		displayMenu();

		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			staffInformation();
			break;

		case 2:
			memberInformation();
			break;

		case 3:
			trainScheduling();
			break;

		case 4:
			ticketBooking();
			break;

		case 5:
			printf("Exit the program.\n");
			break;

		default:
			printf("Invalid choice. Please try again.\n");
			break;
		}

	} while (choice != 5);

	return 0;
}

void displayMenu() {
	printf("==WELCOME TO TRAIN TICKETING SYSTEM====\n");
	printf("===========Menu===============\n");
	printf("1. Staff Information\n");
	printf("2. Member Information\n");
	printf("3. Train Scheduling\n");
	printf("4. Ticket Booking\n");
	printf("5. Exit\n");
	printf("==============================\n");
}

void staffInformation() {
	printf("You selected staff information system\n");
	printf
	return 0;
}

void memberInformation() {
	printf("You selected member information system.\n");
	return 0;
}

void trainScheduling() {
	printf("You selected train scheduling system.\n");
	return 0;
}

void ticketBooking() {
	("You selected ticket booking system.\n");
	return 0;
}