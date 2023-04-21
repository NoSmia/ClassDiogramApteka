///////////////////////////////////////////////////////////
//  Clinic.h
//  Implementation of the Class Clinic
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_40856EEA_AC45_47e9_A3B9_1380FD9FCEEB__INCLUDED_)
#define EA_40856EEA_AC45_47e9_A3B9_1380FD9FCEEB__INCLUDED_

#include "Registry.h"

class Clinic
{

public:
	Clinic();
	virtual ~Clinic();
	Registry *m_Registry;

	int installationOfADentalProsthesis(int Parameter);
	int medicaServicesTreatmentAndProsthetics(int Parameter A);

private:
	int dentalProsthetics;
	int dentalTreatment;

};
#endif // !defined(EA_40856EEA_AC45_47e9_A3B9_1380FD9FCEEB__INCLUDED_)
