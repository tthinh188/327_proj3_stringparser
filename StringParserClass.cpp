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

StringParserClass::~StringParserClass(void){
	StringParserClass::cleanup();
}



int StringParserClass::setTags(const char *pStart, const char *pEnd){
	 if( (pStart == NULL) || (pEnd == NULL)){
		return ERROR_TAGS_NULL;
	}
	else{
		return SUCCESS;
	}
 }

int StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector){
	myVector.clear();
	if (pDataToSearchThru == NULL){
		return ERROR_DATA_NULL;
	}
//	else if( (pStartTag == NULL) || (pEndTag == NULL)){
//		return ERROR_TAGS_NULL;
//	}
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

//class KP_StringParserClass::StringParserClass{
//	public:
//	int setTags(const char *pStart, const char *pEnd){
//		if( (pStart == NULL) || (pEnd == NULL)){
//			return ERROR_TAGS_NULL;
//		}
//		else{
//			return SUCCESS;
//		}
//	}
//	int getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector){
//		if (pDataToSearchThru == NULL){
//			return ERROR_DATA_NULL;
//		}
//		else{
//			return SUCCESS;
//		}
//	}
//
//};

//int KP_StringParserClass::StringParserClass::setTags(const char *pStart, const char *pEnd){
//	if( (pStart == NULL) || (pEnd == NULL)){
//		return ERROR_TAGS_NULL;
//	}
//	else{
//		return SUCCESS;
//	}
//}
//
//int KP_StringParserClass::StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector){
//	if (pDataToSearchThru == NULL){
//		return ERROR_DATA_NULL;
//	}
//	else{
//		return SUCCESS;
//	}
//}

