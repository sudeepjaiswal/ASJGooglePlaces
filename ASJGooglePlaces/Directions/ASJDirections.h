//
// ASJDirections.h
//
// Copyright (c) 2014 Sudeep Jaiswal
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "ASJSession.h"
#import "ASJOriginDestination.h"
#import <CoreLocation/CLLocation.h>

typedef void(^DirectionsBlock)(ASJResponseStatusCode statusCode, NSArray<ASJOriginDestination *> *directionDetails);

@interface ASJDirections : ASJSession <ASJSession>

/**
 *  Fetch directions between points A and B by their names.
 *
 *  @param origin      The starting point's name.
 *  @param destination The destination's name.
 *  @param completion  A completion block that is called when the API call is complete.
 */
- (void)directionsFromOriginNamed:(NSString *)origin destinationNamed:(NSString *)destination completion:(DirectionsBlock)completion;

/**
 *  Fetch directions between points A and B by their coordinates.
 *
 *  @param origin      The starting point's coordinates.
 *  @param destination The destination's coordinates.
 *  @param completion  A completion block that is called when the API call is complete.
 */
- (void)directionsFromOrigin:(CLLocationCoordinate2D)origin destination:(CLLocationCoordinate2D)destination completion:(DirectionsBlock)completion;

@end
