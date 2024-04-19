#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#pragma warning(disable:4996)

// Main
void staffInformation();
void memberInformation();
void trainScheduling();
void ticketBooking();

// Staff Information
void addStaff();
void displayStaff();

// Member Information

// Train Scheduling

// Ticket Booking

int main() {
	int choice;

	do {
		printf("====WELCOME TO TRAIN TICKETING SYSTEM====\n\n");
		printf("===========Menu===============\n");
		printf("1. Staff Information\n");
		printf("2. Member Information\n");
		printf("3. Train Scheduling\n");
		printf("4. Ticket Booking\n");
		printf("5. Exit\n");
		printf("==============================\n\n");

		printf("Enter your choice: ");
		rewind(stdin);
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

// Main
void staffInformation() {
	printf("You have selected staff information system.\n\n");
	int option;
	do {
		printf("\n\t- STAFF INFORMATION MENU -\n\n");
		printf("===============================================\n");
		printf(" 1. Add Staff Login Account\n");
		printf(" 2. Display Staff Information\n");
		printf(" 3. Modify Staff Account And Information\n");
		printf(" 4. Search Staff Information\n");
		printf(" 5. Delete Staff Account\n");
		printf(" 6. Back to Main Menu\n");
		printf("===============================================\n\n");
		printf("Please choose your selection: ");
		rewind(stdin);
		scanf("%d", &option);
		printf("\n\n");
		switch (option) {
		case 1:
			addStaff();
			break;
		case 2:
			displayStaff();
			break;
		case 3:
			modifyStaff();
			break;
		case 4:
			searchStaff();
			break;
		case 5:
			deleteStaff();
			break;
		case 6:
			break;
		default:
			printf("Invalid choice. Please select again.\n\n");
		}
	} while (option != 6);
	return 0;
}

void memberInformation() {
	printf("You have selected member information system.\n");
	return 0;
}

void trainScheduling() {
	printf("You have selected train scheduling system.\n");
	return 0;
}

void ticketBooking() {
	("You have selected ticket booking system.\n");
	return 0;
}

// Staff Information


// Member Information


// Train Scheduling


// Ticket Booking
