/*
 
 Copyright (c) 2014 Yichi Zhang
 https://github.com/yichizhang
 zhang-yi-chi@hotmail.com
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */

#ifndef _YZCGPointExtension_h
#define _YZCGPointExtension_h

#import <CoreGraphics/CGGeometry.h>

CGPoint YZCGPointAdd(CGPoint pointLeft, CGPoint pointRight);

CGPoint YZCGPointSubtract(CGPoint pointLeft, CGPoint pointRight);

CGPoint YZCGPointMultiplyScalar(CGPoint point, CGFloat value);

CGPoint YZCGPointDivideScalar(CGPoint point, CGFloat value);

CGFloat YZCGPointDotProduct(CGPoint pointLeft, CGPoint pointRight);

CGFloat YZCGPointMagnitude(CGPoint point);

CGFloat YZCGPointLength(CGPoint point);

CGPoint YZCGPointNormalize(CGPoint point);

CGPoint YZCGPointUnit(CGPoint point);

CGPoint YZCGPointLimit(CGPoint point, CGFloat value);

CGFloat YZCGPointDistance(CGPoint pointStart, CGPoint pointEnd);

#endif