#include <iostream>
using namespace std;

/*
* 
* патерн проэктирования мост (bridge) 
* суть патерна в разделении абстракции и реальации
* один большой класс делится на 2 .где первый класс включает в себя обьект второго
* 
* патерн структурный
*/
class Style
{
public:
	virtual void getStyle() = 0;
};
class NewYearStyle : public Style
{
public:
	virtual void getStyle() override
	{
		cout << "MERRY CRISMAS" << endl;
	}
};
class Page
{
protected:
	Style* st;
public:
	Page(Style * newst)
	{
		st = newst;
	}
	virtual void showConected() = 0;
};
class MainPage : public Page
{
public:
	MainPage(Style* st) :Page(st)
	{

	}
	virtual void showConected() override
	{
		cout << "я главная страница, мой стиль - ";
		st->getStyle();
	}
};


int main()
{

}