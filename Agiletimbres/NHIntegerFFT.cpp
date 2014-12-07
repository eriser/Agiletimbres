//
//  NHIntegerFFT.cpp
//  NHBoost
//
//  Created by Tomoaki Kawada on 4/10/12.
//  Copyright (c) 2012 Nexhawks. All rights reserved.
//

#include "NHIntegerFFT.h"

uint32_t NHIntegerFFTRotationTable[][2]={
	{0,0}, /*{-4294967296, 0}, */
	{0,0}, /*{0, 4294967296},*/
	{3037000499U, 3037000499U},
	{3968032377U, 1643612826U},
	{4212440703U, 837906552},
	{4274285854U, 420980412},
	{4289793819U, 210744056},
	{4293673732U, 105403773},
	{4294643892U, 52705855},
	{4294886444U, 26353423},
	{4294947083U, 13176773},
	{4294962242U, 6588394},
	{4294966032U, 3294198},
	{4294966980U, 1647099},
	{4294967217U, 823549},
	{4294967276U, 411774},
	{4294967291U, 205887},
	{4294967294U, 102943},
	{4294967295U, 51471},
	{4294967295U, 25735},
	{4294967295U, 12867},
	{4294967295U, 6433},
	{4294967295U, 3217},
	{4294967295U, 1608},
	{4294967295U, 804},
	{4294967295U, 402},
	{4294967295U, 202},
	{4294967295U, 101},
	{4294967295U, 55},
};

