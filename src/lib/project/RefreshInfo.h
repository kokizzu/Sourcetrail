#ifndef REFRESH_INFO_H
#define REFRESH_INFO_H

#include <set>

#include "utility/file/FilePath.h"

enum RefreshMode
{
	REFRESH_NONE,
	REFRESH_UPDATED_FILES,
	REFRESH_UPDATED_AND_INCOMPLETE_FILES,
	REFRESH_ALL_FILES
};

struct RefreshInfo
{
	std::set<FilePath> filesToIndex;
	std::set<FilePath> filesToClear;
	RefreshMode mode = REFRESH_NONE;
};

#endif // REFRESH_INFO_H