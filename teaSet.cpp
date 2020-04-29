//
//  teaSet.cpp
//  Protocole de compétition d'athlétisme
//
//  Created by Huncho on 28/04/2020.
//  Copyright © 2020 TIERE. All rights reserved.
//
#include <iostream>
#include <string.h>
#include<stdio.h>
#include " teaSet.h"
//#include "validator.h"
//подключаем заголовочный файл, где объявлена структура и интерфейсы функций
using namespace std;
teaSet* init(teaSet* t) //выделяет память под структуру teaSet и инициализирует ее значениями по
//умолчанию. t – указатель на структуру teaSet
{
    t=new teaSet; //выделяется память под переменную типа teaSet, адрес которой присваивается t.
    //Для обращения к полю структуры через указатель используем оператор стрелка ->
    t->Name="\0";
    t->address_sportman="\0";//инициализация пустого стринга нуль-литерой
    t->address_winning_place="\0";
    
    t->email="\0";
    t->date="\0";
    t->cell_phone=0;
    t->distance=0;
    t->time=0;
    return t;
}

void input(teaSet* t)//ввод элементов структуры с клавиатуры

{
    char buf1[255],buf2[255],buf3[255],buf4[255],buf5[255]; //размер строки заранее неизвестен, для чтения стрингов будем использовать
    //промежуточные буферы – массивы типа char buf1[256],buf2[256]
    
    printf("name: ");
    scanf("%s",buf1);
    t->Name=new char[strlen(buf1)+1];
    strcpy(t->Name, buf1);
    
    printf("address_sportman: ");
    scanf("%s",buf2);
    t->address_sportman=new char[strlen(buf2)+1];
    strcpy(t->address_sportman, buf2);
    
    printf("address_winning_place: ");
    scanf("%s",buf3);
    t->address_winning_place=new char[strlen(buf3)+1];
    strcpy(t->address_winning_place, buf3);
    
    printf("email: ");
    scanf("%s",buf4);
    t->email=new char[strlen(buf4)+1];
    strcpy(t->email, buf4);
    
    printf("date: ");
    scanf("%s",buf5);
    t->date=new char[strlen(buf5)+1];
    strcpy(t->date, buf5);
    
    printf("cell phone: ");
    scanf("%d", &t->cell_phone);
    printf("distance:");
    scanf("%lf", &t->distance);
    printf("time:");
    scanf("%lf", &t->time);
    
   
    
}

void input(File f, teaSet* t)
{
    
    char buf1[256],buf2[256],buf3[256],buf4[256],buf5[256]; //размер строки заранее неизвестен, для чтения стрингов будем использовать
    //промежуточные буферы – массивы типа char buf1[256],buf2[256]
    
    printf("\nname: ");
    scanf("%s",buf1);
    t->Name=new char[strlen(buf1)+1];
    strcpy(t->Name, buf1);
    
    printf("address_sportman: ");
    scanf("%s",buf2);
    t->address_sportman=new char[strlen(buf2)+1];
    strcpy(t->address_sportman, buf2);
    
    printf("address_winning_place: ");
    scanf("%s",buf3);
    t->address_winning_place=new char[strlen(buf3)+1];
    strcpy(t->address_winning_place, buf3);
    
    printf("email: ");
    scanf("%s",buf4);
    t->email=new char[strlen(buf4)+1];
    strcpy(t->email, buf4);
    
    printf("date: ");
    scanf("%s",buf5);
    t->date=new char[strlen(buf5)+1];
    strcpy(t->date, buf5);
    
    printf("cell phone: ");
    scanf("%d", &t->cell_phone);
    printf("distance:");
    scanf("%lf", &t->distance);
    printf("time:");
    scanf("%lf", &t->time);
    
    fprintf(f," name: %s\n address_sportman: %s\n address_winning_place: %s\n email: %s\n date: %s\n cell_phone: %d\n distance:%f\n time: %f\n",t->Name,t->address_sportman,t->address_winning_place,t->email,t->date,t->cell_phone,t->distance,t->time);
    
    
}

void output(teaSet* t) //вывод элементов структуры на экран
{
    cout<<"name: "<<t->Name<<endl;
    
    cout<<"address_sportman: "<<t->address_sportman<<endl;
    
    cout<<"address_winning_place:"<<t->address_winning_place<<endl;
    cout<<"email: "<<t->email<<endl;
    cout<<"date: "<<t->date<<endl;
    cout<<"cell phone: "<<t->cell_phone<<endl;
    cout<<"distance: "<<t->distance<<" sec"<<endl;
    cout<<"time: "<<t->time<<" min"<<endl;
    
    
}
//цену печатаем с точностью до копеек, поэтому спецификатор формата четвертого поля содержит «.2»

void output(FILE f,teaSet* t) //вывод элементов структуры на экран
{
    printf("%s %s %s %s %s %d %lf %lf", t->Name,t->address_sportman,t->address_winning_place, t->email,t->date, t->cell_phone, t->distance, t->time);
}

void dispose (teaSet* t) // Освобождает выделенную память под структуру
{
    if(t)
    delete [] t->Name;
    delete [] t->address_sportman;
    delete [] t->address_winning_place;
    delete [] t->email;
    delete [] t->date;
    delete t;
    
} // Освобождаем выделенную память под структур

teaSet* copy(teaSet* t){
    {
        teaSet* r=init(r);
        
        r->Name=new char[strlen (t->Name)+1] ;
        strcpy(r->Name,t->Name);
        
        r->address_sportman=new char[strlen (t->address_sportman)+1] ;
        strcpy(r->address_sportman,t->address_sportman);
        
        r->address_winning_place=new char[strlen (t->address_winning_place)+1] ;
        strcpy(r->address_winning_place,t->address_winning_place);
        
        r->email=new char[strlen (t->email)+1] ;
        strcpy(r->email,t->email);
        
        r->date=new char[strlen (t->date)+1] ;
        strcpy(r->date,t->date);
        
        r->cell_phone=t->cell_phone;
        r->time=t->time;
        r->distance=t->distance;
        
        return r;}
}


