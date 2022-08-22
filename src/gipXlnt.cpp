/*
 * gipXlnt.cpp
 *
 *  Created on: 2 Aug 2022
 *      Author: Mirac
 */

#include "gipXlnt.h"


gipXlnt::gipXlnt() {
	filepath = "";
}

gipXlnt::~gipXlnt() {
}

void gipXlnt::loadFile(std::string filepath) {
	filepath = gGetFilesDir() + filepath;
	this->filepath = filepath;
    wb.load(filepath);
}

void gipXlnt::readFile() {
	/*
    auto ws = wb.active_sheet();
    for (auto row : ws.rows(false)) {
        for (auto cell : row) {
        	gLogi("gipXlnt") << "cell:" << cell.to_string();
        }
    }
    */
}


