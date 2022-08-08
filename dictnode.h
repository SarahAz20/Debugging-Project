/*
 * Debugging Assignment - CS 210/496 Spring 2022
 * @author Manan Katwala <mkatwala@sdsu.edu>
 * @date March 3, 2022
 */

#ifndef DICTNODE_H_
#define DICTNODE_H_

#define NUMCHARS 26

#include <string>

class DictNode {
	private:
	public:
		bool isWord;
		DictNode* next[NUMCHARS];
		DictNode();
		std::string toString();
};

#endif
