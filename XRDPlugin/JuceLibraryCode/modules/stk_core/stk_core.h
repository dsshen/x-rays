/*
  ==============================================================================

  The Synthesis ToolKit in C++ (STK) is a set of open source audio
  signal processing and algorithmic synthesis classes written in the
  C++ programming language. STK was designed to facilitate rapid
  development of music synthesis and audio processing software, with
  an emphasis on cross-platform functionality, realtime control,
  ease of use, and educational example code.  STK currently runs
  with realtime support (audio and MIDI) on Linux, Macintosh OS X,
  and Windows computer platforms. Generic, non-realtime support has
  been tested under NeXTStep, Sun, and other platforms and should
  work with any standard C++ compiler.

  STK WWW site: http://ccrma.stanford.edu/software/stk/

  The Synthesis ToolKit in C++ (STK)
  Copyright (c) 1995-2011 Perry R. Cook and Gary P. Scavone

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this software and associated documentation files
  (the "Software"), to deal in the Software without restriction,
  including without limitation the rights to use, copy, modify, merge,
  publish, distribute, sublicense, and/or sell copies of the Software,
  and to permit persons to whom the Software is furnished to do so,
  subject to the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Software.

  Any person wishing to distribute modifications to the Software is
  asked to send the modifications to the original developer so that
  they can be incorporated into the canonical version.  This is,
  however, not a binding provision of this license.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
  ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

  ==============================================================================
*/

/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:               stk_core
  vendor:           danlin
  version:          4.5.0
  name:             STK Library
  description:      STK Library for audio sysnthesis and effects.
  website:          https://ccrma.stanford.edu/software/stk
  license:          Open Source https://ccrma.stanford.edu/software/stk/faq.html

  dependencies:     juce_core

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#ifndef __STK_CORE_HEADER__
#define __STK_CORE_HEADER__

#include "juce_core/juce_core.h"

#if JUCE_LITTLE_ENDIAN && ! defined (__LITTLE_ENDIAN__)
 #define __LITTLE_ENDIAN__
#endif

#if JUCE_MAC
 #define __MACOSX_CORE__
#endif

#if JUCE_MSVC
 #pragma warning (push)
 #pragma warning (disable: 4127 4702 4244 4305 4100 4996 4309)
#endif

#include "stk/Stk.h"

#include "stk/Effect.h"
#include "stk/Filter.h"
#include "stk/Generator.h"
#include "stk/Instrmnt.h"
#include "stk/Voicer.h"

#include "stk/Phonemes.h"
#include "stk/Sphere.h"
#include "stk/Vector3D.h"

#include "stk/Function.h"
#include "functions/BowTable.h"
#include "functions/Cubic.h"
#include "functions/JetTable.h"
#include "functions/ReedTable.h"

#include "io/FileRead.h"
#include "io/FileWrite.h"
#include "io/FileWvIn.h"
#include "io/FileWvOut.h"
#include "io/WvIn.h"
#include "io/WvOut.h"


#if JUCE_MSVC
 #pragma warning (pop)
#endif

#endif   // __STK_CORE_HEADER__
