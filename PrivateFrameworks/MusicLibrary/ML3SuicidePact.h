/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) char isSigned; 
+(id)sharedPact;
-(void)execute;
-(void)dealloc;
-(id)init;
-(char)isSigned;
-(void)signForReason:(int)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(int)arg1 ;
-(char)isSignedForReason:(int)arg1 ;
@end

