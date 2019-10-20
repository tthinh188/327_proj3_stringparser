/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"
using namespace KP_StringParserClass;

StringParserClass::StringParserClass(){
	pStartTag = 0;
	pEndTag = 0;
	areTagsSet = 0;
}

StringParserClass::~StringParserClass(){
	cleanup();
}



int StringParserClass::setTags(const char *pStart, const char *pEnd){
	if( (pStart == 0) || (pEnd == 0)){
		return ERROR_TAGS_NULL;
	}
	else{
		pStartTag = (char*)pStart;
		pEndTag = (char*)pEnd;
		areTagsSet = true;
		return SUCCESS;
	}
 }

int StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector){
	myVector.clear();
	if( (pStartTag == 0) || (pEndTag == 0)){
			return ERROR_TAGS_NULL;
		}
	else if (pDataToSearchThru == 0){
		return ERROR_DATA_NULL;
	}
	else{

		return SUCCESS;
	}
}

void StringParserClass::cleanup(){
	if (pStartTag){
		delete [] pStartTag;
		pStartTag = 0;
	}
	if (pEndTag){
		delete [] pEndTag;
		pEndTag = 0;
	}
	if (areTagsSet){
		areTagsSet = 0;
	}
}

int StringParserClass::findTag(char *pTagToLookFor, char *&pStart, char *&pEnd){
	if( (pStart == 0) || (pEnd == 0)){
			return ERROR_TAGS_NULL;
		}
	else if (){

		return FAIL;
	}
	else{
		return SUCCESS;
	}
}
