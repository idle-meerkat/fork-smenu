/* ################################################################### */
/* Copyright 2015, Pierre Gentile (p.gen.progs@gmail.com)              */
/*                                                                     */
/* This Source Code Form is subject to the terms of the Mozilla Public */
/* License, v. 2.0. If a copy of the MPL was not distributed with this */
/* file, You can obtain one at https://mozilla.org/MPL/2.0/.           */
/* ################################################################### */

#ifndef UTILS_H
#define UTILS_H

#include <errno.h>
#include <unistd.h>

typedef struct interval_s interval_t;
typedef struct range_s    range_t;

struct interval_s
{
  long low;
  long high;
};

/* Structure used by the replace function to delimit matches */
/* """"""""""""""""""""""""""""""""""""""""""""""""""""""""" */
struct range_s
{
  size_t start;
  size_t end;
};

interval_t *
interval_new(void);

int
interval_comp(void const * a, void const * b);

void
interval_swap(void ** a, void ** b);

void
merge_intervals(ll_t * list);

char *
concat(const char * str1, ...);

int
strprefix(char * str1, char * str2);

void
ltrim(char * str, const char * trim);

void
rtrim(char * str, const char * trim, size_t min_len);

int
my_strcasecmp(const char * str1, const char * str2);

char *
my_strcpy(char * dst, char * src);

int
isprint7(int i);

int
isprint8(int i);

int
my_wcscasecmp(const wchar_t * w1s, const wchar_t * w2s);

int
is_integer(const char * const s);

#endif
