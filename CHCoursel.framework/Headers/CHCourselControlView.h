//
//  CHCourselControlView.h
//  CHCourselView
//
//  Created by chenghao on 2017/2/20.
//  Copyright © 2017年 clearcdm.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol CHCourselControlViewdelegate <NSObject>

-(void)CHCourselControlViewTap;

@end
@interface CHCourselControlView : UIView<UIScrollViewDelegate>
@property(weak,nonatomic)id<CHCourselControlViewdelegate> delegate;
- (id)initWithFrame:(CGRect)frame imageArr:(NSArray *)imageArr andSpace:(CGFloat)space;
@end
