//
//  NSData+Utils.h
//  ImageFoundation
//
//  Created by zfan on 2017/4/29.
//  Copyright © 2017年 zfan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Utils)

/**
 detect ImageType

 @return 图片类型信息
 */
- (NSString *)detectImageSuffix;

@end
