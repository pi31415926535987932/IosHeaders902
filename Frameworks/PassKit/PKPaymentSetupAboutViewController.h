/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString, PKPaymentSetupAboutView;

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {

	char _requiresPrivacy;
	NSString* _bodyText;
	PKPaymentSetupAboutView* _aboutView;
	void* _navigationController;
	char _navigationControllerHidesShadow;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_done:(id)arg1 ;
-(id)initWithAboutText:(id)arg1 isPresented:(char)arg2 ;
-(id)initForPrivacyPresented:(char)arg1 ;
-(void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(char)arg2 ;
-(void)_showPrivacyView:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
@end

