//
//  WXDailyForecast.m
//  Weather
//
//  Created by Anouar on 30/05/14.
//
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
   
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
   
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
  
    return paths;
}

@end
