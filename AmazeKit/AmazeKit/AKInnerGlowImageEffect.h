//
//  AKInnerGlowImageEffect.h
//  AmazeKit
//
//  Created by Jeffrey Kelley on 6/25/12.
//  Copyright (c) 2012 Detroit Labs. All rights reserved.
//


#import "AKImageEffect.h"


@interface AKInnerGlowImageEffect : AKImageEffect

// The color of the glow. Defaults to white.
@property (strong) UIColor	*color;

// The radius of the glow, in points. Defaults to 10 points.
@property CGFloat	radius;

@end