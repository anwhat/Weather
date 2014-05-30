//
//  WXClient.h
//  Weather
//
//  Created by Anouar on 30/05/14.
//
//


@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import <Foundation/Foundation.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
