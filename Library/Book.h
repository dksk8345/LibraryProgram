#pragma once

#ifndef _BOOK_H_
#define _BOOK_H_

char line[MAX];
int Toeic;
int Apple;
int English;
int Math;
int Speak;

char Book1[MAX];
char Book2[MAX];
char Book3[MAX];
char Book4[MAX];
char Book5[MAX];

void init();
void PrintBooks();
void BookSet();
void Bookloan();

#endif