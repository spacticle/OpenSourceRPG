/*
 * FileUtil.cpp
 *
 *  Created on: Jun 4, 2013
 *      Author: zherr
 */

#include "FileUtil.hh"
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <string>

using namespace std;

// trim from start
static inline std::string &ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
        return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
        return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) {
        return ltrim(rtrim(s));
}

string FileUtil::lineWrap(string s, int columns){

    string wrapped = "";
    s = trim(s);
    while (s.length() > columns) {
        int i = s.rfind(" ", columns);
        if (i == std::string::npos) i = columns;
        std::string tmp = s.substr(0, i);
        wrapped += trim(tmp);
        s = s.substr(i);
        s = trim(s);
        if (s.length() > 0)
            wrapped += "\n";
    }
    if (s.length() > 0)
        wrapped += s;
    return wrapped + "\n";
}
