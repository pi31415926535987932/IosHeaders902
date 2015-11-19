/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MRLayer, MRAction, MRSlideInfo, NSString;

@interface MRSlideFocusState : NSObject {

	char _isTransitioning;
	char _isGoingToNext;
	char _delegateIsTransitioningToo;
	char _isInZoomMode;
	MRLayer* _delegate;
	MRAction* _action;
	MRSlideInfo* _slideInfo;
	NSString* _slideID;
	MRSlideInfo* _previousSlideInfo;
	NSString* _previousSlideID;
	MRSlideInfo* _nextSlideInfo;
	NSString* _nextSlideID;
	unsigned _currentFocuserIndex;

}

@property (nonatomic,retain) MRLayer * delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MRAction * action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) MRSlideInfo * slideInfo;                      //@synthesize slideInfo=_slideInfo - In the implementation block
@property (nonatomic,copy) NSString * slideID;                             //@synthesize slideID=_slideID - In the implementation block
@property (nonatomic,retain) MRSlideInfo * previousSlideInfo;              //@synthesize previousSlideInfo=_previousSlideInfo - In the implementation block
@property (nonatomic,copy) NSString * previousSlideID;                     //@synthesize previousSlideID=_previousSlideID - In the implementation block
@property (nonatomic,retain) MRSlideInfo * nextSlideInfo;                  //@synthesize nextSlideInfo=_nextSlideInfo - In the implementation block
@property (nonatomic,copy) NSString * nextSlideID;                         //@synthesize nextSlideID=_nextSlideID - In the implementation block
@property (assign,nonatomic) unsigned currentFocuserIndex;                 //@synthesize currentFocuserIndex=_currentFocuserIndex - In the implementation block
@property (assign,nonatomic) char isTransitioning;                         //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (assign,nonatomic) char isGoingToNext;                           //@synthesize isGoingToNext=_isGoingToNext - In the implementation block
@property (assign,nonatomic) char delegateIsTransitioningToo;              //@synthesize delegateIsTransitioningToo=_delegateIsTransitioningToo - In the implementation block
@property (assign,nonatomic) char isInZoomMode;                            //@synthesize isInZoomMode=_isInZoomMode - In the implementation block
-(void)setSlideID:(NSString *)arg1 ;
-(void)setSlideInfo:(MRSlideInfo *)arg1 ;
-(MRSlideInfo *)slideInfo;
-(char)isGoingToNext;
-(NSString *)previousSlideID;
-(NSString *)slideID;
-(void)setDelegateIsTransitioningToo:(char)arg1 ;
-(void)setIsInZoomMode:(char)arg1 ;
-(char)delegateIsTransitioningToo;
-(void)setIsGoingToNext:(char)arg1 ;
-(void)setPreviousSlideInfo:(MRSlideInfo *)arg1 ;
-(void)setPreviousSlideID:(NSString *)arg1 ;
-(void)setNextSlideInfo:(MRSlideInfo *)arg1 ;
-(MRSlideInfo *)previousSlideInfo;
-(void)setIsTransitioning:(char)arg1 ;
-(char)isInZoomMode;
-(void)setCurrentFocuserIndex:(unsigned)arg1 ;
-(unsigned)currentFocuserIndex;
-(void)setNextSlideID:(NSString *)arg1 ;
-(NSString *)nextSlideID;
-(MRSlideInfo *)nextSlideInfo;
-(void)setDelegate:(MRLayer *)arg1 ;
-(void)dealloc;
-(MRLayer *)delegate;
-(MRAction *)action;
-(void)setAction:(MRAction *)arg1 ;
-(char)isTransitioning;
@end

