/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, _PGPlaybackProgressIndicatorMaskView;

@interface PGPlaybackProgressIndicator : UIView {

	double _playbackProgress;
	NSArray* _loadedTimeRanges;
	UIView* _containerView;
	_PGPlaybackProgressIndicatorMaskView* _loadedTimeRangesMaskView;
	_PGPlaybackProgressIndicatorMaskView* _playbackProgressMaskView;

}

@property (assign,nonatomic) double playbackProgress; 
@property (nonatomic,retain) NSArray * loadedTimeRanges; 
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(NSArray *)loadedTimeRanges;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)_updateLoadedTimeRangesMaskViewMaskRanges;
@end

