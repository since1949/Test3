//
//  AppDelegate.h
//  Test3
//
//  Created by TinyWorks_Dev on 2018/6/27.
//  Copyright © 2018年 TinyWorks_Dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

