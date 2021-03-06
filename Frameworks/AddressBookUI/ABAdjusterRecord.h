/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIScrollView, NSTimer;

@interface ABAdjusterRecord : NSObject {

	UIScrollView* _scrollView;
	float _adjustment;
	char _manuallyAdjusted;
	NSTimer* _delayedScrollTimer;

}

@property (nonatomic,retain) UIScrollView * scrollView;                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float adjustment;                          //@synthesize adjustment=_adjustment - In the implementation block
@property (assign,nonatomic) char manuallyAdjusted;                     //@synthesize manuallyAdjusted=_manuallyAdjusted - In the implementation block
@property (nonatomic,retain) NSTimer * delayedScrollTimer;              //@synthesize delayedScrollTimer=_delayedScrollTimer - In the implementation block
+(id)recordWithScrollView:(id)arg1 ;
-(void)setDelayedScrollTimer:(NSTimer *)arg1 ;
-(NSTimer *)delayedScrollTimer;
-(float)adjustment;
-(void)setAdjustment:(float)arg1 ;
-(void)setManuallyAdjusted:(char)arg1 ;
-(void)_adjustTableForKeyboardInfo:(id)arg1 ;
-(void)cancelDelayedAdjustments;
-(char)manuallyAdjusted;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
@end

