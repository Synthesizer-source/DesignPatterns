#ifndef TYPEA_H
#define TYPEA_H
class TypeA
{
private:
	const char* data = nullptr;
public:
	TypeA() = default; // C2512:no appropriate default constructor avaible.
	TypeA(const char* data);
	// Inherited via IUSB
	virtual const char* sendTypeAData() const;
	~TypeA() = default;
};
#endif // !TYPEA_H



