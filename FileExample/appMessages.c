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
#include <stdarg.h>
#include "commonTypes.h"
#include "appMessages.h"

/******************************MACRO DEFINITIONS*******************************/

/*******************************TYPE DEFINITIONS ******************************/

/*************************** FUNCTION PROTOTYPES ******************************/

/**********************************VARIABLES***********************************/
extern int appMessagesGetTRMessage(Msg *msg);
static Msg msg;
static 	unsigned char buffer[MAX_BUFFER_SIZE] = { 0 };
/*****************************PRIVATE FUNCTIONS********************************/

/*******************************PUBLIC FUNCTIONS*******************************/

int appMessagesInit()
{
	appMessagesGetTRMessage(&msg);

	return SUCCESS;
}

unsigned char * appMessagesGet(Messages msgCode)
{	
	msg.getMessage(msgCode, buffer);
	
	return buffer;
}