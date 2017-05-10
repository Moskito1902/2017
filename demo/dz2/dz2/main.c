//
//  main.c
//  dz2
//
//  Created by Slava Gubar on 2/21/17.
//  Copyright © 2017 Slava Gubar. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dk_tool.h"

int main(int argc, const char *argv[])
{
	DK_PhoneBook *theBook = createPhoneBook(10);
	
	FILE *theFile = fopen("data.json", "w");
	
	test_multiply("test1", 5, 6, 7);

	test_multiply("test2", 5);
	test_multiply("test3");
	
	char theName[] = "Viacheslav2";
	char thePhone[] = "1234567";
	
	addNoteToPhoneBook(theBook, "Viacheslav", "123456");
	addNoteToPhoneBook(theBook, theName, thePhone);
	addNoteToPhoneBook(theBook, "Mama", "9");
	addNoteToPhoneBook(theBook, "Papa", "8");
	addNoteToPhoneBook(theBook, "Mama1", "7");
	addNoteToPhoneBook(theBook, "Papa1", "6");
	addNoteToPhoneBook(theBook, "Mama2", "5");
	addNoteToPhoneBook(theBook, "Papa2", "4");
	
	writePhoneBook(theFile, theBook);
	
	printf ("Before sorting ...");
	printPhoneBook(theBook);

	sortPhoneBook(theBook);

	printf ("After sorting ...");
	printPhoneBook(theBook);
	
	DK_Note theNote = theBook->notes[1];
	
	printf("The second element: name - %s, phone - %s\n", theNote.name, theNote.phone);
	
	destroyPhoneBook(theBook);
	
	fflush(theFile);
	fclose(theFile);
	
	return 0;
}

