#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int id;
	char* ime;
	char* prezime;
	float prosjek;
	int godina;
	char smjer[50];
} STUDENT;

void kreirajBazu(const char* const imeDat);
void dodajNovogStudenta(const char* const imeDat);
void ispisSvihIzDatoteke(const char* const imeDat);
void provjeriAlokaciju(void* p);
void ocistiBuffer();
void azurirajProsjekStudenta(const char* const imeDat); 
void obrisiStudentaPoID(const char* const imeDat);

#endif

