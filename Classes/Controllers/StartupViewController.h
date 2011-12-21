//
//  StartupViewController.h
//  TikTok
//
//  Created by Moiz Merchant on 12/19/11.
//  Copyright (c) 2011 TikTok. All rights reserved.
//

//------------------------------------------------------------------------------
// imports 
//------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import "TikTokPhysicsViewController.h"

//------------------------------------------------------------------------------
// interface definition
//------------------------------------------------------------------------------

@interface StartupViewController : UIViewController
{
    TikTokPhysicsViewController *m_physics_controller;
}

//------------------------------------------------------------------------------

@property (nonatomic, retain) IBOutlet TikTokPhysicsViewController *physicsController;

//------------------------------------------------------------------------------

- (void) onDeviceTokenReceived:(NSData*)deviceToken;

//------------------------------------------------------------------------------

@end
