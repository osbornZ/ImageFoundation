//
//  UIImage+Tint.h
//  ImageFoundation
//
//  Created by zfan on 2017/4/8.
//  Copyright © 2017年 zfan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Tint)

- (UIImage *) imageWithTintColor:(UIColor *)tintColor;

- (UIImage *) imageWithGradientTintColor:(UIColor *)tintColor;

- (UIImage *) imageWithTintColor:(UIColor *)tintColor blendMode:(CGBlendMode)blendMode;


@end
