//
//  ViewController.h
//  ShareButton
//
//  Created by lbencs on 10/22/14.
//  Copyright (c) 2014 lbencs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *button2;
@property (weak, nonatomic) IBOutlet UIButton *button;
- (IBAction)btnClick2:(UIButton *)sender;

- (IBAction)btnClick:(UIButton *)sender;

@end

