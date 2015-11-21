//
//  ViewController.m
//  FunFacts
//
//  Created by Pierre Thalamy on 12/11/15.
//  Copyright © 2015 Pierre Thalamy. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc] init];
    self.colorWheel = [[ColorWheel alloc] init];
    
    [self showFunFact];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    self.funFactLabel.text = [self.factBook randomFact];
    UIColor *tintColor = [self.colorWheel randomColor];
    self.view.backgroundColor = tintColor;
    [self.funFactButton setTintColor:tintColor];
}

@end
