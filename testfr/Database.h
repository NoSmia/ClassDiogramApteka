///////////////////////////////////////////////////////////
//  Database.h
//  Implementation of the Class Database
//  Created on:      21-апр-2023 13:40:42
//  Original author: Adam
///////////////////////////////////////////////////////////

#if !defined(EA_10AD646C_8CA6_401b_9FA9_9140820EC5A1__INCLUDED_)
#define EA_10AD646C_8CA6_401b_9FA9_9140820EC5A1__INCLUDED_

#include "Договор.h"
#include "Registry.h"

class Database
{

public:
	Database();
	virtual ~Database();
	Договор *m_Договор;
	Registry *m_Registry;

	int deletingClientData(int Parameter);
	int loadingClientData(int Parameter A);

private:
	data;

};
#endif // !defined(EA_10AD646C_8CA6_401b_9FA9_9140820EC5A1__INCLUDED_)
