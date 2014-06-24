//
//  Grid.h
//  GameOfLife
//
//  Created by Adam Zhang on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
- (void)evolveStep;
@end
