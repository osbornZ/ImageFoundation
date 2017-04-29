//
//  UIImage+Reset.h
//  ImageFoundation
//
//  Created by zfan on 2017/4/28.
//  Copyright © 2017年 zfan. All rights reserved.
//
//  Quartz2D
//rotation transform \
UIView中我们通过transform进行的所有操作都是基于view的中心点的;\
而context中我们进行的操作是基于context的坐标原点

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,ResizeMode) {
    ResizeScale,
    ResizeAspectFit,
    ResizeAspectFill,
};


@interface UIImage (Reset)


/**
 旋转

 @param angle 角度
 @return return 结果图
 */
- (UIImage *)rotateImageWithAngle:(CGFloat)angle;


/**
 缩放

 @param newSize 缩放大小
 @param resizeMode 填充模式
 @return 结果图
 */
- (UIImage*)resizeImageToSize:(CGSize)newSize mode:(ResizeMode)resizeMode;


/**
 改正图片方向

 @param aImage 图片信息
 @return 结果图
 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;


/**
 缩略图

 @param image 图片信息
 @param asize 缩后大小
 @return 结果图
 */
+ (UIImage* )thumbnailWithImage:(UIImage *)image size:(CGSize)asize;


/**
 裁剪

 @param image 图片信息
 @return 结果图
 */
+ (UIImage *)cutImageAccordingToSize:(UIImage *)image ;


- (UIImage*)cropImageWithRect:(CGRect)cropRect;


@end
