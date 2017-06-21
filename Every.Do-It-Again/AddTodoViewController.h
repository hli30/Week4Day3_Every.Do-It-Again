//
//  AddTodoViewController.h
//  Every.Do
//
//  Created by Harry Li on 2017-06-13.
//  Copyright © 2017 Harry. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddTodoViewControllerDelegate <NSObject>

-(void)passInfo:(NSString *)title andDescription:(NSString *)todoDescription andPriorityNumber:(NSString *)priorityNumber;

@end

@interface AddTodoViewController : UIViewController

@property (nonatomic) NSString *addTitle;
@property (nonatomic) NSString *addDescription;
@property (nonatomic) NSString *addPriority;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@property (nonatomic) id <AddTodoViewControllerDelegate> delegate;

@end

