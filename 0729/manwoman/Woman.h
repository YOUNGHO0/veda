#include "Human.h"

class Woman :public Human{

public:
	Woman(string name, int age);
	virtual void show() const;
	~Woman();

};