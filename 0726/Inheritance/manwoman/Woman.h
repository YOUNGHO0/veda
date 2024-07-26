#include "Human.h"

class Woman :public Human{

public:
	Woman(string name, int age);
	void show() const;
	~Woman();

};