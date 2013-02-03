//
//  NotebookCharger.h
//  AdapterPattern
//
//  Created by Dima Maleev on 2/1/13.
//  Copyright (c) 2013 mDev. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface NotebookChargerCommand : NSObject

-(void) chargeNotebook;
@end

@protocol RectHolesFitting
-(bool) isFittingRectHoles;
@end