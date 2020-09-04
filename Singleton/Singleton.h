#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
private:
	Singleton() = default;
	static Singleton* instance;
	int var = 0;
public:
	static Singleton* getInstance(); // --> This method must be static
	void setVar(int _var);
	int getVar();
	void print();
	~Singleton() = default;
};

#endif // !SINGLETON_H

