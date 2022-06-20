// Cviceni 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bird.h"
#include "Mammal.h"
#include "Fish.h"
#include "Number.h"
#include "Integer.h"
#include "ComplexNumber.h"
#include "RealNumber.h"

int main()
{
#pragma region TestCode

	//char* name = new char[5];
	//name[0] = 'K';
	//name[1] = 'e';
	//name[2] = 's';
	//name[3] = 'h';
	//name[4] = '\0';

 //   char* name1 = new char[5];
 //   name1[0] = 'b';
 //   name1[1] = 'e';
 //   name1[2] = 'a';
 //   name1[3] = 's';
 //   name1[4] = '\0';

 //   char* name2 = new char[5];
 //   name2[0] = 'm';
 //   name2[1] = 'a';
 //   name2[2] = 'm';
 //   name2[3] = '1';
 //   name2[4] = '\0';

 //   char* name3 = new char[5];
 //   name3[0] = 'b';
 //   name3[1] = 'i';
 //   name3[2] = 'r';
 //   name3[3] = '1';
 //   name3[4] = '\0';

 //   char* name4 = new char[5];
 //   name4[0] = 'b';
 //   name4[1] = 'i';
 //   name4[2] = 'r';
 //   name4[3] = '2';
 //   name4[4] = '\0';

 //   char* name5 = new char[5];
 //   name5[0] = 'f';
 //   name5[1] = 'i';
 //   name5[2] = 's';
 //   name5[3] = '1';
 //   name5[4] = '\0';

 //   char* name6 = new char[5];
 //   name6[0] = 'f';
 //   name6[1] = 'i';
 //   name6[2] = 's';
 //   name6[3] = '2';
 //   name6[4] = '\0';
	//Bird bird(5, name);
	//bird.SetFeatherColor(Green);
	//bird.GetInfo();
	//bird.Eat(20);
	//bird.GetInfo();
	//bird.Eat(1);
	//bird.GetInfo();

	//Beast beast1;
	//Beast* beast2 = new Beast(name1);

	//Mammal mam1(10, name);
	//Mammal *mam2 = new Mammal(11, name2);

	//Bird bird1(20, name3);
	//Bird* bird2 = new Bird(21, name4);

	//Fish fish1(30, name5);
	//Fish* fish2 = new Fish(31, name6);

	//beast1.Eat(30);
	//beast2->Eat(15);
	//beast1.Poop(1);
	//beast2->Poop(3);
	//beast1 = *beast2;
	//beast1.Poop(10);
	//*beast2 = beast1;

	Number a(20);
	Number b(3);
	Number c = a - b;

	Integer i1(50);
	Integer i2(110);

	RealNumber rn1(1.05);
	RealNumber rn2(135.15);

	ComplexNumber cn1(15.32, 16.24);
	ComplexNumber cn2(24.50, 24.16);


	i1 += cn1;
	i1 += rn2;
	rn1 = rn2 + cn2;
	i2 = i1 + a;

	cout << " i1: " << i1.GetNumber() << "  i2: " << i2.GetNumber() << "   a: " << a.GetNumber() << endl;

	cout << "cn2 num = " << cn2.GetNumber() << "   cn2 imagine = " << cn2.GetImagine() << endl;
	cout << "cn1 num = " << cn1.GetNumber() << "   cn1 imagine = " << cn1.GetImagine() << "\n   a num = " << a.GetNumber() << endl;
	cn2 -=cn1;
	cout << "cn1 num = " << cn1.GetNumber() << "   cn1 imagine = " << cn1.GetImagine() << endl;
	cout << "cn2 num = " << cn2.GetNumber() << "   cn2 imagine = " << cn2.GetImagine() << endl;

#pragma endregion


}
