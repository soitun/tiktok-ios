//
//  LocationController.h
//  fifteenMinutes
//
//  Created by Moiz Merchant on 5/25/11.
//  Copyright 2011 Bunnies on Acid. All rights reserved.
//

//------------------------------------------------------------------------------
// imports 
//------------------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

//------------------------------------------------------------------------------
// protocol definition 
//------------------------------------------------------------------------------

@protocol LocationControllerDelegate 

@required

- (void) locationUpdate:(CLLocation*)location;
- (void) locationError:(NSError*)error;

@end

//------------------------------------------------------------------------------
// interface definition
//------------------------------------------------------------------------------

@interface LocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *m_location_manager;
    id                 m_delegate;
}

//------------------------------------------------------------------------------

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) id                delegate;

//------------------------------------------------------------------------------

- (void) locationManager:(CLLocationManager*)manager
     didUpdateToLocation:(CLLocation*)newLocation
            fromLocation:(CLLocation*)oldLocation;

- (void) locationManager:(CLLocationManager*)manager
        didFailWithError:(NSError*)error;

//------------------------------------------------------------------------------

@end
