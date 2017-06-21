//
//  MyTableViewCell.h
//  Every.Do-It-Again
//
//  Created by Harry Li on 2017-06-21.
//  Copyright © 2017 Harry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *isCompleteLabel;

@end
