/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include <vector>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

//TODO Fill in

using namespace KP_StringParserClass;




		//dont forget to initialize member variables
		StringParserClass::StringParserClass() {
			this-> pStartTag = NULL;
			this-> pEndTag = NULL;
			this-> areTagsSet = false;
		}

		//call cleanup to release any allocated memory
		StringParserClass::~StringParserClass() {
			cleanup();
		}

		void StringParserClass::cleanup(){
			if (pStartTag)
				delete[] pStartTag;

			if (pEndTag)
				delete[] pEndTag;
		}

		//these are the start tag and the end tags that we want to find,
		//presumably the data of interest is between them, please make a
		//COPY of what pStartTag and pEndTag point to.  In other words
		//DO NOT SET pStartTag = pStart
		//returns:
		//SUCCESS
		//ERROR_TAGS_NULL if either pStart or pEnd is null
		int StringParserClass::setTags(const char *pStart, const char *pEnd) {
			if (pStart == NULL || pEnd == NULL) {
				return ERROR_TAGS_NULL;
			}

			int startLen = strlen(pStart);
			int endLen = strlen(pEnd);

			pStartTag = new char[startLen + 1];
			pEndTag = new char[endLen + 1];

			strncpy(pStartTag, pStart, startLen);
			strncpy(pEndTag, pEnd, endLen);

			return SUCCESS;
		}

		//First clears myVector
		//going to search thru pDataToSearchThru, looking for info bracketed by
		//pStartTag and pEndTag, will add that info only to myVector
		//returns
		//SUCCESS  finished searching for data between tags, results in myVector (0 or more entries)
		//ERROR_TAGS_NULL if either pStart or pEnd is null
		//ERROR_DATA_NULL pDataToSearchThru is null
		int StringParserClass::getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector) {
			return 0;
		}




