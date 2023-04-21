///////////////////////////////////////////////////////////
//  CashRegister.h
//  Implementation of the Class CashRegister
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_675F93CB_0811_4160_82F1_E5E924519BFC__INCLUDED_)
#define EA_675F93CB_0811_4160_82F1_E5E924519BFC__INCLUDED_

#include "Receipt.h"

class CashRegister
{

public:
	CashRegister();
	virtual ~CashRegister();
	Receipt *m_Receipt;

	float paymentForServicesAtTheCheckout(int Parameter A);

private:
	int payment;

};
#endif // !defined(EA_675F93CB_0811_4160_82F1_E5E924519BFC__INCLUDED_)
