//
//  TakeVideoViewController.h
//  sinaDemo
//
//  Created by wl on 2018/1/16.
//  Copyright © 2018年 https://github.com/orzzh. All rights reserved.
//

#import "VideoBaseViewController.h"

@interface TakeVideoViewController : VideoBaseViewController

@property (copy)void(^block)(BOOL isPostC);

@end
