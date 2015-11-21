//
//  ColorWheel.h
//  FunFacts
//
//  Created by Pierre Thalamy on 12/11/15.
//  Copyright © 2015 Pierre Thalamy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
