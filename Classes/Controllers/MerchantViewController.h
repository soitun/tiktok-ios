//
//  MerchantViewController.h
//  TikTok
//
//  Created by Moiz Merchant on 4/22/11.
//  Copyright 2011 TikTok. All rights reserved.
//

//------------------------------------------------------------------------------
// imports
//------------------------------------------------------------------------------

#import <UIKit/UIKit.h>

//------------------------------------------------------------------------------
// forward declarations
//------------------------------------------------------------------------------

@class Merchant;

//------------------------------------------------------------------------------
// interface definition
//------------------------------------------------------------------------------

@interface MerchantViewController : UIViewController <UIAlertViewDelegate>
{
    Merchant *mMerchant;
}

//------------------------------------------------------------------------------

@property (nonatomic, retain) Merchant *merchant;

//------------------------------------------------------------------------------

- (IBAction) clickAddress:(id)sender;
- (IBAction) clickPhone:(id)sender;
- (IBAction) clickWebsite:(id)sender;

//------------------------------------------------------------------------------

@end
