/*
 * gipXlnt.h
 *
 *  Created on: 2 Aug 2022
 *      Author: Mirac
 */

#ifndef SRC_GIPXLNT_H_
#define SRC_GIPXLNT_H_

#include "gBasePlugin.h"
#include "xlnt/xlnt.hpp"


class gipXlnt : public gBasePlugin{
public:
	gipXlnt();
	virtual ~gipXlnt();
	void loadFile(std::string filepath);
	void readFile();

private:
	xlnt::workbook wb;
	std::string filepath;

};

#endif /* SRC_GIPXLNT_H_ */
