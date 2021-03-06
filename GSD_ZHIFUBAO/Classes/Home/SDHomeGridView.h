//
//  SDHomeGridView.h
//  GSD_ZHIFUBAO
//
//  Created by aier on 15-6-3.
//  Copyright (c) 2015年 GSD. All rights reserved.
//

/**
 
 *******************************************************
 *                                                      *
 * 感谢您的支持， 如果下载的代码在使用过程中出现BUG或者其他问题    *
 * 您可以发邮件到gsdios@126.com 或者 到                       *
 * https://github.com/gsdios?tab=repositories 提交问题     *
 *                                                      *
 *******************************************************
 
 */


#import <UIKit/UIKit.h>

@class SDHomeGridView;

@protocol SDHomeGridViewDeleate <NSObject>

@optional

- (void)homeGrideView:(SDHomeGridView *)gridView selectItemAtIndex:(NSInteger)index;
- (void)homeGrideViewmoreItemButtonClicked:(SDHomeGridView *)gridView;
- (void)homeGrideViewDidChangeItems:(SDHomeGridView *)gridView;

@end

@interface SDHomeGridView : UIScrollView <UIScrollViewDelegate>

@property (nonatomic, weak) id<SDHomeGridViewDeleate> gridViewDelegate;
@property (nonatomic, strong) NSArray *gridModelsArray;
@property (nonatomic, strong) NSArray *scrollADImageURLStringsArray;

@end
