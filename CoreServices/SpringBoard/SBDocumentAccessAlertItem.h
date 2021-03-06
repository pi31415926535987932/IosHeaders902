/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL, NSFileCoordinator, NSTimer;

@interface SBDocumentAccessAlertItem : SBAlertItem {

	char _downloadMessage;
	NSURL* _url;
	NSFileCoordinator* _fileCoordinator;
	NSTimer* _timer;
	id _subscriber;

}

@property (nonatomic,copy,readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSFileCoordinator * fileCoordinator;              //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                           //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) char downloadMessage;                                      //@synthesize downloadMessage=_downloadMessage - In the implementation block
@property (nonatomic,retain) id subscriber;                                             //@synthesize subscriber=_subscriber - In the implementation block
-(id)initWithURL:(id)arg1 fileCoordinator:(id)arg2 ;
-(void)scheduleToShowWithTimeInterval:(double)arg1 ;
-(NSFileCoordinator *)fileCoordinator;
-(void)_activateAlertItem:(id)arg1 ;
-(char)downloadMessage;
-(void)setDownloadMessage:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(id)subscriber;
-(void)setSubscriber:(id)arg1 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
@end

