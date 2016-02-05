//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Pankaj Vohra on 2/1/16.
//  Copyright © 2016 Pankaj Vohra. All rights reserved.
//

//
//#import <UIKit/UIKit.h>
//
//@class AwesomeFloatingToolbar;
//
//@protocol AwesomeFloatingToolbarDelegate <NSObject>
//
//@optional
//
//- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;
//
//@end
//
//@interface AwesomeFloatingToolbar : UIView
//
//- (instancetype) initWithFourTitles:(NSArray *)titles;
//
//- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;
//
//@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;
//
//@end

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end