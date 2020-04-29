//
//   teaSet.h
//  Protocole de compétition d'athlétisme
//
//  Created by Huncho on 28/04/2020.
//  Copyright © 2020 TIERE. All rights reserved.
//

#pragma once
#include <cstdio>

struct teaSet{ //Объявление структуры
 //Объявление полей структуры
char* Name; //Название
char* address_sportman; //адреса спортсмена
char* address_winning_place; // адрес места проведения соревнований
char* email; // e-mail
char* date ;// дата
int cell_phone; //телефона
double distance;
double time;
 };
typedef  FILE *File;

 //Объявляем новый тип данных – указатель на файловую переменную

teaSet* init(teaSet* t); // выделяет память под структуру teaSet
 // и инициализирует ее значениями по умолчанию
void input(teaSet* t); // ввод элементов структуры с клавиатуры
void  input(File f, teaSet* t); // ввод элементов структуры из файла
void output(teaSet* t); // вывод элементов структуры на экран
void output(File f, teaSet* t);// вывод элементов структуры в файл
void dispose (teaSet* t); // освобождает выделенную память под структуру
teaSet* copy(teaSet* t);
