#include "Polynomial.h"
#include "Birthday.h"
#include "Rectangle.h"
#include "SmartHome.h"
#include "Pet.h"
#include "Music.h"
void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	/*
	Polynomial a, b, c;
	
	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");
	*/

	/*
	// 71p. 객체 배열
	Student eei[10];
	strcpy_s(eei[2].name, "HyungGi Jo");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("이름은 : %s, %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
	*/

	/*
	// 72p. 참조형 또는 레퍼런스형
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	swap_(a, b);
	printf("swap 호출 후 , a = %d, b = %d", a, b);
	return 0;
	*/

	/*
	Rectangle r1(4, 5);
	printf("rectangle 1 Area : %lf\n", r1.getArea());					// printf 사용
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;	// iostream의 cout 사용
	std::cout << "Is square?" << r1.isSquare() << std::endl;
	*/

	/*
	SmartHome myHome("홍길동", 23, 40, true);
	myHome.printStatus();
	myHome.setHumidity(60);
	myHome.setSecurity(false);
	myHome.printStatus();
	*/
	/*
	Pet myPet("Lucky", 5, "dog");
	cout << "My pet name is " << myPet.getName() << endl;
	cout << "My pet age is " << myPet.getAge() << endl;
	Puppy myPuppy("Kong", 4, "dog", "Puddle");
	cout << "My pet name is " << myPuppy.getName() << endl;
	cout << "My pet age is " << myPuppy.getAge() << endl;
	*/

	// Music Streaming Service 생성
	MusicStreamingService myService("MyMusic");
	myService.addMusic("OMG", "NewJeans", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("VIBE", "Taeyang", "Album", 2023);
	myService.addMusic("ShutDown", "BlackPink", "BornPink", 2022);

	// Search for music by title
	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;
	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << " by " << result->getArtist() << endl;
	}
	
	// Search for music by artist
	string artist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;
	vector<Music*> artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}

	}
	else {
		cout << "Not Found" << endl;

	}
	return 0;

}

