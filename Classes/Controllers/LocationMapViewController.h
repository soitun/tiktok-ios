//
//  LocationMapViewController.h
//  TikTok
//
//  Created by Moiz Merchant on 5/30/11.
//  Copyright 2011 TikTok. All rights reserved.
//

//------------------------------------------------------------------------------
// imports 
//------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

//------------------------------------------------------------------------------
// forward declarations
//------------------------------------------------------------------------------

@class Coupon;

//------------------------------------------------------------------------------
// interface definition
//------------------------------------------------------------------------------

@interface LocationMapViewController : UIViewController <MKMapViewDelegate>
{
    MKMapView *mMapView;
    Coupon    *mCoupon;
}

//------------------------------------------------------------------------------

@property (nonatomic, retain) IBOutlet MKMapView *mapView;
@property (nonatomic, retain)          Coupon    *coupon;

//------------------------------------------------------------------------------

@end
