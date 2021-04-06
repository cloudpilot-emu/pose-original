/* -*- mode: C++; tab-width: 4 -*- */
/* ===================================================================== *\
	Copyright (c) 2001 Palm, Inc. or its subsidiaries.
	All rights reserved.

	This file is part of the Palm OS Emulator.

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
\* ===================================================================== */

#ifndef EmRegsVZVisorVisorEdge_h
#define EmRegsVZVisorVisorEdge_h

#include "EmRegsVZ.h"
#include "EmRegsVZVisorPlatinum.h"

class EmRegsVZVisorEdge: public EmRegsVZVisorPlatinum
{
	public:
		virtual Bool			GetLCDScreenOn			(void);
		virtual Bool			GetLCDBacklightOn		(void);
		virtual void			GetKeyInfo				(int* numRows, int* numCols,
														 uint16* keyMap, Bool* rows);

};

#endif	/* EmRegsVZVisorVisorEdge_h */
