//
//  ViewController.h
//  FunFacts
//
//  Created by Pierre Thalamy on 12/11/15.
//  Copyright © 2015 Pierre Thalamy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController : UIViewController

// MVC: Model - View - Controller

@property (strong, nonatomic) IBOutlet UILabel *funFactLabel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@end

