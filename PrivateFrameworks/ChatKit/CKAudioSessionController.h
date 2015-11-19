/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKAudioSessionController : NSObject {

	char _active;
	char _shouldUseSpeaker;
	char _dirty;

}

@property (getter=isActive) char active;               //@synthesize active=_active - In the implementation block
@property (assign) char shouldUseSpeaker;              //@synthesize shouldUseSpeaker=_shouldUseSpeaker - In the implementation block
@property (getter=isDirty) char dirty;                 //@synthesize dirty=_dirty - In the implementation block
+(id)queue;
+(id)shareInstance;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)deactivate;
-(void)setActive:(char)arg1 ;
-(void)setDirty:(char)arg1 ;
-(void)activateUsingSpeaker:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShouldUseSpeaker:(char)arg1 ;
-(void)audioSessionInterruption:(id)arg1 ;
-(char)shouldUseSpeaker;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)audioSessionMediaServicesWereLost:(id)arg1 ;
-(void)audioSessionMediaServicesWereReset:(id)arg1 ;
-(void)setActive:(char)arg1 shouldUseSpeaker:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAudioSession:(char)arg1 ;
-(char)isDirty;
@end

