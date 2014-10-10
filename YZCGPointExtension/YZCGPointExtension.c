/*
 
 Copyright (c) 2014 Yichi Zhang
 https://github.com/yichizhang
 zhang-yi-chi@hotmail.com
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */

#include "YZCGPointExtension.h"
#include <math.h>

CGPoint YZCGPointAdd(CGPoint pointLeft, CGPoint pointRight) {
    return CGPointMake(pointLeft.x+pointRight.x, pointLeft.y+pointRight.y);
}

CGPoint YZCGPointSubtract(CGPoint pointLeft, CGPoint pointRight) {
    return CGPointMake(pointLeft.x-pointRight.x, pointLeft.y-pointRight.y);
}

CGPoint YZCGPointMultiplyScalar(CGPoint point, CGFloat value) {
    return CGPointMake(point.x*value, point.y*value);
    
}

CGPoint YZCGPointDivideScalar(CGPoint point, CGFloat value) {
    return CGPointMake(point.x/value, point.y/value);
    
}

CGFloat YZCGPointDotProduct(CGPoint pointLeft, CGPoint pointRight) {
    return (pointLeft.x*pointRight.x) + (pointLeft.y*pointRight.y) ;
    
}

CGFloat YZCGPointMagnitude(CGPoint point) {
    return sqrtf(YZCGPointDotProduct(point, point));
}


CGFloat YZCGPointLength(CGPoint point) {
    return YZCGPointMagnitude(point);
}


CGPoint YZCGPointNormalize(CGPoint point) {
    CGFloat magnitude = YZCGPointMagnitude(point);
    CGPoint newPoint = point;
    if(magnitude > 0.0f)
        newPoint = YZCGPointDivideScalar(point, magnitude);
    return newPoint;
    
}

CGPoint YZCGPointUnit(CGPoint point) {
    return YZCGPointNormalize(point);
}


CGPoint YZCGPointLimit(CGPoint point, CGFloat value) {
    if(YZCGPointMagnitude(point) > value) {
        point = YZCGPointNormalize(point);
        point = YZCGPointMultiplyScalar(point, value);
    }
    return point;
    
}

CGFloat YZCGPointDistance(CGPoint pointStart, CGPoint pointEnd) {
    CGFloat deltaX = fabsf(pointStart.x-pointEnd.x);
    CGFloat deltaY = fabsf(pointStart.y-pointEnd.y);
    return YZCGPointMagnitude(CGPointMake(deltaX, deltaY));
}