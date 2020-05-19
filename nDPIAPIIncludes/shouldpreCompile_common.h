#pragma once

#include <stddef.h>
#include <cstring>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <limits>
//#include <atomic>
#include <inttypes.h>
#include <wchar.h>
#include <stdio.h>
#include <cwchar>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
//#include <thread>
//#include <future>
#include <functional>
#include <utility>
#include <vector>
#include <algorithm>
#include <sys/mman.h>
#include <tr1/random>
#include <assert.h>
#include <set>
using namespace std;




#ifndef ZeroMemory
	#define ZeroMemory(Dst, Size)	memset(Dst, 0, Size);
#endif

#define ASSERT				assert
#define FALSE				false
#define TRUE				true
#define VERIFY(f)			ASSERT(f)
