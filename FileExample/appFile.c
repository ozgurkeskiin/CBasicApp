/******************************************************************************
*
*
* Author		: OZGUR KESKIN
* $Revision		:
* $Date			:
* $Description	:
* $Log			:
*
*
*******************************************************************************/

/******************************************************************************
* \file
*
* \details
*
*******************************************************************************/

/*********************************INCLUDES*************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>
#include "appDebug.h"
#include "commonTypes.h"
/******************************MACRO DEFINITIONS*******************************/

/*******************************TYPE DEFINITIONS ******************************/

/*************************** FUNCTION PROTOTYPES ******************************/

/**********************************VARIABLES***********************************/

/*****************************PRIVATE FUNCTIONS********************************/

/*******************************PUBLIC FUNCTIONS*******************************/

int appFileCreate(char const *fileName)
{
	int retVal = FAILURE;

	if (!((fopen(fileName, "w+")) == NULL))
	{
		retVal = SUCCESS;
	}

	return retVal;
}

int appFileExist(char const *fileName)
{
	int retVal = FAILURE;
	FILE *fp;
	
	if ((fp = fopen(fileName, "r")) != NULL)
	{
		retVal = SUCCESS;
		fclose(fp);
	}

	return retVal;
}

