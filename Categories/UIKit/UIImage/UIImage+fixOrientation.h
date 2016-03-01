//
//  UIImage+fixOrientation.h
//  faceTest
//
//  Created by 刘占峰 on 16/3/1.
//  Copyright © 2016年 Transfer.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (fixOrientation)
/**
 *  根据图片的 Orientation 图片信息 调整图片的方位
 *
 *  @return 调整后的图片
 */
- (UIImage *)fixOrientation;
@end
