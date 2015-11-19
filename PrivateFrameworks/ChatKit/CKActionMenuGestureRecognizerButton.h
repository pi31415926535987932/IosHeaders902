/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKActionMenuGestureRecognizerButtonDelegate;
@class CKActionMenuGestureRecognizer, UIButton, NSDate;

@interface CKActionMenuGestureRecognizerButton : NSObject {

	CKActionMenuGestureRecognizer* _gestureRecognizer;
	UIButton* _button;
	id<CKActionMenuGestureRecognizerButtonDelegate> _delegate;
	NSDate* _gestureDidBeginDate;

}

@property (nonatomic,retain) CKActionMenuGestureRecognizer * gestureRecognizer;                     //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                     //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) id<CKActionMenuGestureRecognizerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * gestureDidBeginDate;                                          //@synthesize gestureDidBeginDate=_gestureDidBeginDate - In the implementation block
+(id)actionMenuGestureRecognizerButtonWithButton:(id)arg1 ;
-(UIButton *)button;
-(void)setDelegate:(id<CKActionMenuGestureRecognizerButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<CKActionMenuGestureRecognizerButtonDelegate>)delegate;
-(void)setGestureRecognizer:(CKActionMenuGestureRecognizer *)arg1 ;
-(CKActionMenuGestureRecognizer *)gestureRecognizer;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 button:(id)arg2 ;
-(void)gestureRecognized:(id)arg1 ;
-(void)touchDownButton:(id)arg1 ;
-(void)touchUpInsideButton:(id)arg1 ;
-(void)touchUpOutsideButton:(id)arg1 ;
-(void)setGestureDidBeginDate:(NSDate *)arg1 ;
-(NSDate *)gestureDidBeginDate;
@end

