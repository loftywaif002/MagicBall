//
//  BSEViewController.h
//  Magic Ball
//
//  Created by DIPRO on 6/10/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import <UIKit/UIKit.h>

//Instead of impoerting do a forward declaration

@class BSEMagicBall;

@interface BSEViewController : UIViewController




@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) BSEMagicBall *magicBall;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction;
@end
