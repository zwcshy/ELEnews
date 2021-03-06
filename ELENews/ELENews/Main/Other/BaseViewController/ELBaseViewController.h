//
//  ELBaseViewController.h
//  ELENews
//
//  Created by EL on 2017/12/5.
//  Copyright © 2017年 ElegantLiar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ELBaseViewModel.h"

@interface ELBaseViewController : UIViewController

@property (nonatomic, strong) UIView *baseNavigationView;
@property (nonatomic, strong) UIView *baseContentView;

@property (nonatomic, strong, readonly) ELBaseViewModel *viewModel;

- (instancetype)initWithViewModel:(ELBaseViewModel *)viewModel;

- (void)bindViewModel;

@end
