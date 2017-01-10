//
//  BSEMagicBall.m
//  Magic Ball
//
//  Created by DIPRO on 6/11/14.
//  Copyright (c) 2014 MasterMind. All rights reserved.
//

#import "BSEMagicBall.h"

@implementation BSEMagicBall

-(NSArray*) predictions {
    if(_predictions==nil){
     _predictions = [[NSArray alloc] initWithObjects:@"Dont shake",@"omg why r u shaking!",@"r u crazy dude?",@"come on man",@"I m prety sure u r crazy", nil];
}
return _predictions;
}

-(NSString*) randomPredictions{

    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
