///////////////////////////////////////////////////////////
//  Treaty.h
//  Implementation of the Class Treaty
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_360D7EEF_AE81_488e_9B62_88B5A8756B45__INCLUDED_)
#define EA_360D7EEF_AE81_488e_9B62_88B5A8756B45__INCLUDED_

#include "Registry.h"

class Treaty
{

public:
	Treaty();
	virtual ~Treaty();
	Registry *m_Registry;

	int complianceWithTheTermsOfTheContract(int Parameter);
	float specifyingYourData(int Parameter A);

private:
	int conditions;
	int data;

};
#endif // !defined(EA_360D7EEF_AE81_488e_9B62_88B5A8756B45__INCLUDED_)
