//
//  ViewController.h
//  iosOpenCV-TheCamera
//
//  Created by Sri Raghu Malireddi on 23/07/16.
//  Copyright © 2016 Sri Raghu Malireddi. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifdef __cplusplus
#import <opencv2/opencv.hpp>
#import "opencv2/highgui/ios.h"
#endif

@interface ViewController : UIViewController<CvVideoCameraDelegate>

@end

