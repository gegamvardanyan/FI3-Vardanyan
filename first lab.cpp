#include <iostream>
#include <string>

using namespace std;

class THuman {
private:
	string name;
public:
	void SetName(string _name) {
		name = _name;
	}
	string GetName() {
		cout << "my name is " << name << endl;
		return name;
	}
	int height;
	int weight;
	THuman() {
		height = 0;
		weight = 0;
	}
	virtual void homeland() = 0;

	
	void Print() {
		cout << "weight = " << weight << "\t" << "height = " << height << endl << endl;
	}

};

class TAsian : public THuman {
private:
	string EyeShape;
public:
	void singularity() {
		string EyeShape = "my singularity is narrow eyes";
		cout << EyeShape << endl;
	}

	TAsian() {

	}
	TAsian(int _weight, int _height) {
		weight = _weight;
		height = _height;
	}

	void homeland() override {
		cout << "i am from Asia" << endl;
	}
};

class TJapanese : public TAsian {
public:
	TJapanese() {

	}
	TJapanese(int _weight, int _height);
	void homeland() override {
		cout << "i am from Japan" << endl;
	}
};

class TChinese : public TAsian {
public:
	TChinese() {

	}
	TChinese(int _weight, int _height);
	void homeland() override {
		cout << "i am from China" << endl;
	}
};

class TNegroid : public THuman {
private:
	string ScinColor;
public:
	void scin() {
		string ScinColor = "my scin is black. it is my singularity :)";
		cout << ScinColor << endl;
	}
	TNegroid() 
	{
	}
	TNegroid(int _weight, int _height) {
		weight = _weight;
		height = _height;
	}
	void homeland() override {
		cout << "i am from Africa" << endl;
	}
};

class TAfrican : public TNegroid {

public:
	TAfrican() {

	}
	TAfrican(int _weight, int _height);
	void homeland() override {
		cout << "i am from African continent" << endl;
	}

};

class TSouthAmerican : public TNegroid {
public:
	TSouthAmerican() {
	}
	TSouthAmerican(int _weight, int _height);
	void homeland() override {
		cout << "i am from South American continent. From Brazil" << endl;
	}
};

class TEuropean : public THuman {
private:
	string ColorOfHair;
public:
	void hair() {
		string ColorOfHair = "my hair are blond";
		cout << ColorOfHair << endl;
	}

	TEuropean() {

	}
	TEuropean(int _weight, int _height) {
		weight = _weight;
		height = _height;
	}

	void homeland() override {
		cout << "i am from European continent" << endl;
	}

};


int main() {
	TAsian man(70, 165);
	man.Print();
	man.homeland();
	man.SetName("Alex");
	man.GetName();
	cout << "_______________________________________________";
	cout << "\n";

	TNegroid man2(90, 185);
	man2.Print();
	man2.homeland();
	man2.SetName("Marco");
	man2.GetName();
	man2.scin();
	cout << "_______________________________________________";
	cout << "\n";

	TJapanese woman(55, 160);
	woman.Print();
	woman.homeland();
	woman.SetName("Micassa");
	woman.GetName();
	woman.singularity();
	cout << "_______________________________________________";
	cout << "\n";

	TChinese kid(45, 145);
	kid.Print();
	kid.homeland();
	kid.SetName("Kevin");
	kid.GetName();
	kid.singularity();
	cout << "_______________________________________________";
	cout << "\n";

	TAfrican man3(180, 95);
	man3.Print();
	man3.homeland();
	man3.SetName("Auba");
	man3.GetName();
	man3.scin();
	cout << "_______________________________________________";
	cout << "\n";
	
	TSouthAmerican man4(175, 82);
	man4.Print();
	man4.homeland();
	man4.SetName("Lionel");
	man4.GetName();
	man4.scin();
	cout << "_______________________________________________";
	cout << "\n";

	TEuropean woman2(65, 170);
	woman2.Print();
	woman2.homeland();
	woman2.SetName("Maria");
	woman2.GetName();
	woman2.hair();
	cout << "_______________________________________________";
	cout << "\n";
}

TJapanese::TJapanese(int _weight, int _height)
	{
		weight = _weight;
		height = _height;
	}

TChinese::TChinese(int _weight, int _height)
	{
		weight = _weight;
		height = _height;
	}

TAfrican::TAfrican(int _weight, int _height)
	{
		weight = _weight;
		height = _height;
	}

TSouthAmerican::TSouthAmerican(int _weight, int _height)
{
	weight = _weight;
	height = _height;
}
