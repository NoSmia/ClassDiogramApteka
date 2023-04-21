///////////////////////////////////////////////////////////
//  Registry.h
//  Implementation of the Class Registry
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_AD769132_D0CE_4862_B303_728FFC004B8A__INCLUDED_)
#define EA_AD769132_D0CE_4862_B303_728FFC004B8A__INCLUDED_

class Registry
{

public:
	Registry();
	virtual ~Registry();

	int indicatesTheCostForTheProvisionOfServices(int Parameter);
	float indicatesTheReceptionTime(int Parameter A);

private:
	int price;
	int timeOfReceipt;

};
#endif // !defined(EA_AD769132_D0CE_4862_B303_728FFC004B8A__INCLUDED_)
