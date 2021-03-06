//
//  XLBottomMultiPurposeView.h
//  TopHot
//
//  Created by Liushannoon on 16/4/12.
//  Copyright © 2016年 Liushannoon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+BMPExtension.h"
#import "XLBottomMultiPurposeViewItem.h"

@class XLBottomMultiPurposeView;

@protocol XLBottomMultiPurposeViewDelegate <NSObject>

@optional
- (void)bottomMultiPurposeView:(XLBottomMultiPurposeView *)bottomMultiPurposeView clickTopItemIndex:(NSUInteger)index;
- (void)bottomMultiPurposeView:(XLBottomMultiPurposeView *)bottomMultiPurposeView clickBottomItemIndex:(NSUInteger)index;
- (void)bottomMultiPurposeViewClickCancelButton;

@end

@interface XLBottomMultiPurposeView : UIView

/**
 *  提供数据,展示视图
 *
 *  @param topImages        顶部图片数组
 *  @param topHighImages    顶部栏点击状态的图片数组
 *  @param topTexts         顶部栏文字数组
 *  @param bottomImages     底部栏的图片数组
 *  @param bottomHighImages 底部栏的点击状态图片数组
 *  @param bottomTexts      顶部栏的文字数组
 *  @param title            顶部的title
 *  @param delegate         代理
 */
//+ (void)showBottomMultiPurposeViewWithTopItemsImageArray:(NSArray *)topImages topHighImageArray:(NSArray *)topHighImages topItemsTextArray:(NSArray *)topTexts bottomItemsImageArray:(NSArray *)bottomImages bottomHighImageArray:(NSArray *)bottomHighImages bottomItemsTextArray:(NSArray *)bottomTexts  delegate:(id <XLBottomMultiPurposeViewDelegate>)delegate topTitleLabelText:(NSString *)title;

+ (void)showBottomMultiPurposeViewWithTopItems:(NSArray <XLBottomMultiPurposeViewItem *> *)topItems bottomItems:(NSArray <XLBottomMultiPurposeViewItem *> *)bottomItems delegate:(id <XLBottomMultiPurposeViewDelegate>)delegate topTitleLabelText:(NSString *)title;

@end
