/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {

	NSTimer* _timer;
	char _animateUnhighlight;
	char _valid;
	UITableViewCell* _cell;
	int _originalSelectionStyle;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) char animateUnhighlight;                  //@synthesize animateUnhighlight=_animateUnhighlight - In the implementation block
@property (assign,nonatomic) int originalSelectionStyle;                 //@synthesize originalSelectionStyle=_originalSelectionStyle - In the implementation block
@property (nonatomic,readonly) char valid;                               //@synthesize valid=_valid - In the implementation block
+(id)contextWithCell:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(UITableViewCell *)cell;
-(char)valid;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)_timerFired;
-(void)_killTimer;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(char)arg2 ;
-(char)animateUnhighlight;
-(int)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(int)arg1 ;
@end
