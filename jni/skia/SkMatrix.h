/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SkMatrix_DEFINED
#define SkMatrix_DEFINED

#include "skia/SkScalar.h"

/** \class SkMatrix

 The SkMatrix class holds a 3x3 matrix for transforming coordinates.
 SkMatrix does not have a constructor, so it must be explicitly initialized
 using either reset() - to construct an identity matrix, or one of the set
 functions (e.g. setTranslate, setRotate, etc.).
 */
class SkMatrix {
public:
	enum {
		kMScaleX,
		kMSkewX,
		kMTransX,
		kMSkewY,
		kMScaleY,
		kMTransY,
		kMPersp0,
		kMPersp1,
		kMPersp2
	};

	SkScalar get(int index) const {
		SkASSERT((unsigned) index < 9);
		return fMat[index];
	}

	void set(int index, SkScalar value) {
		SkASSERT((unsigned) index < 9);
		fMat[index] = value;
	}

	SkScalar fMat[9];
};

#endif
