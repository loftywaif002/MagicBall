//
//  BSEMagicBall.h
//  Magic Ball
//
//  Created by DIPRO on 6/11/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSEMagicBall : NSObject{

    NSArray *_predictions;

}

@property(strong,nonatomic,readonly) NSArray *predictions;

-(NSString*) randomPredictions;

@end
