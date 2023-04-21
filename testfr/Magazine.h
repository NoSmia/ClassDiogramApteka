///////////////////////////////////////////////////////////
//  Magazine.h
//  Implementation of the Class Magazine
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_CBDC04B0_1308_4d31_B9FE_143B7FD0227F__INCLUDED_)
#define EA_CBDC04B0_1308_4d31_B9FE_143B7FD0227F__INCLUDED_

#include "Registry.h"

class Magazine
{

public:
	Magazine();
	virtual ~Magazine();
	Registry *m_Registry;

	int applicationsAreRecorded(int Parameter);

private:
	int filingAnApplication;

};
#endif // !defined(EA_CBDC04B0_1308_4d31_B9FE_143B7FD0227F__INCLUDED_)
