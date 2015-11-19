/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface CNFRegLoadingView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * message; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end
