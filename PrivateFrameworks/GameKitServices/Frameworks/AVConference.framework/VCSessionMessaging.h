/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCSessionMessaging : NSObject {

	NSMutableDictionary* topics;
	unsigned long p2pID;

}
-(void)dealloc;
-(id)newPackedMessageFromDictionary:(id)arg1 ;
-(void)sendMessage:(id)arg1 withTopic:(id)arg2 ;
-(void)stopMessaging;
-(id)initWithP2PID:(unsigned long)arg1 remoteVersion:(id)arg2 ;
-(void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(char)arg3 receiveHandler:(/*^block*/id)arg4 ;
-(id)newDictionaryFromUnpackedMessage:(id)arg1 ;
@end
