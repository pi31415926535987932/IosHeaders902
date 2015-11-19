/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class UIImageView, NSObject, SUPlayerStatus, MSPieImageView;

@interface MSAudioProgressView : UIView {

	UIImageView* _bufferingImageView;
	NSObject*<OS_dispatch_source> _bufferingTimer;
	char _highlighted;
	SUPlayerStatus* _playerStatus;
	MSPieImageView* _progressView;
	UIImageView* _stopImageView;

}

@property (nonatomic,copy) SUPlayerStatus * playerStatus;                        //@synthesize playerStatus=_playerStatus - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(id)_newProgressView;
-(void)_cancelBufferingTimer;
-(void)_showBufferingImageView;
-(id)_newBufferingImageView;
-(void)setPlayerStatus:(SUPlayerStatus *)arg1 ;
-(SUPlayerStatus *)playerStatus;
@end

