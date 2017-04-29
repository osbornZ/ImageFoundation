//
//  UIImage+Pixel.m
//  ImageFoundation
//
//  Created by zfan on 2017/4/29.
//  Copyright © 2017年 zfan. All rights reserved.
//

#import "UIImage+Pixel.h"

@implementation UIImage (Pixel)

- (unsigned char*) image_RGBAData {
    
    long width = CGImageGetWidth(self.CGImage);
    long height = CGImageGetHeight(self.CGImage);
    if(width == 0 || height == 0)
        return 0;
    unsigned char* imageData = (unsigned char *) malloc(4 * width * height);
    
    CGColorSpaceRef cref = CGColorSpaceCreateDeviceRGB();
    CGContextRef gc = CGBitmapContextCreate(imageData,
                                            width,height,
                                            8,width*4,
                                            cref,kCGImageAlphaPremultipliedLast);
    CGColorSpaceRelease(cref);
    UIGraphicsPushContext(gc);
    
    CGRect rect = {{ 0 , 0 }, {(CGFloat)width, (CGFloat)height }};
    CGContextDrawImage( gc, rect, self.CGImage );
    UIGraphicsPopContext();
    CGContextRelease(gc);
    
    return imageData;
}

+ (UIImage*) imageWithARGBData:(unsigned char*) data withSize:(CGSize) size {
    
    // Create a bitmap context with the image data
    CGColorSpaceRef colorspace = CGColorSpaceCreateDeviceRGB();
    CGContextRef context = CGBitmapContextCreate(data, size.width, size.height, 8, size.width*4, colorspace, kCGImageAlphaPremultipliedFirst);
    CGImageRef cgImage = nil;
    if (context != nil) {
        cgImage = CGBitmapContextCreateImage (context);
        CGContextRelease(context);
    }
    CGColorSpaceRelease(colorspace);
    
    UIImage * image = nil;
    
    if(cgImage != nil)
        image = [[UIImage alloc] initWithCGImage:cgImage];
    
    // Release the cgImage when done
    CGImageRelease(cgImage);
    return image;
    
}


@end
