//
//  NSString+BRAdd.h
//  BRKitDemo
//
//  Created by 任波 on 2018/4/19.
//  Copyright © 2018年 91renb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (BRAdd)

/**
 *  计算字符串文本的大小
 *
 *  @param  font           文本字体
 *  @param  maxSize        文本区域的最大范围大小
 *  @param  lineBreakMode  字符截断类型
 *
 *  @return 文本大小
 */
- (CGSize)calculateSize:(UIFont *)font maxSize:(CGSize)maxSize mode:(NSLineBreakMode)lineBreakMode;

/**
 *  计算字符串文本的宽度
 *
 *  @param  font    文本字体
 *  @param  height  文本高度
 *
 *  @return 文本宽度
 */
- (CGFloat)calculateWidth:(UIFont *)font height:(CGFloat)height;

/**
 *  计算字符串文本的高度
 *
 *  @param  font   文本字体
 *  @param  width  文本宽度
 *
 *  @return 文本高度
 */
- (CGFloat)calculateHeight:(UIFont *)font width:(CGFloat)width;

@end