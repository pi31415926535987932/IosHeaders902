/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(char)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(UISystemNavigationAction *)systemNavigationAction;
-(id)_displayStringFromURL:(id)arg1 ;
-(NSString *)destinationText;
-(void)setDestinationText:(NSString *)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(id)_nominalTitleWithDestinationText:(id)arg1 ;
-(char)layoutImageOnTrailingEdge;
-(void)userDidActivateButton:(id)arg1 ;
@end

