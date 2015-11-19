/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPUReportingPlaybackSessionIDChangeEvent : NSObject <MPUReportingEvent> {

	SSVPlayActivityEvent* _playActivityEvent;
	NSString* _playbackSessionID;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (nonatomic,copy) NSString * playbackSessionID;                          //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)playbackSessionID;
-(NSString *)description;
-(char)isValidReportingEvent;
-(unsigned)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setPlaybackSessionID:(NSString *)arg1 ;
@end
