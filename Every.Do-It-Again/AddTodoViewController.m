//
//  AddTodoViewController.m
//  Every.Do
//
//  Created by Harry Li on 2017-06-13.
//  Copyright © 2017 Harry. All rights reserved.
//

#import "AddTodoViewController.h"

@interface AddTodoViewController ()
@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextView *detailTextField;
@property (weak, nonatomic) IBOutlet UITextField *priorityTextField;
@end

@implementation AddTodoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)doneButtonPressed:(UIButton *)sender {
    NSString *title = self.titleTextField.text;
    NSString *todoDescription = self.detailTextField.text;
    NSString *priorityNumber = self.priorityTextField.text;
    [self.delegate passInfo:title andDescription:todoDescription andPriorityNumber:priorityNumber];
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
