//
//  WXController.h
//  Weather
//
//  Created by Anouar on 30/05/14.
//
//

#import <UIKit/UIKit.h>

@interface WXController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (nonatomic, strong) UIImageView *backgroundImageView;
@property (nonatomic, strong) UIImageView *blurredImageView;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) CGFloat screenHeight;

@property (nonatomic, strong) NSDateFormatter *hourlyFormatter;
@property (nonatomic, strong) NSDateFormatter *dailyFormatter;

@end
