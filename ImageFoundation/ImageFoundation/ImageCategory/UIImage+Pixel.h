//
//  UIImage+Pixel.h
//  ImageFoundation
//
//  Created by zfan on 2017/4/29.
//  Copyright © 2017年 zfan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Pixel)


/**
 图片像素信息

 @return 返回信息数据
 */
- (unsigned char*) image_RGBAData;



/**
 根据原始数据和Size生成图片

 @param data 数据信息
 @param size 尺寸大小
 @return 返回图片
 */
+ (UIImage*)imageWithARGBData:(unsigned char*) data withSize:(CGSize) size;


@end
