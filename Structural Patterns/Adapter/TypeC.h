#ifndef TYPEC_H
#define TYPEC_H
class TypeC
{
private:
	const char* data = nullptr;
public:
	TypeC(const char* data);
	// Inherited via IUSB
	virtual const char* sendTypeCData() const;

};
#endif // !TYPEC_H



