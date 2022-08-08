/*
 * Debugging Assignment - CS 210/496 Spring 2022
 * @author Manan Katwala <mkatwala@sdsu.edu>
 * @date March 3, 2022
 */

#include <iostream>
#include <sstream>
#include "dictnode.h"

DictNode::DictNode() {
	isWord = false;
}

std::string DictNode::toString() {
	std::stringstream ss;
	ss << "Node's isWord: " << this->isWord << std::endl;

	for(int i = 0; i < NUMCHARS; i++) { 
      toString.next[i] = isWord;
   if(next[i]) {
			ss << "Node's next[" << i << "]'s isWord: " << next[i]->isWord << std::endl;
		}
	}	
	return ss.str();
}
