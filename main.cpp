#include <iostream>
#include " teaSet.h"//подключаем заголовочный файл, где объявлена структура и интерфейсы функций
using namespace std;

void ExeptionFopen(char*s)
{
 printf("\n File %s\t error open\n",s);
}

int main()
{
char c, infname[255],outfname[256];//имена файлов для ввода и вывода
    File inf,outf;
teaSet* t = 0;//указатель на структуру
t = init(t); //выделяет память под структуру teaSet и инициализирует ее значениями по умолчанию
do
{
cout << "for get case input number and press enter" << endl;
cout << " 0 - exit" << endl;
cout << " 1 - input elements from keyboard" << endl;
cout << " 2 - input elements from file" << endl;
cout << " 3 - output elements to screen" << endl;
cout << " 4 - output elements to file" << endl;
cin.get(c);
switch (c)
{
case '1':
{
cout << "input elements" << endl;
cout << "sportName infos" << endl;
input(t);
cin.clear();
cin.ignore(32767,'\n');
break;
}
case '2':
{
cout << "input file name for input" << endl;
cin>>infname;
cout<<infname;
if ((inf = fopen(infname, "w+")) == NULL)
{
ExeptionFopen(infname);
return 1;
}
input(inf, t);
fclose(inf);
cin.clear();
cin.ignore(32767,'\n');
break;
}
case '3':
{
cout << "elements:" << endl;
output(t);
cin.clear();
cin.ignore(32767,'\n');
break;
}
case '4':
{
cout << "input file name for output" << endl;
cin>>outfname;
//if ((outf = fopen(outfname, "w")) == NULL)
{
ExeptionFopen(outfname);
return 1;
}
//output(outf, t);
//fclose(outf);
//cin.clear();
//cin.ignore(32767,'\n');
break;
}
}
} while (c != '0');
dispose (t);
return 0;
}
