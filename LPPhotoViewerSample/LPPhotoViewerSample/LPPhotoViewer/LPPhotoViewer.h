//
//  LPPhotoViewer.h
//  LPPhotoViewer
//
//  Created by litt1e-p on 16/3/27.
//  Copyright © 2016年 litt1e-p. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LPPhotoView;

typedef NS_ENUM(NSInteger, IndicatorType)
{
    IndicatorTypePageControl,
    IndicatorTypeNumLabel,
    IndicatorTypeNone,
};

@protocol LPPhotoViewerDelegate <NSObject>

@optional
- (void)photoViewWillShow:(NSUInteger)fromIndex;
- (void)photoViewWillClose:(NSUInteger)fromIndex;

@end

@interface LPPhotoViewer : UIViewController

/**
 *  array of UIImage or image urls
 */
@property(nonatomic, strong) NSArray *imgArr;

@property(nonatomic, assign) NSInteger currentIndex;

@property (nonatomic, assign) IndicatorType indicatorType;

@property (nonatomic, weak) id <LPPhotoViewerDelegate>delegate;

- (void)showFromViewController:(UIViewController *)vc sender:(id)sender;

@end
