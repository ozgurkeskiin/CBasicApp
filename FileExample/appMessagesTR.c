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
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "commonTypes.h"
#include "appMessages.h"

/******************************MACRO DEFINITIONS*******************************/

/*******************************TYPE DEFINITIONS ******************************/

/*************************** FUNCTION PROTOTYPES ******************************/

/**********************************VARIABLES***********************************/
static const char* const messages[] =
{
	"BASARILI",
	"BASARISIZ",
	"MESAJ SONU",
};

/*****************************PRIVATE FUNCTIONS********************************/
static int getMessage(Messages msgCode, unsigned char * buffer)
{
	//copy message to ram
	memcpy(buffer, messages[msgCode], strlen(messages[msgCode]));
	return SUCCESS;
}

/*******************************PUBLIC FUNCTIONS*******************************/

int appMessagesGetTRMessage(Msg *msg)
{
	msg->getMessage = getMessage;

	return SUCCESS;
}
