//
//  ViewController.h
//  YImagePickerDemo
//
//  Created by yuvraj on 26/03/14.
//  Copyright (c) 2014 rapidops. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CameraViewController.h"

@interface ViewController : UIViewController <CameraViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@end
