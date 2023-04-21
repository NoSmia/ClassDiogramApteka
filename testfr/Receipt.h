///////////////////////////////////////////////////////////
//  Receipt.h
//  Implementation of the Class Receipt
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_8FD41756_AE25_413c_9228_32FA8027E909__INCLUDED_)
#define EA_8FD41756_AE25_413c_9228_32FA8027E909__INCLUDED_

#include "MedCard.h"

class Receipt
{

public:
	Receipt();
	virtual ~Receipt();
	MedCard *m_MedCard;

	float inAccordanceWithThePriceListWritesOutAReceipt(int Parameter A);

private:
	int informationAboutPaymentForServicesRendered;

};
#endif // !defined(EA_8FD41756_AE25_413c_9228_32FA8027E909__INCLUDED_)
