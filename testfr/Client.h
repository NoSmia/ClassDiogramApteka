///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_F3F54239_66EA_4139_B214_39C3464D0304__INCLUDED_)
#define EA_F3F54239_66EA_4139_B214_39C3464D0304__INCLUDED_

#include "MedCard.h"
#include "Clinic.h"
#include "CashRegister.h"

class Client
{

public:
	Client();
	virtual ~Client();
	MedCard *m_MedCard;
	Clinic *m_Clinic;
	CashRegister *m_CashRegister;

	int fillingOutAnApplication(int Parameter);
	int paymentForServices(int Parameter A);

private:
	int filing;
	float payment;

};
#endif // !defined(EA_F3F54239_66EA_4139_B214_39C3464D0304__INCLUDED_)
