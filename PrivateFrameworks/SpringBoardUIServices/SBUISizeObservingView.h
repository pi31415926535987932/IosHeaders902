/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : UIView {

	char _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<SBUISizeObservingViewDelegate>)delegate;
@end

