//
//  DetailViewController.h
//  PCS App
//
//  Created by Trung Lai on 2/21/16.
//  Copyright © 2016 Trung Lai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

