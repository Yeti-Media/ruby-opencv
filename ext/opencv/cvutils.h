/************************************************************

    cvutils.h -

    $Author: ser1zw $

    Copyright (C) 2011 ser1zw

************************************************************/

#include <ruby.h>
#include "opencv2/core/core_c.h"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/imgproc/imgproc.hpp"

#define raise_cverror(e) cCvError::raise(e)

void raise_typeerror(VALUE object, VALUE expected_class);
void raise_compatible_typeerror(VALUE object, VALUE expected_class);
void* rb_cvAlloc(size_t size);
CvMat* rb_cvCreateMat(int height, int width, int type);
IplImage* rb_cvCreateImage(CvSize size, int depth, int channels);
IplConvKernel* rb_cvCreateStructuringElementEx(int cols, int rows, int anchorX, int anchorY, int shape, int *values);
CvMemStorage* rb_cvCreateMemStorage(int block_size);

