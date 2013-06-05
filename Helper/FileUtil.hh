/*
 * FileUtil.hh
 *
 *  Created on: Jun 4, 2013
 *      Author: zherr
 */

#ifndef FILEUTIL_HH_
#define FILEUTIL_HH_
#include <string>

class FileUtil {
public:
	FileUtil(){};
	virtual ~FileUtil(){};

	static std::string lineWrap(std::string, int);
};

#endif /* FILEUTIL_HH_ */
