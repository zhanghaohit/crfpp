//
//  CRF++ -- Yet Another CRF toolkit
//
//  $Id: crf_learn.cpp 1587 2007-02-12 09:00:36Z taku $;
//
//  Copyright(C) 2005-2007 Taku Kudo <taku@chasen.org>
//
#include "crfpp.h"
#ifdef _WIN32
#include "winmain.h"
#endif

int main(int argc, char **argv) {
  return crfpp_learn(argc, argv);
}
