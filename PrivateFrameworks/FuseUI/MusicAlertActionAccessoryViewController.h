/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIAlertControllerVisualStyle, UIView, NSString, UIColor;

@interface MusicAlertActionAccessoryViewController : UIViewController {

	UILabel* _actionDescriptiveLabel;
	UILabel* _actionTitleLabel;
	UIAlertControllerVisualStyle* _visualStyle;
	UIView* _accessoryView;
	NSString* _actionDescriptiveText;
	NSString* _actionTitle;
	UIColor* _actionTitleTextColor;
	NSString* _shortActionTitle;

}

@property (nonatomic,retain) UIView * accessoryView;                      //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) NSString * actionDescriptiveText;              //@synthesize actionDescriptiveText=_actionDescriptiveText - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,retain) UIColor * actionTitleTextColor;              //@synthesize actionTitleTextColor=_actionTitleTextColor - In the implementation block
@property (nonatomic,copy) NSString * shortActionTitle;                   //@synthesize shortActionTitle=_shortActionTitle - In the implementation block
+(id)libraryOfflineSwitch;
+(id)alertActionAccessoryViewControllerWithOfflineSwitch:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(id)_visualStyle;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setActionTitle:(NSString *)arg1 ;
-(void)setShortActionTitle:(NSString *)arg1 ;
-(void)setActionDescriptiveText:(NSString *)arg1 ;
-(void)setActionTitleTextColor:(UIColor *)arg1 ;
-(void)_invalidateVisualStyle;
-(void)_configureActionDescriptiveLabel;
-(void)_configureActionTitleLabel;
-(NSString *)actionDescriptiveText;
-(NSString *)actionTitle;
-(UIColor *)actionTitleTextColor;
-(NSString *)shortActionTitle;
@end

