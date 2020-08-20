/******************************************************************************
*                                                                             *
* $Author : Ozgur KESKIN     	                                              *
* $Revision: $                                                                *
* $Date: $                                                                    *
* $Description: $                                                             *
* $Log: $                                                                     *
*                                                                             *
*                                                                             *
*******************************************************************************/

/******************************************************************************
* \file appMessages.h                                                           *
*                                                                             *
* \details                                                                    *
*                                                                             *
*******************************************************************************/

/******************************IFNDEF  DEFINE*********************************/
#ifndef _APPMESSAGES_H_
#define _APPMESSAGES_H_


/*********************************INCLUDES*************************************/

/******************************MACRO DEFINITIONS*******************************/

/*******************************TYPE DEFINITIONS ******************************/

typedef enum _Messages
{
	MSG_SUCCESS = 0,
	MSG_FAILURE,
	MSG_END_OF_MESSAGES,
}Messages;


typedef struct _Msg
{
	int(*getMessage)(Messages msgCode, unsigned char * buffer);
}Msg;

/************************* GLOBAL FUNCTION DEFINITIONS**************************/
int appMessagesInit(void);
unsigned char* appMessagesGet(Messages message);
/************************* GLOBAL VARIABLE REFERENCES**************************/

/**************************************ENDIF************************************/

#endif /*_APPMESSAGES_H_*/